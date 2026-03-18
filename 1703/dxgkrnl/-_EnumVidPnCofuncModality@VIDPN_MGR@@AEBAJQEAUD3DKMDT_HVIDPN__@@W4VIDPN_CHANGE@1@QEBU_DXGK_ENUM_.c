/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00F2800 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00F3D30 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00F5300 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00F6860 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01D2F08 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E01DC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E54AC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, D3DKMDT_HVIDPN a2, __int64 a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  D3DKMDT_HVIDPN v8; // rax
  D3DKMDT_HVIDPN v9; // r13
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v10; // edi
  D3DKMDT_HVIDPN v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+20h] [rbp-50h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v31; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = (int)a3;
  v7 = a1;
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v8 = a2;
  else
    v8 = 0LL;
  v9 = v8 + 24;
  v10 = D3DKMDT_EPT_VIDPNTARGET;
  v11 = v8 + 38;
  LOBYTE(a1) = *((_BYTE *)v8 + 172);
  if ( ((unsigned __int16)((2 << a1) - 1) & *((_WORD *)v8 + 87)) != 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v24);
  }
  LOBYTE(a3) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v32,
    (unsigned __int64)v11 & -(__int64)(v9 != 0LL),
    a3,
    (__int64)a4,
    v30,
    *((_QWORD *)v9 + 5));
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v25);
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
    WdLogEvent5_WdAssertion(v26);
  }
  v31.hConstrainingVidPn = a2;
  *(_QWORD *)&v31.EnumPivotType = 0LL;
  *(_QWORD *)&v31.EnumPivot.VidPnTargetId = 0LL;
  if ( (int)v4 > 8 )
  {
    if ( (int)v4 <= 10 )
    {
      v10 = D3DKMDT_EPT_ROTATION;
      goto LABEL_14;
    }
    if ( (_DWORD)v4 == 11 )
      goto LABEL_27;
LABEL_30:
    v27 = WdLogNewEntry5_WdError(v16, v12);
    *(_QWORD *)(v27 + 24) = v4;
    WdLogEvent5_WdError(v27);
    v10 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_14;
  }
  if ( (int)v4 >= 7 )
  {
    v10 = D3DKMDT_EPT_SCALING;
    goto LABEL_14;
  }
  if ( (int)v4 <= 0 )
    goto LABEL_30;
  if ( (int)v4 <= 2 )
  {
LABEL_27:
    v10 = D3DKMDT_EPT_NOPIVOT;
    goto LABEL_14;
  }
  if ( (int)v4 <= 4 )
    v10 = D3DKMDT_EPT_VIDPNSOURCE;
LABEL_14:
  v31.EnumPivotType = v10;
  if ( a4 )
  {
    v31.EnumPivot = *a4;
  }
  else
  {
    v31.EnumPivot.VidPnSourceId = -1;
    v31.EnumPivot.VidPnTargetId = -1;
  }
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
    WdLogEvent5_WdAssertion(v28);
  }
  v17 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(*(ADAPTER_DISPLAY **)(v7 + 8), &v31);
  v22 = v17;
  if ( v17 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v29[3] = a2;
    v29[4] = v31.EnumPivot.VidPnSourceId;
    v29[5] = v31.EnumPivot.VidPnTargetId;
    v29[6] = v22;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    LODWORD(v22) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v32, v18, v20, v21);
  return (unsigned int)v22;
}
