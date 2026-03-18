/*
 * XREFs of UserSetWindowedSwapChain @ 0x1C02099AC
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x1C0209AF0 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0209704 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0209740 (-CreateSwapChainProp@CSwapChainProp@@SAHPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z @ 0x1C0209804 (-Init@CSwapChainProp@@QEAAHPEAUCompositionSurfaceObject@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0209844 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, struct CompositionSurfaceObject *a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // rsi
  int v13; // r14d
  __int64 Prop; // rax
  CSwapChainProp *v15; // rbx
  struct CSwapChainProp *v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v7;
  if ( !v7 || (((*(_WORD *)(v7 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 || (unsigned int)IsWindowBeingDestroyed(v7) )
    goto LABEL_15;
  v13 = IsWindowDesktopComposed(v9);
  Prop = GetProp((__int64)v12, CSwapChainProp::s_atom, 1);
  v17 = (struct CSwapChainProp *)Prop;
  v15 = (CSwapChainProp *)Prop;
  if ( !Prop )
  {
    if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(a3, &v17) )
      goto LABEL_15;
    v15 = v17;
    v5 = CWindowProp::SetProp(v17, (unsigned __int64)v12);
    if ( !v5 )
    {
      (**(void (__fastcall ***)(CSwapChainProp *))v15)(v15);
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  if ( *(struct CompositionSurfaceObject **)(Prop + 16) == a3 )
  {
    *(_DWORD *)(Prop + 24) = 0;
    v5 = v10;
    goto LABEL_15;
  }
  if ( a2 || *(_DWORD *)(Prop + 24) )
  {
    CSwapChainProp::ClearCompositionSurfaceObj((CSwapChainProp *)Prop);
    v5 = CSwapChainProp::Init(v15, a3);
    if ( v5 )
    {
LABEL_13:
      if ( v13 )
        v5 = CSwapChainProp::NotifyDwm(v15, v12);
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
