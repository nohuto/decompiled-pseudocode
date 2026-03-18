/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C005D344
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C005455C (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0056AE8 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  int IsComponent; // eax
  __int64 TopLevelWindow; // rcx
  __int64 result; // rax
  struct tagWND *Host; // rax

  v1 = a1;
  IsComponent = CoreWindowProp::IsComponent(a1);
  TopLevelWindow = (__int64)v1;
  if ( !IsComponent )
    return GetWindowCloakState(TopLevelWindow);
  if ( (GetWindowCloakState(v1) & 1) != 0 )
    return 1LL;
  while ( 1 )
  {
    Host = CoreWindowProp::GetHost(v1);
    v1 = Host;
    if ( !Host )
      break;
    result = GetWindowCloakState(Host);
    if ( (result & 1) != 0 )
      return result;
    if ( !(unsigned int)CoreWindowProp::IsComponent(v1) )
    {
      TopLevelWindow = GetTopLevelWindow(v1);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
