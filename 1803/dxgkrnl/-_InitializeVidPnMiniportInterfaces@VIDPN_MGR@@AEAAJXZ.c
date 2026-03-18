/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0217B8C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0220784 (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0220804 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0220884 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C0220930 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(VIDPN_MGR *this)
{
  DXGK_VIDPN_INTERFACE_V1_IMPL *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v12; // rdx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rdi
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v14; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v15; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v16; // rdi
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v17; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v18; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v19; // rdi

  v2 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)operator new[](0x58uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 46);
  v5 = v2;
  if ( v2 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 46) = v5;
  if ( !v5 )
    goto LABEL_4;
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
  v11 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 47);
  v13 = v11;
  if ( v11 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 47) = v13;
  if ( !v13 )
    goto LABEL_4;
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v13, v12);
  v14 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 48);
  v16 = v14;
  if ( v14 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 48) = v16;
  if ( !v16 )
    goto LABEL_4;
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v16, v15);
  v17 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 49);
  v19 = v17;
  if ( v17 != v4 )
    operator delete(v4);
  *((_QWORD *)this + 49) = v19;
  if ( v19 )
  {
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v19, v18);
    return 0LL;
  }
  else
  {
LABEL_4:
    v7 = WdLogNewEntry5_WdLowResource(v4);
    v8 = *((_QWORD *)this + 1);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
      v8 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + 16);
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
