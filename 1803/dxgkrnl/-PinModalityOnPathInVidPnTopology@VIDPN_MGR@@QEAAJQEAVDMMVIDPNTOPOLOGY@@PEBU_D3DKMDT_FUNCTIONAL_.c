/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0215F2C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C0007ED4 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C00447C0 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0044864 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 Container; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  DMMVIDPNSOURCEMODE **v16; // r14
  int *v17; // rdi
  int NumPathsFromSource; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rax
  DMMVIDPNSOURCEMODE *v23; // rbp
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v25; // rcx
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v27; // rcx
  const struct DMMVIDPNSOURCEMODE *v28; // rbp
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  DMMVIDPNTARGETMODESET *v34; // rdi
  __int64 v35; // rcx
  const struct DMMVIDPNTARGETMODE *v36; // rbp
  _QWORD *v37; // rax
  int v38; // eax
  unsigned int v39; // r8d
  int v40; // eax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 v44; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v45; // [rsp+88h] [rbp+10h] BYREF
  __int64 v46; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v47; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v10 = *(unsigned int *)a3;
  v11 = *((unsigned int *)a3 + 1);
  v12 = *(_DWORD *)a3;
  v46 = Container;
  v13 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v12);
  v15 = *(_QWORD *)(v13 + 104);
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
    v16 = *(DMMVIDPNSOURCEMODE ***)(v13 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v44 = 0LL;
  v45 = v16;
  v17 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v14, &v44);
  v20 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[3] = v10;
    v21[4] = a2;
LABEL_21:
    v21[5] = v20;
    WdLogEvent5_WdError(v21);
    goto LABEL_22;
  }
  if ( !v44 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = v16[18];
  if ( v23 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v16[18]);
    if ( !operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
    {
      v20 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v20 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v23);
      *(_QWORD *)(v20 + 32) = v17;
      *(_QWORD *)(v20 + 40) = v10;
      WdLogEvent5_WdError(v20);
      LODWORD(v20) = -1071774960;
LABEL_22:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45, 0LL);
      return (unsigned int)v20;
    }
  }
  else
  {
    BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                  (DMMVIDPNSOURCEMODESET *)v16,
                  *v17,
                  *((_DWORD *)a3 + 93),
                  (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                  (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
    v28 = BestMatch;
    if ( !BestMatch )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v29[3] = (unsigned int)*v17;
      v29[4] = *((unsigned int *)a3 + 93);
      v29[5] = *((int *)a3 + 97);
      WdLogEvent5_WdError(v29);
      LODWORD(v20) = -1071774970;
      goto LABEL_22;
    }
    v30 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v16, *((_DWORD *)BestMatch + 6), 1);
    v20 = v30;
    if ( v30 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v21[3] = v28;
      v21[4] = v10;
      goto LABEL_21;
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45, 0LL);
  v32 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v46 + 312), v11);
  v33 = *(_QWORD *)(v32 + 104);
  if ( v33 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 96));
    v34 = *(DMMVIDPNTARGETMODESET **)(v32 + 104);
  }
  else
  {
    v34 = 0LL;
  }
  v47 = v34;
  v36 = DMMVIDPNTARGETMODESET::FindBestMatch(v34, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  if ( v36 )
  {
    v38 = *((_DWORD *)a3 + 118);
    v39 = *((_DWORD *)v36 + 6);
    *((_DWORD *)v36 + 34) = *((_DWORD *)a3 + 119);
    *((_DWORD *)v36 + 33) = v38;
    v40 = VIDPN_MGR::PinVidPnTargetMode(this, v34, v39, 1);
    v20 = v40;
    if ( v40 >= 0 )
    {
      LODWORD(v20) = 0;
    }
    else
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v42[3] = v36;
      v42[4] = v11;
      v42[5] = v20;
      WdLogEvent5_WdError(v42);
    }
  }
  else
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v37[3] = *((unsigned int *)a3 + 105);
    v37[4] = *((unsigned int *)a3 + 106);
    v37[5] = *((unsigned int *)a3 + 107);
    v37[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v37);
    LODWORD(v20) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v47, 0LL);
  return (unsigned int)v20;
}
