/*
 * XREFs of GetWindowCloakStateComponentUIAware @ 0x1C001E9F4
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C001C368 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C001EA68 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall GetWindowCloakStateComponentUIAware(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 TopLevelWindow; // rcx
  __int64 result; // rax
  struct tagWND *Host; // rax
  __int64 v5; // rcx

  v1 = a1;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
    return GetWindowCloakState(TopLevelWindow);
  if ( (GetWindowCloakState(TopLevelWindow) & 1) != 0 )
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
      TopLevelWindow = GetTopLevelWindow(v5);
      return GetWindowCloakState(TopLevelWindow);
    }
  }
  return 2LL;
}
