/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A3300
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D6CB0 (-AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODES.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1C00D8590 (-AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000E694 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *Instance; // rbp
  __int128 v13; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = 0;
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v10 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7);
      if ( Instance )
      {
        operator delete(0LL);
        *((_DWORD *)Instance + 4) = *(_DWORD *)(v10 + 24);
        v13 = *(_OWORD *)(v10 + 72);
        *a3 = Instance + 2;
        *(_OWORD *)(Instance + 3) = v13;
        *(_OWORD *)(Instance + 5) = *(_OWORD *)(v10 + 88);
        *(_OWORD *)(Instance + 7) = *(_OWORD *)(v10 + 104);
        Instance[9] = *(_QWORD *)(v10 + 120);
        *((_DWORD *)Instance + 20) = *(_DWORD *)(v10 + 128);
      }
      else
      {
        v17 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v17 + 24) = a1;
        WdLogEvent5_WdLowResource(v17);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192352LL;
  }
}
