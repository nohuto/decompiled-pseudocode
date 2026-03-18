/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E3C94
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C0003108 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00088D4 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0009C50 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 Container; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  DMMVIDPNSOURCEMODE **v13; // r14
  unsigned int *v14; // rdi
  int NumPathsFromSource; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  DMMVIDPNSOURCEMODE *v21; // rbp
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const struct DMMVIDPNSOURCEMODE *v25; // rbp
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  DMMVIDPNTARGETMODESET *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  const struct DMMVIDPNTARGETMODE *v36; // rbp
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  unsigned __int64 v57; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v58; // [rsp+88h] [rbp+10h] BYREF
  __int64 v59; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v60; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a3 )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v45);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v8 = *(unsigned int *)a3;
  v9 = *((unsigned int *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v59 = Container;
  v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v10);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(DMMVIDPNSOURCEMODE ***)(v11 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v57 = 0LL;
  v58 = v13;
  v14 = (unsigned int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v8, &v57);
  v20 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v46[3] = v8;
    v46[4] = a2;
LABEL_28:
    v46[5] = v20;
    WdLogEvent5_WdError(v46);
    goto LABEL_29;
  }
  if ( !v57 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v47);
  }
  v21 = v13[18];
  if ( v21 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(
                                                                  v13[18],
                                                                  v16,
                                                                  v18,
                                                                  v19);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v20 = WdLogNewEntry5_WdError(v50, v49);
    *(_QWORD *)(v20 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v21, v51, v52, v53);
    *(_QWORD *)(v20 + 32) = v14;
    *(_QWORD *)(v20 + 40) = v8;
    WdLogEvent5_WdError(v20);
    LODWORD(v20) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v58, 0LL);
    return (unsigned int)v20;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v13,
                *v14,
                *((unsigned int *)a3 + 93),
                *((unsigned int *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v25 = BestMatch;
  if ( !BestMatch )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v54[3] = *v14;
    v54[4] = *((unsigned int *)a3 + 93);
    v54[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v54);
    LODWORD(v20) = -1071774970;
    goto LABEL_29;
  }
  v26 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v13, *((_DWORD *)BestMatch + 6), 1);
  v20 = v26;
  if ( v26 < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v46[3] = v25;
    v46[4] = v8;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v58, 0LL);
  v29 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v59 + 312), v9);
  v32 = *(_QWORD *)(v29 + 104);
  if ( v32 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
    v33 = *(DMMVIDPNTARGETMODESET **)(v29 + 104);
  }
  else
  {
    v33 = 0LL;
  }
  v60 = v33;
  v36 = DMMVIDPNTARGETMODESET::FindBestMatch(
          v33,
          (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408),
          v30,
          v31);
  if ( v36 )
  {
    v37 = *((_DWORD *)a3 + 118);
    v38 = *((_DWORD *)v36 + 6);
    *((_DWORD *)v36 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v36 + 33) = v37;
    v39 = VIDPN_MGR::PinVidPnTargetMode(this, v33, v38, 1);
    v20 = v39;
    if ( v39 < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v56[3] = v36;
      v56[4] = v9;
      v56[5] = v20;
      WdLogEvent5_WdError(v56);
    }
    else
    {
      LODWORD(v20) = 0;
    }
  }
  else
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v55[3] = *((unsigned int *)a3 + 105);
    v55[4] = *((unsigned int *)a3 + 106);
    v55[5] = *((unsigned int *)a3 + 107);
    v55[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v55);
    LODWORD(v20) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v60, 0LL);
  return (unsigned int)v20;
}
