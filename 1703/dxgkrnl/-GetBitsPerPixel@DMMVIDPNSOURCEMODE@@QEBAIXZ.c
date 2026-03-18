/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C0007434
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00F17B8 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003A18 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int BitsPerPixel; // edi
  __int64 v8; // rax

  v5 = *((unsigned int *)this + 18);
  if ( (((_DWORD)v5 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v5 == 2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  BitsPerPixel = GetBitsPerPixel(*((_DWORD *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
