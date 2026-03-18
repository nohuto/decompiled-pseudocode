/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9DFC
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00BB648 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00BB6AC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E08DC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v5; // rbx
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v8; // edi
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  ADAPTER_DISPLAY *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v25; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-18h] BYREF

  v5 = a3;
  v8 = D3DKMDT_EPT_VIDPNTARGET;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  LOBYTE(v11) = *(_BYTE *)(v10 + 172);
  if ( ((unsigned __int16)((2 << v11) - 1) & *(_WORD *)(v10 + 174)) != 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v19);
  }
  LOBYTE(v9) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v26, (v10 + 152) & -(__int64)(v10 != -96), v9);
  v12 = *(_QWORD *)(a1 + 8);
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v20);
    v12 = *(_QWORD *)(a1 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v12 + 16)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v21);
  }
  v25.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  *(_QWORD *)&v25.EnumPivotType = 0LL;
  *(_QWORD *)&v25.EnumPivot.VidPnTargetId = 0LL;
  if ( (int)v5 > 8 )
  {
    if ( (int)v5 <= 10 )
    {
      v8 = D3DKMDT_EPT_ROTATION;
      goto LABEL_13;
    }
    if ( (_DWORD)v5 == 11 )
      goto LABEL_23;
LABEL_25:
    v22 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v22 + 24) = v5;
    WdLogEvent5_WdError(v22);
    v8 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_13;
  }
  if ( (int)v5 >= 7 )
  {
    v8 = D3DKMDT_EPT_SCALING;
    goto LABEL_13;
  }
  if ( (int)v5 <= 0 )
    goto LABEL_25;
  if ( (int)v5 <= 2 )
  {
LABEL_23:
    v8 = D3DKMDT_EPT_NOPIVOT;
    goto LABEL_13;
  }
  if ( (int)v5 <= 4 )
    v8 = D3DKMDT_EPT_VIDPNSOURCE;
LABEL_13:
  v25.EnumPivotType = v8;
  if ( a4 )
  {
    v25.EnumPivot = *a4;
  }
  else
  {
    v25.EnumPivot.VidPnSourceId = -1;
    v25.EnumPivot.VidPnTargetId = -1;
  }
  v14 = *(ADAPTER_DISPLAY **)(a1 + 8);
  if ( !v14 )
  {
    v23 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v23);
    v14 = *(ADAPTER_DISPLAY **)(a1 + 8);
  }
  v15 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v14, &v25);
  v17 = v15;
  if ( v15 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v24[3] = a2;
    v24[4] = v25.EnumPivot.VidPnSourceId;
    v24[5] = v25.EnumPivot.VidPnTargetId;
    v24[6] = v17;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    LODWORD(v17) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v26);
  return (unsigned int)v17;
}
