/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00F8014
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        DXGADAPTER *a1,
        __int64 a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum D3DDDI_COLOR_SPACE_TYPE *a5)
{
  unsigned int v5; // edi
  int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  enum D3DDDI_COLOR_SPACE_TYPE v30; // edx
  UINT v31; // eax
  enum D3DDDI_COLOR_SPACE_TYPE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v43[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v44; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v8 = a2;
  if ( !a1 )
  {
    v38 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v38 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v38);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v14 = *((_QWORD *)a1 + 285);
  if ( !v14 )
  {
    v38 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v38 + 24) = a1;
    goto LABEL_18;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v43, v15, v12, v13);
    v16 = *(_QWORD *)(v15 + 88);
    v44 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v17 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, v17);
    v20 = v44;
    if ( v44 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v44 + 96), v8, a3);
      if ( Path && (v26 = *((_QWORD *)Path + 12)) != 0 )
      {
        v27 = *(_QWORD *)(v26 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(_QWORD *)(v26 + 104);
        }
        else
        {
          v28 = 0LL;
        }
        v42 = v28;
        if ( !*(_QWORD *)(v28 + 144) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v27, v22, v24, v25);
          WdLogEvent5_WdAssertion(v41);
        }
        v29 = *(_QWORD *)(v28 + 144);
        v30 = *(_DWORD *)(v29 + 136);
        v31 = *(_DWORD *)(v29 + 132);
        v32 = a5;
        a4->Value = v31;
        *v32 = v30;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v37 + 24) = v20;
        WdLogEvent5_WdError(v37);
        v5 = -1071774971;
      }
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v40 + 24) = a1;
      WdLogEvent5_WdError(v40);
      v5 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40LL), v33, v34, v35);
    return v5;
  }
  else
  {
    v39 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v39 + 24) = a1;
    WdLogEvent5_WdError(v39);
    return 3223192373LL;
  }
}
