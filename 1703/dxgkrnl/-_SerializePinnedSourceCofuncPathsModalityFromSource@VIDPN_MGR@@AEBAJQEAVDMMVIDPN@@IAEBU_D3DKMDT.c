/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01D4630
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D3598 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01DA204 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  struct DMMVIDPNSOURCEMODESET *v23; // rbx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  struct DMMVIDPNSOURCEMODESET *v41; // [rsp+48h] [rbp+10h] BYREF

  v5 = (unsigned int)a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(a2 + 304), v5);
  v17 = v12;
  if ( !v12 )
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = v5;
    WdLogEvent5_WdError(v18);
    return 3223192324LL;
  }
  v41 = 0LL;
  v20 = *(_QWORD *)(v12 + 104);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
    v21 = *(_QWORD *)(v17 + 104);
    if ( v21 )
      goto LABEL_13;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
  WdLogEvent5_WdAssertion(v22);
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v41, v21);
  v23 = v41;
  v25 = VIDPN_MGR::PinVidPnSourceMode(this, v41, a4, v24);
  v30 = v25;
  if ( v25 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
    v31[3] = a4;
    v31[4] = v23;
    v31[5] = v30;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v41, 0LL);
    return (unsigned int)v30;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v41, 0LL);
  v32 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v30 = v32;
  if ( v32 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
    v37[3] = v5;
    if ( !*((_QWORD *)this + 1) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v36, v35, v38, v39);
      WdLogEvent5_WdAssertion(v40);
    }
    v37[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v37[5] = v30;
    WdLogEvent5_WdError(v37);
    return (unsigned int)v30;
  }
  return 0LL;
}
