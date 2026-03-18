/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D47C0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD9AC (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  DMMVIDPNSOURCEMODESET *v32; // [rsp+38h] [rbp+10h] BYREF

  v4 = (unsigned int)a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(a2 + 304), v4);
  v16 = v11;
  if ( !v11 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = v4;
    WdLogEvent5_WdError(v17);
    return 3223192324LL;
  }
  v32 = 0LL;
  v19 = *(_QWORD *)(v11 + 104);
  if ( !v19 )
  {
    v20 = 0LL;
LABEL_12:
    v21 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v21);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
  v20 = *(_QWORD *)(v16 + 104);
  if ( !v20 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v32, v20);
  v22 = DMMVIDPNSOURCEMODESET::Serialize(v32);
  v25 = v22;
  if ( v22 >= 0 )
  {
    LODWORD(v25) = 0;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v28[3] = v4;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
      WdLogEvent5_WdAssertion(v31);
    }
    v28[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v28[5] = v25;
    WdLogEvent5_WdError(v28);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v32, 0LL);
  return (unsigned int)v25;
}
