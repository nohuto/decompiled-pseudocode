/*
 * XREFs of StorCreateEventQueue @ 0x1C00173B4
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateEventQueue(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax

  v2 = KeQueryHighestNodeNumber() + 1;
  v3 = v2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 56LL * v2 + 64, 0x51506152u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v2 )
  {
    v6 = (char *)(PoolWithTag + 18);
    do
    {
      *(_QWORD *)v6 = v6 - 8;
      *((_QWORD *)v6 - 1) = v6 - 8;
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 4);
      *((_DWORD *)v6 + 10) = -1;
      v7 = v6 + 8;
      *((_QWORD *)v6 + 2) = v6 + 8;
      v6 += 56;
      *v7 = v7;
      *((_QWORD *)v6 - 4) = 0LL;
      --v3;
    }
    while ( v3 );
  }
  *v5 = 0;
  v5[1] = 4;
  result = 0LL;
  *a1 = v5;
  return result;
}
