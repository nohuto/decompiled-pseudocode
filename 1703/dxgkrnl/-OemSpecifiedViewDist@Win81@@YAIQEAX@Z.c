/*
 * XREFs of ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C01BFED4
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C01BF98C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall Win81::OemSpecifiedViewDist(Win81 *this, void *const a2)
{
  wchar_t *v2; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)this + 24), L"ViewDistanceOverride", (char *)&v4, 4u, 2u) < 0 )
    return 0LL;
  v2 = (wchar_t *)&unk_1C0055060;
  while ( v4 != *(_DWORD *)v2 )
  {
    v2 += 2;
    if ( v2 == L"ProcessName" )
      return 0LL;
  }
  return v4;
}
