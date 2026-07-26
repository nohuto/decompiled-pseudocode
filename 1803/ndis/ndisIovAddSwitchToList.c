/*
 * XREFs of ndisIovAddSwitchToList @ 0x1C006BCDC
 * Callers:
 *     ndisIovFinalizeNicSwitch @ 0x1C006C74C (ndisIovFinalizeNicSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovAddSwitchToList(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  KIRQL v5; // r9
  __int64 *v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 *v9; // rcx
  __int64 v10; // rax

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v6 = *(__int64 **)(a1 + 4728);
  *(_DWORD *)(a1 + 1856) = 2884183;
  if ( v6 == (__int64 *)(a1 + 4728) )
  {
LABEL_6:
    v9 = (__int64 *)v6[1];
    v10 = *v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      __fastfail(3u);
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a2;
    *v9 = a2;
    ++*(_DWORD *)(a1 + 4720);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 36);
    while ( 1 )
    {
      v8 = *((_DWORD *)v6 + 9);
      if ( v8 == v7 )
        break;
      if ( v8 <= v7 )
      {
        v6 = (__int64 *)*v6;
        if ( v6 != (__int64 *)(a1 + 4728) )
          continue;
      }
      goto LABEL_6;
    }
    v4 = -1073741270;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  return v4;
}
