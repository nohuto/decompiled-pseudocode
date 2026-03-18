/*
 * XREFs of DxgkEnableHighPrecisionBrightness @ 0x1C0198520
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0038520 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0038554 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C0197D34 (-EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0197F08 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEnableHighPrecisionBrightness(char a1, struct _ERESOURCE *a2)
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
