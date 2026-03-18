/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01EFD44
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01EEC78 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01F3158 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  struct DMMVIDPNSOURCEMODESET *v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rax
  struct DMMVIDPNSOURCEMODESET *v31; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  v14 = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdError(v15);
    return 3223192324LL;
  }
  v31 = 0LL;
  v17 = *(_QWORD *)(v12 + 104);
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
    v18 = *(_QWORD *)(v14 + 104);
    if ( v18 )
      goto LABEL_13;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = WdLogNewEntry5_WdAssertion(v13);
  WdLogEvent5_WdAssertion(v19);
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, v18);
  v20 = v31;
  v21 = VIDPN_MGR::PinVidPnSourceMode(this, v31, a4);
  v24 = v21;
  if ( v21 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
    v25[3] = a4;
    v25[4] = v20;
    v25[5] = v24;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
    return (unsigned int)v24;
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
  v26 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
  v24 = v26;
  if ( v26 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v29[3] = v5;
    if ( !*((_QWORD *)this + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
    }
    v29[4] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v29[5] = v24;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v24;
  }
  return 0LL;
}
