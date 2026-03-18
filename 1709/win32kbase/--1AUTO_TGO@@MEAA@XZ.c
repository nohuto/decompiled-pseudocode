/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C001B1C8
 * Callers:
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0065F44 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0066ED8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F511C (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C00F5170 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((char *)this + 16);
}
