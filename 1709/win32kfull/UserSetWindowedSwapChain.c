/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C013E7F4
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C013E7E0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008A408 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C013E754 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C013E914 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C013E998 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C013EA04 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, struct CompositionSurfaceObject *a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rsi
  int v11; // r14d
  __int64 Prop; // rax
  unsigned int v13; // r8d
  CSwapChainProp *v14; // rbx
  struct CSwapChainProp *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v7;
  if ( !v7 || (((*(_WORD *)(v7 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 || (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_11;
  v11 = IsWindowDesktopComposed(v9);
  Prop = GetProp((__int64)v10, (__int16)WPP_MAIN_CB.Dpc.DeferredContext, 1);
  v16 = (struct CSwapChainProp *)Prop;
  v14 = (CSwapChainProp *)Prop;
  if ( !Prop )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(a3, &v16) )
      goto LABEL_11;
    v14 = v16;
    v5 = CWindowProp::SetProp(v16, (__int64)v10);
    if ( !v5 )
    {
      (**(void (__fastcall ***)(CSwapChainProp *))v14)(v14);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( *(struct CompositionSurfaceObject **)(Prop + 16) == a3 )
  {
    *(_DWORD *)(Prop + 24) = 0;
    v5 = v13;
    goto LABEL_11;
  }
  if ( a2 || *(_DWORD *)(Prop + 24) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj((CSwapChainProp *)Prop);
    v5 = CSwapChainProp::Init(v14, a3);
    if ( v5 )
    {
LABEL_9:
      if ( v11 )
        v5 = CSwapChainProp::NotifyDwm(v14, v10);
    }
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
