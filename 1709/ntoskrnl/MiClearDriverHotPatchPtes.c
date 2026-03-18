/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x1406E17D8
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // edx
  unsigned __int64 *v3; // r10
  unsigned __int64 result; // rax
  int i; // r11d

  PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
  v3 = (unsigned __int64 *)(PteAddress + 8LL * ((v2 >> 12) + ((v2 & 0xFFF) != 0)));
  result = (unsigned int)dword_140400168 >> 12;
  for ( i = result + ((dword_140400168 & 0xFFF) != 0); i; --i )
  {
    result = *v3;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
      result = MiReadPteShadow();
    if ( (result & 1) == 0 )
      break;
    *v3 = 0LL;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
        result = (unsigned __int64)MiWritePteShadow();
    }
    ++v3;
  }
  return result;
}
