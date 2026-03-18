/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E3C94 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     BmlFunctionalizePath @ 0x1C00F22E4 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00F3BA0 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0009C10 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00DFE24 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 Container; // r12
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // [rsp+68h] [rbp+10h] BYREF
  int v54; // [rsp+6Ch] [rbp+14h]

  v4 = (unsigned int)a3;
  v5 = a4;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v29[3] = v4;
    v29[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
      WdLogEvent5_WdAssertion(v32);
    }
    v29[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v29[6] = v14;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v14;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 14);
    if ( !v15 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v33);
    }
    if ( !*(_QWORD *)(v15 + 40) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v34);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
    v53 = *(_DWORD *)(v15 + 24);
    LOBYTE(v17) = v5;
    v54 = -1;
    v18 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 3LL, v17, &v53);
    v23 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1071774970 )
      {
        v35 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        *(_QWORD *)(v35 + 24) = v4;
        *(_QWORD *)(v35 + 32) = a2;
        WdLogEvent5_WdWarning(v35);
      }
      else
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
        v40[3] = v4;
        v40[4] = a2;
        v40[5] = v23;
        WdLogEvent5_WdError(v40);
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37, v36, v38, v39);
      v42[3] = v4;
      v45 = *(unsigned int *)(v15 + 24);
      v42[4] = v45;
      v42[5] = Container;
      if ( !*((_QWORD *)this + 1) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, v41, v43, v44);
        WdLogEvent5_WdAssertion(v46);
      }
      v42[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v42);
      if ( v8 )
        v47 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v47 = DMMVIDPNSOURCEMODESET::UnpinMode(a2);
      if ( v47 < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        WdLogEvent5_WdAssertion(v52);
      }
      return (unsigned int)v23;
    }
    else
    {
      return 0LL;
    }
  }
}
