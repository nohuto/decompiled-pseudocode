/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02177A0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0212078 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021F64C (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 Container; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  unsigned int v23; // [rsp+58h] [rbp+10h] BYREF
  int v24; // [rsp+5Ch] [rbp+14h]

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v3 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v13 = v8;
  if ( v8 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v23 = -1;
    v17 = Container;
    v24 = -1;
    v18 = Container + 88;
    v19 = VIDPN_MGR::FormalizeVidPnChange(
            this,
            (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
            11,
            1,
            &v23);
    v21 = v19;
    if ( v19 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v22[3] = v3;
      v22[4] = v17 & -(__int64)(v18 != 0);
      v22[5] = v21;
      WdLogEvent5_WdError(v22);
      return (unsigned int)v21;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = v3;
    v14[4] = a2;
    v14[5] = v13;
    return (unsigned int)v13;
  }
}
