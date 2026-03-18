/*
 * XREFs of FillDevmodeFromVidPn @ 0x1C00C420C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00C3F0C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall FillDevmodeFromVidPn(__int64 a1, int a2, void *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax

  LODWORD(v6) = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v7 = a1 + 120;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = 0LL;
  if ( v8 != v7 )
    v9 = v8 - 8;
  while ( v9 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL) == a2 )
    {
      v10 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v9,
              (struct _CDD_DEVMODE *)a3);
      v6 = v10;
      if ( v10 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = v9;
        *(_QWORD *)(v16 + 32) = v6;
        WdLogEvent5_WdWarning(v16);
      }
      return (unsigned int)v6;
    }
    v15 = *(_QWORD *)(v9 + 8);
    v9 = v15 - 8;
    if ( v15 == v7 )
      v9 = 0LL;
  }
  return (unsigned int)v6;
}
