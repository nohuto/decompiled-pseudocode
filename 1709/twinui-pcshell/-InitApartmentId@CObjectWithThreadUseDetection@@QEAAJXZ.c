/*
 * XREFs of ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800246F8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x180035C48 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18007DB9C (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015FA3C (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18016E544 (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180170434 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800272E0 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::InitApartmentId(CObjectWithThreadUseDetection *this)
{
  unsigned int ApartmentType; // edi
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  if ( !(unsigned __int8)_ShouldCheckApartments(*((unsigned int *)this + 11)) )
    return 0;
  *((_DWORD *)this + 10) = 0;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( (ApartmentType & 0x80000000) == 0 )
  {
    switch ( pAptType )
    {
      case APTTYPE_STA:
        goto LABEL_7;
      case APTTYPE_MTA:
        *((_DWORD *)this + 10) = 0;
        return ApartmentType;
      case APTTYPE_NA:
        *((_DWORD *)this + 10) = -1;
        return ApartmentType;
      case APTTYPE_MAINSTA:
LABEL_7:
        *((_DWORD *)this + 10) = GetCurrentThreadId();
        break;
    }
  }
  return ApartmentType;
}
