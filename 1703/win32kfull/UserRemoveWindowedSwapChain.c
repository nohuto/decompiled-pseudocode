/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x1C02098D0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x1C0209704 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1C0209844 (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall UserRemoveWindowedSwapChain(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagWND *v10; // rsi
  __int64 Prop; // rax
  CSwapChainProp *v12; // rax
  CSwapChainProp *v13; // rbx

  v4 = 0;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v5;
  if ( v5 && (*(_WORD *)(v5 + 82) & 0x3FFF) != 0x29D )
  {
    if ( a2 )
    {
      Prop = GetProp(v5, CSwapChainProp::s_atom, 1);
      if ( Prop )
        *(_DWORD *)(Prop + 24) = 1;
    }
    else
    {
      v12 = (CSwapChainProp *)InternalRemoveProp(v5, CSwapChainProp::s_atom, 1LL);
      v13 = v12;
      if ( v12 )
      {
        *((_QWORD *)v12 + 1) = 0LL;
        CSwapChainProp::ClearCompositionSurfaceObj(v12);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10) )
          CSwapChainProp::NotifyDwm(v13, v10);
        (**(void (__fastcall ***)(CSwapChainProp *))v13)(v13);
      }
    }
    v4 = 1;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v4;
}
