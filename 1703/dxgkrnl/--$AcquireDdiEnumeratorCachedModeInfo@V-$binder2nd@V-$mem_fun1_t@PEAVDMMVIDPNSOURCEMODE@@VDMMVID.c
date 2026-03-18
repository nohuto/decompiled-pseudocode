/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00DFCE0
 * Callers:
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C00F4480 (-AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01DA9F0 (-AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODES.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0002898 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00028F4 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C0044968 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
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
  DMMVIDPNSOURCEMODE *v13; // rsi
  _QWORD *Instance; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v13 = (DMMVIDPNSOURCEMODE *)v8;
    if ( v8 )
    {
      v26 = 0LL;
      Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(v8);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v26, Instance);
      if ( !v26 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v16);
        *(_QWORD *)(v24 + 24) = a1;
        WdLogEvent5_WdLowResource(v24);
        v4 = -1073741801;
        goto LABEL_9;
      }
      v19 = (char *)(v26 + 4);
      v26[4] = *((_DWORD *)v13 + 6);
      v20 = *((_DWORD *)v13 + 18);
      *((_DWORD *)v19 + 1) = v20;
      if ( v20 != 1 )
      {
        if ( v20 == 2 )
        {
          *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v19 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(v13, v15, v17, v18);
          goto LABEL_8;
        }
        if ( v20 <= 2 || v20 > 4 )
        {
          if ( (unsigned int)(v20 - 1) <= 3 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
            WdLogEvent5_WdAssertion(v25);
          }
          goto LABEL_8;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v19 + 8) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13, v15, v17, v18);
LABEL_8:
      *a3 = v19;
LABEL_9:
      operator delete(0LL);
      return v4;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = a2;
    return 3223192394LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223192352LL;
  }
}
