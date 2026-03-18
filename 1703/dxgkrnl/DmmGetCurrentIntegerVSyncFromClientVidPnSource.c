/*
 * XREFs of DmmGetCurrentIntegerVSyncFromClientVidPnSource @ 0x1C00A8F6C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+20h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v53; // [rsp+28h] [rbp-28h] BYREF
  __int64 v54; // [rsp+30h] [rbp-20h]
  __int64 v55; // [rsp+38h] [rbp-18h] BYREF
  __int64 v56; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v57; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a3 || !a4 )
  {
    v51 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v51 + 24) = a3;
    *(_QWORD *)(v51 + 32) = a4;
    WdLogEvent5_WdError(v51);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v44 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v44 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v44);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v45);
  }
  v13 = *((_QWORD *)a1 + 285);
  if ( !v13 )
  {
    v44 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v44 + 24) = a1;
    goto LABEL_28;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v56, v14, v11, v12);
    v15 = *(_QWORD *)(v14 + 88);
    v52 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v14 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v52, v16);
    v19 = v52;
    if ( v52 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 285) + 112LL);
      v54 = 3208 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v52 + 96), v5, *(_DWORD *)(v20 + 3208 * v5 + 1028));
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
        v55 = v28;
        if ( !*(_QWORD *)(v28 + 144) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v27, v22, v24, v25);
          WdLogEvent5_WdAssertion(v48);
        }
        v29 = *(_QWORD *)(v28 + 144);
        v53 = *(struct _D3DDDI_RATIONAL *)(v29 + 92);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v29 + 72), &v53);
        v31 = DmmMapVSyncFromRationalToInteger(
                &v53,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v30 + 120) << 29) >> 29),
                &v57);
        v32 = *((_QWORD *)a1 + 285);
        v33 = v31;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v32 + 16)) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          *(_QWORD *)(v49 + 24) = 5032LL;
          WdLogEvent5_WdAssertion(v49);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v32 + 80) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
          *(_QWORD *)(v50 + 24) = 5033LL;
          WdLogEvent5_WdAssertion(v50);
        }
        v38 = *(_DWORD *)(*(_QWORD *)(v32 + 112) + v54 + 1032);
        if ( v57 != 1 || v38 != v33 + 1 )
          v38 = v33;
        *a3 = v38;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v28 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
      }
      else
      {
        v43 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v43 + 24) = v19;
        WdLogEvent5_WdError(v43);
        v4 = -1071774971;
      }
    }
    else
    {
      v47 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v47 + 24) = a1;
      WdLogEvent5_WdError(v47);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v52, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40), v39, v40, v41);
    return v4;
  }
  else
  {
    v46 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v46 + 24) = a1;
    WdLogEvent5_WdError(v46);
    return 3223192373LL;
  }
}
