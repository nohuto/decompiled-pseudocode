/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x1C01B37FC
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C01E33D0 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01B2ED0 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 776) + 100LL) & 0x800) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1096);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 1096) = v3 & 0xFFDFFFFF;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration((const struct tagPROCESSINFO *)v2) )
          RegisterRawInputDevices((__int64)&unk_1C0329040, 1LL, 2u);
      }
    }
  }
  return 1LL;
}
