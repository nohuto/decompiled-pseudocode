/*
 * XREFs of ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C01A7A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003323C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0033270 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C01A7C80 (-EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A7E54 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEnableHighPrecisionBrightness(unsigned __int8 a1, struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  LPMDisplayCtrl *v7; // rcx
  PERESOURCE Resource; // [rsp+38h] [rbp+10h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  if ( a2 )
  {
    if ( FileObject && LPMDisplayCtrl::HasRegisteredInternalDisplay(v4) )
    {
      if ( *(_DWORD *)(v6 + 28) || (v5 = LPMDisplayCtrl::Initialize(v7), v5 >= 0) )
        v5 = LPMDisplayCtrl::EnableHighPrecisionBrightness(v7, a1, (const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *)a2);
    }
    else
    {
      v5 = -1073741661;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
