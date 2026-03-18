/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A7A6C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     BmlFunctionalizePath @ 0x1C00D25F8 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00D4280 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C000B560 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D701C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 Container; // r12
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+68h] [rbp+10h] BYREF
  int v38; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v24[3] = v4;
    v24[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v25);
    }
    v24[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v24[6] = v11;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 14);
    if ( !v12 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( !*(_QWORD *)(v12 + 40) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v27);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
    v37 = *(_DWORD *)(v12 + 24);
    LOBYTE(v14) = a4;
    v38 = -1;
    v15 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 3LL, v14, &v37);
    v19 = v15;
    if ( v15 < 0 )
    {
      if ( v15 == -1071774970 )
      {
        v28 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v28 + 24) = v4;
        *(_QWORD *)(v28 + 32) = a2;
        WdLogEvent5_WdWarning(v28);
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v30[3] = v4;
        v30[4] = a2;
        v30[5] = v19;
        WdLogEvent5_WdError(v30);
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
      v31[3] = v4;
      v32 = *(unsigned int *)(v12 + 24);
      v31[4] = v32;
      v31[5] = Container;
      if ( !*((_QWORD *)this + 1) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32);
        WdLogEvent5_WdAssertion(v33);
      }
      v31[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v31);
      if ( v8 )
        v34 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v34 = DMMVIDPNSOURCEMODESET::UnpinMode(a2);
      if ( v34 < 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v36);
      }
      return (unsigned int)v19;
    }
    else
    {
      return 0LL;
    }
  }
}
