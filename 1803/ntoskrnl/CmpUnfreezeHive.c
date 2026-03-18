/*
 * XREFs of CmpUnfreezeHive @ 0x1406F326C
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1406F2D58 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1406F0978 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(_QWORD *P)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rcx

  *((_BYTE *)P + 2936) = 0;
  v2 = (_QWORD *)P[368];
  if ( v2 )
  {
    if ( CmWorkerEngineDequeueWorkItem(v2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(P);
    }
    P[368] = 0LL;
  }
  v3 = P[366];
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3);
    P[366] = 0LL;
  }
}
