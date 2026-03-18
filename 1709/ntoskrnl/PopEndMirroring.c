/*
 * XREFs of PopEndMirroring @ 0x140432FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     EtwKernelMemoryRundown @ 0x1407455D8 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edi
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 *v8[2]; // [rsp+48h] [rbp-19h] BYREF
  __int16 v9; // [rsp+58h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+68h] [rbp+7h] BYREF
  int v11; // [rsp+C8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 )
  {
    if ( (_DWORD)BugCheckParameter3 != 1 )
    {
      v2 = -1073741823;
      goto LABEL_11;
    }
    v2 = *(_DWORD *)(BugCheckParameter4 + 188);
    if ( v2 >= 0 )
    {
      v2 = PopInvokeSystemStateHandler((unsigned int)PopHibernatePowerStateHandlerType);
      if ( v2 >= 0 )
      {
        if ( PoResumeFromHibernate )
          v2 = 1073742484;
        goto LABEL_8;
      }
    }
LABEL_11:
    IoAddTriageDumpDataBlock((int)&PopAction, 280);
    if ( qword_140365818 )
      IoAddTriageDumpDataBlock(qword_140365818, 464);
    if ( BugCheckParameter4 )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter4, 464);
      v4 = *(_QWORD *)(BugCheckParameter4 + 168);
      if ( v4 )
        IoAddTriageDumpDataBlock(v4, 376);
      v5 = *(_QWORD *)(BugCheckParameter4 + 200);
      if ( v5 )
        IoAddTriageDumpDataBlock(v5, 984);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( (BYTE4(xmmword_140401150) & 1) != 0 )
    EtwKernelMemoryRundown();
  KeSetEvent(PopSleeperHandoff, 0, 1u);
  KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
  v2 = PopBuildMemoryImageHeader((_QWORD *)BugCheckParameter4, 0);
  if ( v2 < 0 )
    goto LABEL_11;
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, 0LL);
  KeGetCurrentIrql();
  __writecr8(2uLL);
  memset(&PopHibernateSystemContext, 0, 0x50uLL);
  dword_140387BF0 = KeNumberProcessors_0;
  dword_140387BFC = KeNumberProcessors_0;
  dword_140387BF8 = 1;
  if ( ((unsigned __int8)&SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  SListHead = 0uLL;
  KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
  v8[1] = (unsigned __int16 *)qword_140401408[0];
  v8[0] = (unsigned __int16 *)KeActiveProcessors;
  Dpc.Importance = 2;
  v9 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v8) )
  {
    if ( v11 )
    {
      v6 = dword_140387BF4;
      if ( !Dpc.DpcData )
        Dpc.Number = v11 + 1280;
      KeInsertQueueDpc(&Dpc, 0LL, 0LL);
      while ( v6 == dword_140387BF4 )
        ;
    }
  }
LABEL_8:
  result = 0LL;
  if ( v2 == 1073742484 )
    return 1073742484LL;
  return result;
}
