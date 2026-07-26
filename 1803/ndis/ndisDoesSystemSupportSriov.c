/*
 * XREFs of ndisDoesSystemSupportSriov @ 0x1C00B5D40
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 */

void ndisDoesSystemSupportSriov()
{
  const wchar_t *v20; // r8

  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_(0x81u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids);
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 0x40000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x40000006 )
      {
        _RAX = 1073741830LL;
        __asm { cpuid }
        ndisSystemSupportsSriov = (_RAX & 0x30) == 48;
      }
    }
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( (unsigned __int8)byte_1C0099621 >= 4u )
      WPP_SF_(0x82u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    v20 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v20 = L"No";
    WPP_SF_S(0x83u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v20);
  }
}
