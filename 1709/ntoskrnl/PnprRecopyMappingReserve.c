/*
 * XREFs of PnprRecopyMappingReserve @ 0x14020027C
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140200330 (PnprRecopyMirrorPages.c)
 * Callees:
 *     PnprRecopyAddress @ 0x140200224 (PnprRecopyAddress.c)
 *     MmContainingPageForReservedMapping @ 0x140216ED4 (MmContainingPageForReservedMapping.c)
 *     PnprMarkOrMirrorPages @ 0x14042C918 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = MmContainingPageForReservedMapping(a1[1] + (unsigned int)(v3 << 12));
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 20984);
  if ( !v9 )
    v9 = 5704;
  *(_DWORD *)(PnprContext + 20984) = v9;
  v10 = *(_DWORD *)(v8 + 20988);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 20988) = v10;
  return (unsigned int)v6;
}
