/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01D4538
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01DA748 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 Container; // rax
  __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF
  int v27; // [rsp+5Ch] [rbp+14h]

  v4 = (unsigned int)a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v4);
  v14 = v9;
  if ( v9 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v26 = -1;
    v18 = Container;
    v27 = -1;
    LOBYTE(v19) = 1;
    v20 = Container + 88;
    v21 = VIDPN_MGR::FormalizeVidPnChange((__int64)this, Container & -(__int64)(Container != -88), 11LL, v19, &v26);
    v24 = v21;
    if ( v21 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v25[3] = v4;
      v25[4] = v18 & -(__int64)(v20 != 0);
      v25[5] = v24;
      WdLogEvent5_WdError(v25);
      return (unsigned int)v24;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = v4;
    v15[4] = a2;
    v15[5] = v14;
    return (unsigned int)v14;
  }
}
