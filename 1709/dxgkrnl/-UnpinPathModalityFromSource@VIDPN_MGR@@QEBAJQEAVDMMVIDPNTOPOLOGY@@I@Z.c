/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01EFC4C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01EA0A8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01F3698 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 Container; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  int v22; // [rsp+5Ch] [rbp+14h]

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
  v11 = v8;
  if ( v8 >= 0 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v21 = -1;
    v15 = Container;
    v22 = -1;
    v16 = Container + 88;
    v17 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            11,
            1,
            &v21);
    v19 = v17;
    if ( v17 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v20[3] = v3;
      v20[4] = v15 & -(__int64)(v16 != 0);
      v20[5] = v19;
      WdLogEvent5_WdError(v20);
      return (unsigned int)v19;
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v12[3] = v3;
    v12[4] = a2;
    v12[5] = v11;
    return (unsigned int)v11;
  }
}
