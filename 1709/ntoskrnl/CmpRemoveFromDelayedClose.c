/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1405E5FC0
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x14046EB3C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  char v2; // al
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  _QWORD *v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_BYTE *)(a1 + 56);
  if ( (v2 & 2) != 0 )
  {
    v3 = a1 + 216;
    if ( (v2 & 4) != 0 )
    {
      **(_BYTE **)v3 = 1;
      *(_BYTE *)(a1 + 56) &= ~4u;
    }
    else
    {
      v4 = *(_BYTE **)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD **)(a1 + 224), *v5 != v3) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v5 = v4;
      *((_QWORD *)v4 + 1) = v5;
      --qword_1407F4148;
    }
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *(_QWORD *)v3 = v3;
    _InterlockedOr(v6, 0);
    *(_BYTE *)(a1 + 56) &= ~2u;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
}
