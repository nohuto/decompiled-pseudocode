/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00DE2E4
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C009F860 (-AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODE.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00ABB90 (-AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETM.c)
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F3C60 (-AcquireFirstModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0002344 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00028F4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *Instance; // rax
  __int64 v15; // rcx
  char *v16; // rdx
  __int128 v17; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v13 = v8;
    if ( v8 )
    {
      v22 = 0LL;
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v8);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v22, Instance);
      if ( v22 )
      {
        v16 = (char *)(v22 + 4);
        v22[4] = *(_DWORD *)(v13 + 24);
        v17 = *(_OWORD *)(v13 + 72);
        *a3 = v16;
        *(_OWORD *)(v16 + 8) = v17;
        *(_OWORD *)(v16 + 24) = *(_OWORD *)(v13 + 88);
        *(_OWORD *)(v16 + 40) = *(_OWORD *)(v13 + 104);
        *((_QWORD *)v16 + 7) = *(_QWORD *)(v13 + 120);
        *((_DWORD *)v16 + 16) = *(_DWORD *)(v13 + 128);
      }
      else
      {
        v21 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v21 + 24) = a1;
        WdLogEvent5_WdLowResource(v21);
        v4 = -1073741801;
      }
      operator delete(0LL);
      return v4;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = a2;
      return 3223192394LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192352LL;
  }
}
