/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01EFC4C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
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
  __int64 v10; // rcx
  __int64 v11; // rax
  VIDPN_MGR *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rsi
  DMMVIDPNTOPOLOGY *v18; // r15
  __int64 v19; // rbx
  int NumPathsFromSource; // eax
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v32; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v33; // eax
  unsigned __int16 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v40; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v41; // [rsp+40h] [rbp-58h]
  unsigned __int64 v42; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v45; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+18h]

  v46 = a3;
  v45 = a2;
  v7 = a2;
  v9 = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 288) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v43, (__int64)v12);
  v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v15 = v13;
  if ( !v13 || *(VIDPN_MGR **)(v13 + 48) != v12 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = a4;
    LODWORD(a4) = -1073741811;
    v16[4] = -1073741811LL;
LABEL_37:
    WdLogEvent5_WdError(v16);
    goto LABEL_31;
  }
  v17 = 0LL;
  v18 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  if ( a3 )
  {
    while ( 1 )
    {
      v19 = v7[v17];
      if ( !v17 )
        v9 = *v7;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v18, v7[v17], &v42);
      v22 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v23 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( v22 == -1071774919 )
        break;
      if ( v42 > 1 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v16[3] = v19;
        a4 = -1073741811LL;
        v40 = v42;
        goto LABEL_33;
      }
      v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, (_QWORD *)(unsigned int)v19, 0LL, &v44);
      v26 = v44;
      if ( v24 < 0 || v44 == -1 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( a5 )
        a5[v17] = v26;
      if ( v17 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v19, v26);
        if ( !Path )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        v33 = *((_DWORD *)Path + 26);
        v34 = *((_WORD *)Path + 54);
        v41 = v33;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v12, v18, v19, v26, 0) < 0 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v35);
          WdLogEvent5_WdAssertion(v36);
        }
        v37 = VIDPN_MGR::AddPathToVidPnTopology(v12, v18, v9, v26, v41, v34, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v37;
        if ( v37 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v40 = v9;
          v16[3] = v26;
LABEL_33:
          v16[5] = v15;
          v16[4] = v40;
          v16[6] = a4;
          goto LABEL_37;
        }
        v7 = v45;
      }
      else
      {
        v28 = VIDPN_MGR::UnpinPathModalityFromSource(v12, v18, v9);
        a4 = v28;
        if ( v28 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v16[3] = v9;
          goto LABEL_36;
        }
      }
      if ( ++v17 >= v46 )
        goto LABEL_30;
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v16[3] = v19;
    a4 = -1073741811LL;
LABEL_36:
    v16[4] = v15;
    v16[5] = a4;
    goto LABEL_37;
  }
LABEL_30:
  LODWORD(a4) = 0;
LABEL_31:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40LL));
  return (unsigned int)a4;
}
