/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00B9ABC
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0211124 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BC008 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4,
        unsigned __int8 a5)
{
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  VIDPN_MGR *v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 Container; // rax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct DMMVIDPNPRESENTPATH *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[80]; // [rsp+48h] [rbp-50h] BYREF
  int v36; // [rsp+A8h] [rbp+10h] BYREF
  int v37; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v38; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a3;
  v8 = this;
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !v6 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v29);
  }
  v9 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v11 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v30);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v35, v9 & -(__int64)(a2 != 0LL), a3);
  v12 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v17 = v12;
  if ( v12 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v27[3] = v10;
    v27[4] = v11;
    v27[5] = a2;
    v27[6] = v17;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    LOBYTE(v19) = a5;
    v38 = (struct DMMVIDPNPRESENTPATH *)Container;
    v36 = -1;
    v37 = -1;
    v20 = VIDPN_MGR::FormalizeVidPnChange(v8, Container & -(__int64)(Container != -88), 1LL, v19, &v36);
    v17 = v20;
    if ( v20 >= 0 )
      return 0LL;
    if ( v20 == -1071774975 )
    {
      v23 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v23 + 24) = v10;
      *(_QWORD *)(v23 + 32) = v11;
      WdLogEvent5_WdDmmEvent(v23);
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v32 = v38;
      v31[3] = v10;
      v31[4] = v11;
      v31[6] = v17;
      v31[5] = (unsigned __int64)v32 & -(__int64)((struct DMMVIDPNPRESENTPATH *)((char *)v32 + 88) != 0LL);
      WdLogEvent5_WdError(v31);
    }
    LOBYTE(v24) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v24) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v33);
    }
    LOBYTE(v25) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v35, v9 & -(__int64)(a2 != 0LL), v25);
    v38 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v10, v11, &v38) < 0 || v38 != v6 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v34);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
  return (unsigned int)v17;
}
