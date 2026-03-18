/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A322C
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D8E20 (-AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODE.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D9210 (-AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00E4A90 (-AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETM.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C000BBC4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000E694 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *Instance; // rax
  __int64 v12; // rcx
  char *v13; // rdx
  __int128 v14; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v10 = v7;
    if ( v7 )
    {
      v19 = 0LL;
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v19, Instance);
      if ( v19 )
      {
        v13 = (char *)(v19 + 4);
        v19[4] = *(_DWORD *)(v10 + 24);
        v14 = *(_OWORD *)(v10 + 72);
        *a3 = v13;
        *(_OWORD *)(v13 + 8) = v14;
        *(_OWORD *)(v13 + 24) = *(_OWORD *)(v10 + 88);
        *(_OWORD *)(v13 + 40) = *(_OWORD *)(v10 + 104);
        *((_QWORD *)v13 + 7) = *(_QWORD *)(v10 + 120);
        *((_DWORD *)v13 + 16) = *(_DWORD *)(v10 + 128);
      }
      else
      {
        v18 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v18 + 24) = a1;
        WdLogEvent5_WdLowResource(v18);
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
    v17 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192352LL;
  }
}
