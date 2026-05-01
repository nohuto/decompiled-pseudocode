/*
 * XREFs of ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18000FBE4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x1800345AC (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18007AEB0 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180131638 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@.c)
 *     ??$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801400D8 (--$MakeAndInitialize@VXamlAltTabViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180141D98 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180026B70 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
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
