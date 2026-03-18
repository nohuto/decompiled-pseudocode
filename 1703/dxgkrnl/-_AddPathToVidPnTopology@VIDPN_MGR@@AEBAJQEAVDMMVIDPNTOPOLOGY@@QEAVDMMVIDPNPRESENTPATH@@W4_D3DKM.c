/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E3E84 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E0DB8 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned int v5; // esi
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  char *v23; // r13
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-78h]
  __int64 v48; // [rsp+20h] [rbp-78h]
  _BYTE v49[88]; // [rsp+40h] [rbp-58h] BYREF
  VIDPN_MGR *v50; // [rsp+A0h] [rbp+8h]
  int v51; // [rsp+A8h] [rbp+10h] BYREF
  int v52; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v53; // [rsp+B0h] [rbp+18h] BYREF

  v50 = this;
  v5 = a4;
  v6 = a3;
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !v6 )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v41);
  }
  v8 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v42);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v49,
    v8 & -(__int64)(a2 != 0LL),
    (__int64)a3,
    a4,
    v47,
    1LL);
  v12 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, v5, v11);
  v17 = v12;
  if ( v12 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v39[3] = v9;
    v39[4] = v10;
    v39[5] = a2;
    v39[6] = v17;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v49,
      v13,
      v15,
      v16);
    if ( !*((_QWORD *)a2 + 21) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v43);
    }
    v22 = *((_QWORD *)a2 + 21);
    LOBYTE(v21) = a5;
    v51 = -1;
    v52 = -1;
    v23 = (char *)(v22 + 88);
    v53 = (struct DMMVIDPNPRESENTPATH *)v22;
    v24 = VIDPN_MGR::FormalizeVidPnChange(v50, v22 & -(__int64)(v22 != -88LL), 1LL, v21, &v51);
    v17 = v24;
    if ( v24 >= 0 )
      return 0LL;
    if ( v24 == -1071774975 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = v9;
      *(_QWORD *)(v30 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v44[5] = (unsigned __int64)v53 & -(__int64)(v23 != 0LL);
      v44[3] = v9;
      v44[4] = v10;
      v44[6] = v17;
      WdLogEvent5_WdError(v44);
    }
    LOBYTE(v32) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v32) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v45);
    }
    LOBYTE(v33) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v49,
      v8 & -(__int64)(a2 != 0LL),
      v33,
      v34,
      v48,
      1LL);
    v53 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath((char **)a2, (char *)(unsigned int)v9, (unsigned int)v10, &v53) < 0
      || v53 != v6 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
      WdLogEvent5_WdAssertion(v46);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v49, v35, v37, v38);
  return (unsigned int)v17;
}
