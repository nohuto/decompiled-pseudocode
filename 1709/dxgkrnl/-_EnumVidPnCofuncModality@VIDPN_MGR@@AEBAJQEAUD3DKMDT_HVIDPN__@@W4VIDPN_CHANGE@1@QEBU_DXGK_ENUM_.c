/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A865C
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5730 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00AA3FC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, D3DKMDT_HVIDPN a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  D3DKMDT_HVIDPN v8; // rax
  D3DKMDT_HVIDPN v9; // r13
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v10; // edi
  D3DKMDT_HVIDPN v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-50h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v25; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-18h] BYREF

  v4 = a3;
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
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v26,
    (unsigned __int64)v11 & -(__int64)(v9 != 0LL),
    3u,
    (__int64)a4,
    v24,
    *((_QWORD *)v9 + 5));
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v20);
  }
  v25.hConstrainingVidPn = a2;
  *(_QWORD *)&v25.EnumPivotType = 0LL;
  *(_QWORD *)&v25.EnumPivot.VidPnTargetId = 0LL;
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
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v4;
    WdLogEvent5_WdError(v21);
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
  v25.EnumPivotType = v10;
  if ( a4 )
  {
    v25.EnumPivot = *a4;
  }
  else
  {
    v25.EnumPivot.VidPnSourceId = -1;
    v25.EnumPivot.VidPnTargetId = -1;
  }
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v22);
  }
  v14 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(*(ADAPTER_DISPLAY **)(v7 + 8), &v25);
  v16 = v14;
  if ( v14 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v23[3] = a2;
    v23[4] = v25.EnumPivot.VidPnSourceId;
    v23[5] = v25.EnumPivot.VidPnTargetId;
    v23[6] = v16;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    LODWORD(v16) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v26);
  return (unsigned int)v16;
}
