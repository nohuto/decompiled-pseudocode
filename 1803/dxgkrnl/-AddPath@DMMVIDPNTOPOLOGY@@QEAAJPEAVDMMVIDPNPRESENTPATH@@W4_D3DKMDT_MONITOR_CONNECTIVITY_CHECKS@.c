/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BC008
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00B9ABC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FE60 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00041E0 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0004218 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006EFC (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r15
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rbx
  DMMVIDPNTOPOLOGY *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  DMMVIDPNTOPOLOGY *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  v7[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20));
  v7[7] = v4;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((ProtectableFromChange *)(this + 7), 1u) )
  {
    v24 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3221225506LL;
  }
  v9 = *((_QWORD *)a2 + 12);
  if ( DMMVIDPNTOPOLOGY::FindPath(
         (DMMVIDPNTOPOLOGY *)this,
         *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL),
         *(_DWORD *)(v9 + 24)) )
  {
    v25 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdWarning(v25);
    return 3223192339LL;
  }
  v13 = *(_BYTE *)(*(_QWORD *)(v9 + 96) + 398LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v12) )
  {
    v22 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
    v22[3] = a2;
    v22[4] = this;
    v22[5] = *(unsigned int *)(v9 + 24);
    WdLogEvent5_WdDmmEvent(v22);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v15 + 104) )
  {
    v16 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v16);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v17 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v17);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v27 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v27[3] = a2;
        v27[4] = this;
        v27[5] = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdDmmEvent(v27);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v26);
      }
    }
  }
  v18 = 0LL;
  v19 = this[3];
  if ( v19 != (DMMVIDPNTOPOLOGY *)(this + 3) )
    v18 = (char *)v19 - 8;
  while ( v18 )
  {
    v28 = *((_QWORD *)v18 + 11);
    v29 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v28 + 24) == (_DWORD)v29 )
    {
      if ( v13 )
      {
        v30 = WdLogNewEntry5_WdWarning(v29, v28, v14);
        *(_QWORD *)(v30 + 24) = v9;
        goto LABEL_34;
      }
      v29 = *(_QWORD *)(*((_QWORD *)v18 + 12) + 96LL);
      if ( *(_BYTE *)(v29 + 398) )
      {
        v30 = WdLogNewEntry5_WdWarning(v29, v28, v14);
        *(_QWORD *)(v30 + 24) = *((_QWORD *)v18 + 12);
LABEL_34:
        *(_QWORD *)(v30 + 32) = -1071774975LL;
        WdLogEvent5_WdWarning(v30);
        return 3223192321LL;
      }
    }
    if ( *((_DWORD *)v18 + 26) == *((_DWORD *)a2 + 26) )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v14);
      v31[3] = a2;
      v31[4] = *((int *)a2 + 26);
      v31[5] = v9;
      v31[6] = this;
      WdLogEvent5_WdWarning(v31);
    }
    v32 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v18 + 1);
    v18 = (char *)v32 - 8;
    if ( v32 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v18 = 0LL;
  }
  if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( *((_QWORD *)a2 + 6) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v34);
  }
  *((_QWORD *)a2 + 6) = this;
  *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
  ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), 1u);
  return 0LL;
}
