/*
 * XREFs of DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C0174A70 (DxgkOpmGetRedirectionInfo.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C01A8664 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        struct _D3DDDI_RATIONAL a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r12
  bool *v11; // r13
  int *v12; // r15
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // rax
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v43; // rcx
  _DWORD *v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9

  v8 = 0;
  v9 = (unsigned int)a2;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v11 = (bool *)a5;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v12 = (int *)a6;
  if ( a6 )
    *(_DWORD *)a6.Numerator = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = (_QWORD *)a8;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *((_QWORD *)a1 + 285);
  if ( !v22 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v23 = *(_QWORD *)(v22 + 88);
  if ( v23 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a8, v23, v19, v20);
    v25 = *(_QWORD *)(v23 + 88);
    a5 = 0LL;
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
      v26 = *(_QWORD *)(v23 + 88);
    }
    else
    {
      v26 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, v26);
    if ( a5 )
    {
      v32 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(a5 + 312), v9);
      if ( v32 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v33 + 96), v9) )
        {
          v40 = *(_QWORD *)(v32 + 104);
          if ( v40 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v40 + 96));
            v41 = *(_QWORD **)(v32 + 104);
          }
          else
          {
            v41 = 0LL;
          }
          a7 = v41;
          if ( !v41[18] )
          {
            v42 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
            WdLogEvent5_WdAssertion(v42);
          }
          v43 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v41[18] + 72LL);
          a6 = *(struct _D3DDDI_RATIONAL *)(v41[18] + 92LL);
          DmmCalculatePresentationVSync(v43, &a6);
          if ( a3 )
            *a3 = *v44;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    &a6,
                    (unsigned int)((int)(*(_DWORD *)(v41[18] + 120LL) << 29) >> 29),
                    0LL,
                    v45);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(v41[18] + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(v41[18] + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(_QWORD *)(v41[18] + 84LL);
          if ( v14 )
            *v14 = *(_QWORD *)(v41[18] + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v36, v35);
          *(_QWORD *)(v39 + 24) = v9;
          WdLogEvent5_WdError(v39);
          v8 = -1071774912;
        }
      }
      else
      {
        v34 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v34 + 24) = v9;
        WdLogEvent5_WdError(v34);
        v8 = -1071774971;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v29 + 24) = a1;
      WdLogEvent5_WdError(v29);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a8 + 40), v46, v47, v48);
    return v8;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}
