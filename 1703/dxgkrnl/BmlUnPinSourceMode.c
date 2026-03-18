/*
 * XREFs of BmlUnPinSourceMode @ 0x1C01DF7DC
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00F22E4 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00E4A48 (-QueryDxgDmmVidPnSourceModeSetInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERF.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00E4A7C (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C01DF4FC (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  VIDPN_MGR *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v31; // [rsp+20h] [rbp-28h] BYREF
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v32; // [rsp+58h] [rbp+10h] BYREF
  __int64 v33; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, v4);
  if ( (int)result >= 0 )
  {
    v9 = v4;
    v10 = 104LL * v4;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)&a1[v10 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v10 + 16] + 28LL));
    if ( Path )
    {
      v17 = *(VIDPN_MGR **)(a2 + 48);
      VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(v17, &v31, v14, v15);
      v20 = *((_QWORD *)Path + 11);
      v21 = *(_QWORD *)(v20 + 104);
      if ( v21 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
        v22 = *(_QWORD *)(v20 + 104);
      }
      else
      {
        v22 = 0LL;
      }
      v23 = *(_QWORD *)(v22 + 144) == 0LL;
      v33 = v22;
      if ( v23
        || (VIDPN_MGR::QueryDxgDmmVidPnSourceModeSetInterface(v17, &v32, v18, v19),
            LOBYTE(v24) = 1,
            v27 = (*((__int64 (__fastcall **)(__int64, __int64))v32 + 6))(v22 & -(__int64)(v22 != -137), v24),
            v27 >= 0) )
      {
        v27 = 0;
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v28, v29);
        v30[3] = Path;
        v30[4] = a2;
        v30[5] = *(unsigned int *)(*((_QWORD *)Path + 11) + 24LL);
        v30[6] = *(unsigned int *)(*((_QWORD *)Path + 12) + 24LL);
        WdLogEvent5_WdWarning(v30);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v33, 0LL);
      return (unsigned int)v27;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v14, v15);
      v16[3] = v9;
      v16[4] = a2;
      v16[5] = *(unsigned int *)(*(_QWORD *)&a1[v10 + 16] + 24LL);
      v16[6] = *(unsigned int *)(*(_QWORD *)&a1[v10 + 16] + 28LL);
      WdLogEvent5_WdWarning(v16);
      return 3223192345LL;
    }
  }
  return result;
}
