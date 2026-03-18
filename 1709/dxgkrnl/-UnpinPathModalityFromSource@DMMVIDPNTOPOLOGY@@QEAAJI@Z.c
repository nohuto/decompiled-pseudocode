/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01F3698
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01EFC4C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000550C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006550 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C000B560 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  DMMVIDPNTARGETMODESET *v16; // rcx
  _QWORD *v18; // rax
  DMMVIDPNTARGETMODESET *v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v20 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (_QWORD *)(unsigned int)v2, i, &v20);
    v8 = v5;
    if ( v5 < 0 )
      break;
    if ( v20 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v2, v20);
    if ( !Path )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = *((_QWORD *)Path + 11);
    v13 = *(volatile signed __int32 **)(v12 + 104);
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 24);
      v13 = *(volatile signed __int32 **)(v12 + 104);
    }
    v21 = v13;
    DMMVIDPNSOURCEMODESET::UnpinMode((DMMVIDPNSOURCEMODESET *)v13);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v21, 0LL);
    v14 = *((_QWORD *)Path + 12);
    v15 = *(_QWORD *)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
      v16 = *(DMMVIDPNTARGETMODESET **)(v14 + 104);
    }
    else
    {
      v16 = 0LL;
    }
    v19 = v16;
    DMMVIDPNTARGETMODESET::UnpinMode(v16);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v19, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v18[3] = i;
  v18[4] = v2;
  v18[5] = this;
  v18[6] = v8;
  return (unsigned int)v8;
}
