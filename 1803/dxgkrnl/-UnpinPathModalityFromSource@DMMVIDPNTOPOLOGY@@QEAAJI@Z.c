/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021F64C
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02177A0 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00450FC (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0045144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C004518C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  DMMVIDPNTARGETMODESET *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v32; // rax
  DMMVIDPNTARGETMODESET *v33; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v35; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v34 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v2, i, &v34);
    v10 = v5;
    if ( v5 < 0 )
      break;
    if ( v34 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v2, v34);
    if ( !Path )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = *((_QWORD *)Path + 11);
    v18 = *(volatile signed __int32 **)(v17 + 104);
    if ( v18 )
    {
      _InterlockedIncrement(v18 + 24);
      v18 = *(volatile signed __int32 **)(v17 + 104);
    }
    v35 = v18;
    DMMVIDPNTARGETMODESET::UnpinMode((DMMVIDPNTARGETMODESET *)v18, v11, v14, v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v35, 0LL);
    v22 = *((_QWORD *)Path + 12);
    v23 = *(_QWORD *)(v22 + 104);
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
      v24 = *(DMMVIDPNTARGETMODESET **)(v22 + 104);
    }
    else
    {
      v24 = 0LL;
    }
    v33 = v24;
    DMMVIDPNTARGETMODESET::UnpinMode(v24, v19, v20, v21);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v33, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v25, v26, v27);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v28, v29, v30);
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v32[3] = i;
  v32[4] = v2;
  v32[5] = this;
  v32[6] = v10;
  return (unsigned int)v10;
}
