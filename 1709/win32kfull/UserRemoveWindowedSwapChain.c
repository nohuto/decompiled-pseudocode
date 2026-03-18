/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C0140210
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C013E914 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C013EA04 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  __int64 Prop; // rax
  CSwapChainProp *v11; // rax
  CSwapChainProp *v12; // rbx

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v5;
  if ( v5 && (*(_WORD *)(v5 + 82) & 0x3FFF) != 0x29D )
  {
    if ( a2 )
    {
      Prop = GetProp(v5, (__int16)WPP_MAIN_CB.Dpc.DeferredContext, 1);
      if ( Prop )
        *(_DWORD *)(Prop + 24) = 1;
    }
    else
    {
      v11 = (CSwapChainProp *)InternalRemoveProp(v5, LOWORD(WPP_MAIN_CB.Dpc.DeferredContext), 1LL);
      v12 = v11;
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        CSwapChainProp::ClearCompositionSurfaceObj(v11);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8) )
          CSwapChainProp::NotifyDwm(v12, v8);
        (**(void (__fastcall ***)(CSwapChainProp *))v12)(v12);
      }
    }
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
