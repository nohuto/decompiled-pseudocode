/*
 * XREFs of ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC
 * Callers:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C005EAC4 (ValidateHwndIAMComponetUIAware.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserGetForegroundWindow @ 0x1C00E1330 (NtUserGetForegroundWindow.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120B14 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetHost(struct tagWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v2) )
    return *(struct tagWND **)(v2 + 24);
  else
    return 0LL;
}
