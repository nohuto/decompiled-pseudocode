/*
 * XREFs of CmpUnfreezeHive @ 0x14066575C
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140662E84 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  _QWORD *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *(_BYTE *)(a1 + 4112) = 0;
  v2 = *(_QWORD **)(a1 + 4120);
  if ( v2 )
  {
    if ( CmWorkerEngineDequeueWorkItem(v2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(a1);
    }
    *(_QWORD *)(a1 + 4120) = 0LL;
  }
  v3 = *(volatile signed __int32 **)(a1 + 4104);
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3, 1u);
    *(_QWORD *)(a1 + 4104) = 0LL;
  }
}
