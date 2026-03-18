/*
 * XREFs of PopEndMirroring @ 0x14040CD30
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopBuildMemoryImageHeader @ 0x14040D080 (PopBuildMemoryImageHeader.c)
 *     EtwKernelMemoryRundown @ 0x14070A548 (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rdi
  int v2; // ebx
  int v3; // esi
  ULONG_PTR v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int16 *v9[2]; // [rsp+40h] [rbp-19h] BYREF
  __int16 v10; // [rsp+50h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( !(_DWORD)BugCheckParameter3 )
  {
    if ( (BYTE4(xmmword_1403E4010) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)qword_14034B1C0);
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
      dword_14036E2E0 = KeNumberProcessors_0;
      dword_14036E2EC = KeNumberProcessors_0;
      dword_14036E2E8 = 1;
      InitializeSListHead(&SListHead);
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v9[1] = (unsigned __int16 *)qword_1403E42B8[0];
      v9[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v9) )
      {
        if ( v12 )
        {
          v3 = dword_14036E2E4;
          if ( !Dpc.DpcData )
            Dpc.Number = v12 + 640;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v3 == dword_14036E2E4 )
            ;
        }
      }
      goto LABEL_18;
    }
    goto LABEL_22;
  }
  if ( (_DWORD)BugCheckParameter3 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_22;
  }
  v2 = *(_DWORD *)(qword_14034B1C0 + 188);
  if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler(PopHibernatePowerStateHandlerType, qword_14034B1C0), v2 < 0) )
  {
LABEL_22:
    IoAddTriageDumpDataBlock((int)&PopAction, 272);
    if ( qword_14034B1B8 )
      IoAddTriageDumpDataBlock(qword_14034B1B8, 464);
    if ( qword_14034B1C0 )
    {
      IoAddTriageDumpDataBlock(qword_14034B1C0, 464);
      v5 = qword_14034B1C0;
      v6 = *(_QWORD *)(qword_14034B1C0 + 168);
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(v6, 376);
        v5 = qword_14034B1C0;
      }
      v7 = *(_QWORD *)(v5 + 200);
      if ( v7 )
        IoAddTriageDumpDataBlock(v7, 984);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_18:
  if ( v2 != 1073742484 )
    return 0;
  return (unsigned int)v2;
}
