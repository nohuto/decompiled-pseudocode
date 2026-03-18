/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000C45C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01D4538 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v7; // r13
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  VIDPN_MGR *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rsi
  DMMVIDPNTOPOLOGY *v24; // r15
  __int64 v25; // rbx
  int NumPathsFromSource; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ebp
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbp
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v47; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v48; // eax
  unsigned __int16 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v58; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v59; // [rsp+40h] [rbp-58h]
  unsigned __int64 v60; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v61[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v63; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v64; // [rsp+B0h] [rbp+18h]

  v64 = a3;
  v63 = a2;
  v7 = a2;
  v9 = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 285) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 285) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v61, (__int64)v15, v12, v13);
  v16 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v21 = v16;
  if ( !v16 || *(VIDPN_MGR **)(v16 + 48) != v15 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v22[3] = a4;
    LODWORD(a4) = -1073741811;
    v22[4] = -1073741811LL;
LABEL_37:
    WdLogEvent5_WdError(v22);
    goto LABEL_31;
  }
  v23 = 0LL;
  v24 = (DMMVIDPNTOPOLOGY *)(v16 + 96);
  if ( a3 )
  {
    while ( 1 )
    {
      v25 = v7[v23];
      if ( !v23 )
        v9 = *v7;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v24, v7[v23], &v60);
      v31 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v32 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
        WdLogEvent5_WdAssertion(v32);
      }
      if ( v31 == -1071774919 )
        break;
      if ( v60 > 1 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v22[3] = v25;
        a4 = -1073741811LL;
        v58 = v60;
        goto LABEL_33;
      }
      v33 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, (unsigned int)v25, 0LL, &v62);
      v38 = v62;
      if ( v33 < 0 || v62 == -1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        WdLogEvent5_WdAssertion(v39);
      }
      if ( a5 )
        a5[v23] = v38;
      if ( v23 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v24, v25, v38);
        if ( !Path )
        {
          v47 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = *((_DWORD *)Path + 26);
        v49 = *((_WORD *)Path + 54);
        v59 = v48;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v15, v24, v25, v38, 0) < 0 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
          WdLogEvent5_WdAssertion(v54);
        }
        v55 = VIDPN_MGR::AddPathToVidPnTopology(v15, v24, v9, (unsigned int)v38, v59, v49, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v55;
        if ( v55 < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v56, v17);
          v58 = v9;
          v22[3] = v38;
LABEL_33:
          v22[5] = v21;
          v22[4] = v58;
          v22[6] = a4;
          goto LABEL_37;
        }
        v7 = v63;
      }
      else
      {
        v40 = VIDPN_MGR::UnpinPathModalityFromSource(v15, v24, v9);
        a4 = v40;
        if ( v40 < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v41, v17);
          v22[3] = v9;
          goto LABEL_36;
        }
      }
      if ( ++v23 >= v64 )
        goto LABEL_30;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v22[3] = v25;
    a4 = -1073741811LL;
LABEL_36:
    v22[4] = v21;
    v22[5] = a4;
    goto LABEL_37;
  }
LABEL_30:
  LODWORD(a4) = 0;
LABEL_31:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v61[0] + 40LL), v17, v19, v20);
  return (unsigned int)a4;
}
