/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C0024108
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00C3F0C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000729C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int BitsPerPixel; // edi

  v2 = *((unsigned int *)this + 18);
  if ( (((_DWORD)v2 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v2 == 2 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
  BitsPerPixel = GetBitsPerPixel(*((_DWORD *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
