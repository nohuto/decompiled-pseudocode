/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1405E2F64
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14054E3C0 (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  _QWORD *v6; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_BYTE *)(a1 + 56);
  if ( (v2 & 2) != 0 )
  {
    v3 = (_QWORD *)(a1 + 216);
    v4 = (v2 & 4) == 0;
    v5 = *(_QWORD *)(a1 + 216);
    if ( v4 )
    {
      if ( *(_QWORD **)(v5 + 8) != v3 || (v6 = *(_QWORD **)(a1 + 224), (_QWORD *)*v6 != v3) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      --qword_140862A88;
    }
    else
    {
      *(_BYTE *)v5 = 1;
      *(_BYTE *)(a1 + 56) &= ~4u;
    }
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *v3 = v3;
    _InterlockedOr(v7, 0);
    *(_BYTE *)(a1 + 56) &= ~2u;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
}
