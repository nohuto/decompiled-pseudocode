/*
 * XREFs of ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18006F8E8
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetPrimaryDisplay(CDWMDisplaySet *this, const struct CDWMDisplay **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  const struct CDWMDisplay *v4; // r8

  v2 = *((unsigned int *)this + 8);
  v3 = 0;
  if ( (unsigned int)v2 < *((_DWORD *)this + 16) )
  {
    v4 = *(const struct CDWMDisplay **)(*((_QWORD *)this + 5) + 8 * v2);
    *a2 = v4;
    _InterlockedIncrement((volatile signed __int32 *)v4);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0xC9u);
  }
  return v3;
}
