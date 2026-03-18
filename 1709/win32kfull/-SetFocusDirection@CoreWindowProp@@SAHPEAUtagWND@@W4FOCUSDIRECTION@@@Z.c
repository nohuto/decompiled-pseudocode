/*
 * XREFs of ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C020C024
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::SetFocusDirection(__int64 a1, int a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v4) )
    return 0LL;
  *(_DWORD *)(v4 + 44) = a2;
  return 1LL;
}
