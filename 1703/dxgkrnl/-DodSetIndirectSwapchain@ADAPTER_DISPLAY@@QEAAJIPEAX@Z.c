/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0170E50
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C017E0B0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C01AF3A0 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C01BE3C4 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  struct DXGSWAPCHAIN_CONTAINER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _LUID v11; // rbx
  __int64 v12; // rdx
  OUTPUTDUPL_MGR_INDIRECT *v13; // rsi
  __int64 v14; // rcx
  int updated; // r15d
  __int64 v16; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v5 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 33) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v5;
LABEL_4:
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x100) == 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
  v8 = SwapChainOpenInternal(a3);
  if ( !v8 || !*(_QWORD *)v8 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = a3;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v11 = *(struct _LUID *)(*(_QWORD *)v8 + 200LL);
  ObfDereferenceObject(v8);
  v13 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 13) - 24LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL));
  if ( v11 == *((_QWORD *)v13 + 14)
    || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v13, v11), updated >= 0) )
  {
    v18 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v18 + 1544) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v18 + 1544))(
              *(_QWORD *)(v18 + 1520),
              (unsigned int)v5,
              a3,
              v11);
      v22 = v19;
      if ( v19 >= 0 )
      {
        return BLTQUEUE::SetIndirectSwapChainHandles(
                 (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v5),
                 a3);
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v23 + 24) = v22;
        *(_QWORD *)(v23 + 32) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v23);
        return (unsigned int)v22;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v18, v12);
      *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v24);
      return 3221225659LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v14, v12);
    *(_QWORD *)(v16 + 24) = v13;
    WdLogEvent5_WdError(v16);
    return (unsigned int)updated;
  }
}
