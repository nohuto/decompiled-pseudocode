/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A4368
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00A823C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F3B80 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // r15
  _QWORD *v6; // rsi
  DMMVIDPNTOPOLOGY **v7; // rcx
  __int64 v8; // r14
  DMMVIDPNTOPOLOGY *v9; // r8
  int v10; // r10d
  __int64 v11; // r9
  char v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  DMMVIDPNTOPOLOGY *v15; // rsi
  DMMVIDPNTOPOLOGY *v16; // r9
  _QWORD *v17; // rdx
  DMMVIDPNTOPOLOGY *v18; // rcx
  DMMVIDPNTOPOLOGY *v19; // rax
  __int64 v20; // rcx
  DMMVIDPNTOPOLOGY **v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  DMMVIDPNTOPOLOGY *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  char *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  DMMVIDPNTOPOLOGY *v38; // rcx
  DMMVIDPNTOPOLOGY **v39; // r8
  DMMVIDPNTOPOLOGY **v40; // rcx
  __int64 v41; // rax
  struct DMMVIDPNPRESENTPATH *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax

  v3 = a3;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v6[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7 = (DMMVIDPNTOPOLOGY **)*((int *)a2 + 26);
  v6[5] = v7;
  if ( !this[21] )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v26);
  }
  v6[6] = this[21];
  v6[7] = v3;
  if ( *((_BYTE *)this + 76) <= 1u )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    v28 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    return 3221225506LL;
  }
  v8 = *((_QWORD *)a2 + 12);
  v9 = this[3];
  v10 = *(_DWORD *)(v8 + 24);
  if ( v9 != (DMMVIDPNTOPOLOGY *)(this + 3) )
  {
    v22 = (DMMVIDPNTOPOLOGY **)((char *)v9 - 8);
    if ( v9 != (DMMVIDPNTOPOLOGY *)8 )
    {
      do
      {
        if ( *((_DWORD *)v22[11] + 6) == *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) && *((_DWORD *)v22[12] + 6) == v10 )
          break;
        v7 = (DMMVIDPNTOPOLOGY **)v22[1];
        v22 = v7 - 1;
        if ( v7 == this + 3 )
          v22 = 0LL;
      }
      while ( v22 );
      if ( v22 )
      {
        v29 = WdLogNewEntry5_WdWarning(v7, v22, v9);
        *(_QWORD *)(v29 + 24) = a2;
        *(_QWORD *)(v29 + 32) = this;
        WdLogEvent5_WdWarning(v29);
        return 3223192339LL;
      }
    }
  }
  v11 = *(_QWORD *)(v8 + 96);
  v12 = *(_BYTE *)(v11 + 398);
  if ( v9 != (DMMVIDPNTOPOLOGY *)(this + 3) )
  {
    v23 = (__int64)this[3] - 8;
    if ( this[3] != (DMMVIDPNTOPOLOGY *)8 )
    {
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v23 + 96) + 24LL) == v10 )
          break;
        v30 = *(DMMVIDPNTOPOLOGY **)(v23 + 8);
        v23 = (__int64)v30 - 8;
        if ( v30 == (DMMVIDPNTOPOLOGY *)(this + 3) )
          v23 = 0LL;
      }
      while ( v23 );
      if ( v23 )
      {
        v24 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v24[3] = a2;
        v24[4] = this;
        v24[5] = *(unsigned int *)(v8 + 24);
        WdLogEvent5_WdDmmEvent(v24);
        return 3223192320LL;
      }
    }
  }
  if ( !*(_QWORD *)(v11 + 104) )
  {
    v13 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 == 1 )
    {
      v14 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v14 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v14 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v14);
    }
    else
    {
      if ( (_DWORD)v3 == 2 )
      {
        v32 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v32[3] = a2;
        v32[4] = this;
        v32[5] = *(unsigned int *)(v8 + 24);
        WdLogEvent5_WdDmmEvent(v32);
        return 3223192376LL;
      }
      if ( (unsigned int)(v3 - 1) > 1 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v31);
      }
    }
  }
  v15 = this[3];
  if ( v15 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v33 = (char *)v15 - 8) == 0LL )
  {
LABEL_14:
    v16 = this[3];
    if ( v16 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      goto LABEL_15;
    v39 = (DMMVIDPNTOPOLOGY **)((char *)v16 - 8);
    if ( v16 == (DMMVIDPNTOPOLOGY *)8 )
      goto LABEL_15;
    do
    {
      if ( *((_DWORD *)v39[11] + 6) == *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) )
      {
        v40 = (DMMVIDPNTOPOLOGY **)*(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
        if ( *((_DWORD *)v39[12] + 6) == (_DWORD)v40 )
          break;
      }
      v40 = (DMMVIDPNTOPOLOGY **)v39[1];
      v39 = v40 - 1;
      if ( v40 == this + 3 )
        v39 = 0LL;
    }
    while ( v39 );
    if ( !v39 )
    {
LABEL_15:
      v17 = this + 3;
      if ( v16 == (DMMVIDPNTOPOLOGY *)(this + 3) )
        goto LABEL_16;
      v42 = (struct DMMVIDPNPRESENTPATH *)(*v17 - 8LL);
      if ( *v17 == 8LL )
        goto LABEL_16;
      do
      {
        if ( v42 == a2 )
          break;
        v43 = (_QWORD *)*((_QWORD *)v42 + 1);
        v42 = (struct DMMVIDPNPRESENTPATH *)(v43 - 1);
        if ( v43 == v17 )
          v42 = 0LL;
      }
      while ( v42 );
      if ( !v42 )
      {
LABEL_16:
        v18 = this[4];
        v19 = (struct DMMVIDPNPRESENTPATH *)((char *)a2 + 8);
        if ( *(_QWORD **)v18 != v17 )
          __fastfail(3u);
        *(_QWORD *)v19 = v17;
        *((_QWORD *)a2 + 2) = v18;
        *(_QWORD *)v18 = v19;
        this[4] = v19;
        this[5] = (DMMVIDPNTOPOLOGY *)((char *)this[5] + 1);
        goto LABEL_18;
      }
      v41 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v41 + 24) = 108LL;
    }
    else
    {
      v41 = WdLogNewEntry5_WdAssertion(v40);
    }
    WdLogEvent5_WdAssertion(v41);
LABEL_18:
    if ( this )
    {
      if ( *((_QWORD *)a2 + 6) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v45);
      }
      *((_QWORD *)a2 + 6) = this;
    }
    else
    {
      v44 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v44 + 24) = (char *)a2 + 40;
      *(_QWORD *)(v44 + 32) = *((_QWORD *)a2 + 6);
      WdLogEvent5_WdError(v44);
    }
    v20 = (unsigned int)(*((_DWORD *)a2 + 26) - 1);
    *((_DWORD *)this + 49) |= 1 << (*((_BYTE *)a2 + 104) - 1);
    if ( (unsigned __int64)this[17] <= 1 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v46);
    }
    if ( *((_QWORD *)this[18] + 1) != 255LL )
    {
      if ( (unsigned __int64)this[17] <= 1 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v47);
      }
      --*((_QWORD *)this[18] + 1);
    }
    if ( (unsigned __int64)this[17] <= 1 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v48);
    }
    if ( !*((_QWORD *)this[18] + 1) )
      ProtectableFromChange::DisallowModifyingAction((ProtectableFromChange *)(this + 7), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v34 = *((_QWORD *)v33 + 11);
    v35 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v34 + 24) != (_DWORD)v35 )
      goto LABEL_60;
    if ( v12 )
      break;
    v35 = *(_QWORD *)(*((_QWORD *)v33 + 12) + 96LL);
    if ( *(_BYTE *)(v35 + 398) )
    {
      v36 = WdLogNewEntry5_WdWarning(v35, v34, v9);
      *(_QWORD *)(v36 + 24) = *((_QWORD *)v33 + 12);
      goto LABEL_67;
    }
LABEL_60:
    if ( *((_DWORD *)v33 + 26) == *((_DWORD *)a2 + 26) )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v9);
      v37[3] = a2;
      v37[4] = *((int *)a2 + 26);
      v37[5] = v8;
      v37[6] = this;
      WdLogEvent5_WdWarning(v37);
    }
    v38 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v33 + 1);
    v33 = (char *)v38 - 8;
    if ( v38 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v33 = 0LL;
    if ( !v33 )
      goto LABEL_14;
  }
  v36 = WdLogNewEntry5_WdWarning(v35, v34, v9);
  *(_QWORD *)(v36 + 24) = v8;
LABEL_67:
  *(_QWORD *)(v36 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v36);
  return 3223192321LL;
}
