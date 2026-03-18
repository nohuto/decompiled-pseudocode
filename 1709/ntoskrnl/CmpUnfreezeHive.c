/*
 * XREFs of CmpUnfreezeHive @ 0x14068F084
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14068EB9C (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14068C564 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(PVOID P)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rcx

  *((_BYTE *)P + 4112) = 0;
  v2 = (_QWORD *)*((_QWORD *)P + 515);
  if ( v2 )
  {
    if ( CmWorkerEngineDequeueWorkItem(v2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive((PERESOURCE *)P);
    }
    *((_QWORD *)P + 515) = 0LL;
  }
  v3 = *((_QWORD *)P + 513);
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3);
    *((_QWORD *)P + 513) = 0LL;
  }
}
