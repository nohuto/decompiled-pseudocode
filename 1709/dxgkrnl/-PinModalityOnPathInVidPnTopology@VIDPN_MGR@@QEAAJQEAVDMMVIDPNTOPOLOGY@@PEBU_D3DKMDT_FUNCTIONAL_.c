/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A7A6C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00051EC (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000B11C (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C000EE1C (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00A7ED8 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  DMMVIDPNSOURCEMODE **v12; // r14
  int *v13; // rdi
  int NumPathsFromSource; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  DMMVIDPNSOURCEMODE *v17; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v19; // rcx
  const struct DMMVIDPNSOURCEMODE *v20; // rbp
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  DMMVIDPNTARGETMODESET *v25; // rdi
  __int64 v26; // rcx
  const struct DMMVIDPNTARGETMODE *v27; // rbp
  int v28; // eax
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v44; // [rsp+88h] [rbp+10h] BYREF
  __int64 v45; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v46; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v33 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v35);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v7 = *(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v45 = Container;
  v10 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v9);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(DMMVIDPNSOURCEMODE ***)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v43 = 0LL;
  v44 = v12;
  v13 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v43);
  v16 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v36[3] = v7;
    v36[4] = a2;
LABEL_28:
    v36[5] = v16;
    WdLogEvent5_WdError(v36);
    goto LABEL_29;
  }
  if ( !v43 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v37);
  }
  v17 = v12[18];
  if ( v17 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v12[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v16 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v16 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v17);
    *(_QWORD *)(v16 + 32) = v13;
    *(_QWORD *)(v16 + 40) = v7;
    WdLogEvent5_WdError(v16);
    LODWORD(v16) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
    return (unsigned int)v16;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v12,
                *v13,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v20 = BestMatch;
  if ( !BestMatch )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v40[3] = (unsigned int)*v13;
    v40[4] = *((unsigned int *)a3 + 93);
    v40[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v40);
    LODWORD(v16) = -1071774970;
    goto LABEL_29;
  }
  v21 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v12, *((_DWORD *)BestMatch + 6), 1);
  v16 = v21;
  if ( v21 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v36[3] = v20;
    v36[4] = v7;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
  v23 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v45 + 312), v8);
  v24 = *(_QWORD *)(v23 + 104);
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
    v25 = *(DMMVIDPNTARGETMODESET **)(v23 + 104);
  }
  else
  {
    v25 = 0LL;
  }
  v46 = v25;
  v27 = DMMVIDPNTARGETMODESET::FindBestMatch(v25, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v27 )
  {
    v28 = *((_DWORD *)a3 + 118);
    v29 = *((_DWORD *)v27 + 6);
    *((_DWORD *)v27 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v27 + 33) = v28;
    v30 = VIDPN_MGR::PinVidPnTargetMode(this, v25, v29, 1);
    v16 = v30;
    if ( v30 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v42[3] = v27;
      v42[4] = v8;
      v42[5] = v16;
      WdLogEvent5_WdError(v42);
    }
    else
    {
      LODWORD(v16) = 0;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v41[3] = *((unsigned int *)a3 + 105);
    v41[4] = *((unsigned int *)a3 + 106);
    v41[5] = *((unsigned int *)a3 + 107);
    v41[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v41);
    LODWORD(v16) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v46, 0LL);
  return (unsigned int)v16;
}
