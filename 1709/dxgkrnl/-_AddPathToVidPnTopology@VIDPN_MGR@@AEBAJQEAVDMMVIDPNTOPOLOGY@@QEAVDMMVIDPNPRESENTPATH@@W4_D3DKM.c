/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00A823C
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A7C5C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A4368 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        unsigned __int8 a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // esi
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  char *v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  _BYTE v36[88]; // [rsp+40h] [rbp-58h] BYREF
  VIDPN_MGR *v37; // [rsp+A0h] [rbp+8h]
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  int v39; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v40; // [rsp+B0h] [rbp+18h] BYREF

  v37 = this;
  v5 = (int)a4;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a3 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v29);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v36,
    v8 & -(__int64)(a2 != 0LL),
    1u,
    a4,
    v34,
    1LL);
  v11 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)a2, a3, v5);
  v14 = v11;
  if ( v11 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v26[3] = v9;
    v26[4] = v10;
    v26[5] = a2;
    v26[6] = v14;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
    if ( !*((_QWORD *)a2 + 21) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v30);
    }
    v17 = *((_QWORD *)a2 + 21);
    LOBYTE(v16) = a5;
    v38 = -1;
    v39 = -1;
    v18 = (char *)(v17 + 88);
    v40 = (struct DMMVIDPNPRESENTPATH *)v17;
    v19 = VIDPN_MGR::FormalizeVidPnChange(v37, v17 & -(__int64)(v17 != -88LL), 1LL, v16, &v38);
    v14 = v19;
    if ( v19 >= 0 )
      return 0LL;
    if ( v19 == -1071774975 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v20);
      *(_QWORD *)(v22 + 24) = v9;
      *(_QWORD *)(v22 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v22);
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v31[5] = (unsigned __int64)v40 & -(__int64)(v18 != 0LL);
      v31[3] = v9;
      v31[4] = v10;
      v31[6] = v14;
      WdLogEvent5_WdError(v31);
    }
    LOBYTE(v23) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v23) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v32);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v36,
      v8 & -(__int64)(a2 != 0LL),
      2u,
      v24,
      v35,
      1LL);
    v40 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v40) < 0 || v40 != a3 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v33);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
  return (unsigned int)v14;
}
