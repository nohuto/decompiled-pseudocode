/*
 * XREFs of ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C01A7C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003323C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0033270 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A7E54 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C01A8340 (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 */

__int64 __fastcall DxgkSetHighPrecisionBrightness(
        const struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a1,
        struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  LPMDisplayCtrl *v6; // rcx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  if ( a1 )
  {
    if ( FileObject && LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
    {
      if ( *(_DWORD *)(v5 + 28) || (v4 = LPMDisplayCtrl::Initialize(v6), v4 >= 0) )
        v4 = LPMDisplayCtrl::SetCurrentBrightnessLevel(v6, a1);
    }
    else
    {
      v4 = -1073741661;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
