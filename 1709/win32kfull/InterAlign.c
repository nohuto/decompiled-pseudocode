/*
 * XREFs of InterAlign @ 0x1C02C92A4
 * Callers:
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall InterAlign(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // r8d

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(v4 + 4LL * a2);
  v6 = *(_DWORD *)(v4 + 4LL * a4);
  if ( v5 > v6 )
  {
    v7 = v5;
    v5 = *(_DWORD *)(v4 + 4LL * a4);
    v6 = v7;
  }
  v8 = *(_DWORD *)(v4 + 4LL * a3);
  return v5 <= v8 && v8 <= v6;
}
