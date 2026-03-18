/*
 * XREFs of PopEndMirroring @ 0x140476E00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopBuildMemoryImageHeader @ 0x140477074 (PopBuildMemoryImageHeader.c)
 *     EtwKernelMemoryRundown @ 0x1407A7550 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  int v3; // edi
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 *v11[2]; // [rsp+48h] [rbp-19h] BYREF
  __int16 v12; // [rsp+58h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+68h] [rbp+7h] BYREF
  int v14; // [rsp+C8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( !(_DWORD)BugCheckParameter3 )
  {
    if ( (BYTE4(xmmword_14044C2D0) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)BugCheckParameter4);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      memset(&PopHibernateSystemContext, 0, 0x50uLL);
      dword_1403CDBA0 = KeNumberProcessors_0;
      dword_1403CDBAC = KeNumberProcessors_0;
      dword_1403CDBA8 = 1;
      if ( ((unsigned __int8)&SListHead & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      SListHead = 0uLL;
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v11[1] = (unsigned __int16 *)qword_14044C5D8[0];
      v11[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v12 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v11) )
      {
        if ( v14 )
        {
          v3 = dword_1403CDBA4;
          if ( !Dpc.DpcData )
            Dpc.Number = v14 + 1280;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v3 == dword_1403CDBA4 )
            ;
        }
      }
      goto LABEL_19;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)BugCheckParameter3 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_23;
  }
  v2 = *(_DWORD *)(BugCheckParameter4 + 188);
  if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler(PopHibernatePowerStateHandlerType, BugCheckParameter4), v2 < 0) )
  {
LABEL_23:
    IoAddTriageDumpDataBlock((int)&PopAction, 280);
    if ( qword_1403AA098 )
      IoAddTriageDumpDataBlock(qword_1403AA098, 472);
    if ( BugCheckParameter4 )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter4, 456);
      v8 = *(_QWORD *)(BugCheckParameter4 + 168);
      if ( v8 )
        IoAddTriageDumpDataBlock(v8, 376);
      v9 = *(_QWORD *)(BugCheckParameter4 + 200);
      if ( v9 )
        IoAddTriageDumpDataBlock(v9, 984);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_19:
  v4 = v2;
  v5 = v2 == 1073742484;
  v6 = 0;
  if ( v5 )
    return v4;
  return v6;
}
