/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00DE890 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C010A2A0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780 (-HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00B66F0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0224BF8 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02255A8 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  bool v6; // di
  int active; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned int i; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  _BYTE v28[64]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  unsigned __int8 v30; // [rsp+B0h] [rbp+30h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v28, 8u, 0);
  v6 = (*((_BYTE *)this + 84) & 1) == 0;
  if ( (*((_BYTE *)this + 84) & 1) == 0 )
  {
    active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v28);
    v9 = active;
    if ( active < 0 )
      goto LABEL_30;
    if ( active == 255 )
      v6 = 0;
  }
  if ( !v6 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
    goto LABEL_7;
  }
  if ( v29 )
    v11 = *(unsigned __int16 *)(v29 + 20);
  else
    v11 = 0LL;
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
    v13 = *(_WORD *)(v12 + 20);
  else
    v13 = 0;
  if ( (unsigned __int16)v11 <= v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)v28, a2, a3);
  v9 = v15;
  if ( v15 < 0 )
    goto LABEL_30;
  v30 = 0;
  CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v28, &v30);
  if ( !v30 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + 8);
  if ( v18 )
    v19 = *(unsigned __int16 *)(v18 + 20);
  else
    v19 = 0LL;
  v20 = v29;
  if ( v29 )
    v21 = *(_WORD *)(v29 + 20);
  else
    v21 = 0;
  if ( (_WORD)v19 != v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v22);
    v20 = v29;
  }
  for ( i = 0;
        i < *(_DWORD *)(v20 + 36);
        *(_DWORD *)(*(_QWORD *)(v20 + 40) + v25 + 76) &= ~*(_DWORD *)(*(_QWORD *)(v20 + 40) + 316 * v24 + 220) )
  {
    v24 = i++;
    v25 = 316 * v24;
    *(_DWORD *)(*(_QWORD *)(v20 + 40) + v25 + 80) &= ~*(_DWORD *)(*(_QWORD *)(v20 + 40) + 316 * v24 + 220);
  }
  v26 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v28);
  v9 = v26;
  if ( v26 < 0 )
  {
LABEL_30:
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = v9;
    WdLogEvent5_WdError(v27);
  }
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v28);
  return (unsigned int)v9;
}
