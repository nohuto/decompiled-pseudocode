/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E0DB8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DAEF0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00E1680 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY *this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  DMMVIDPNTOPOLOGY *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r9
  DMMVIDPNTOPOLOGY *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // r9
  char v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  DMMVIDPNTOPOLOGY *v22; // rsi
  _QWORD *v23; // r8
  char *v24; // rdx
  DMMVIDPNTOPOLOGY *v25; // rcx
  char **v26; // rcx
  char *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  DMMVIDPNTOPOLOGY *v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  char *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  DMMVIDPNTOPOLOGY *v46; // rcx
  char *v47; // rcx
  DMMVIDPNTOPOLOGY *v48; // rcx
  char *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v33);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[4] = v10;
  v11 = (DMMVIDPNTOPOLOGY *)*((int *)a2 + 26);
  v7[5] = v11;
  if ( !*((_QWORD *)this + 21) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11, v10, v8, v9);
    WdLogEvent5_WdAssertion(v34);
  }
  v7[6] = *((_QWORD *)this + 21);
  v7[7] = v4;
  if ( *((_BYTE *)this + 76) <= 1u )
  {
    v35 = WdLogNewEntry5_WdAssertion(v11, v10, v8, v9);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    v36 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v36 + 24) = this;
    WdLogEvent5_WdError(v36);
    return 3221225506LL;
  }
  v12 = *((_QWORD *)a2 + 12);
  v13 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v14 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v15 = *(unsigned int *)(v12 + 24);
  if ( v14 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v31 = (_QWORD *)((char *)v14 - 8);
    if ( v31 )
    {
      do
      {
        if ( *(_DWORD *)(v31[11] + 24LL) == (_DWORD)v13 && *(_DWORD *)(v31[12] + 24LL) == (_DWORD)v15 )
          break;
        v11 = (DMMVIDPNTOPOLOGY *)v31[1];
        v31 = (_QWORD *)((char *)v11 - 8);
        if ( v11 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v31 = 0LL;
      }
      while ( v31 );
      if ( v31 )
      {
        v37 = WdLogNewEntry5_WdWarning(v11, v31, v15, v13);
        *(_QWORD *)(v37 + 24) = a2;
        *(_QWORD *)(v37 + 32) = this;
        WdLogEvent5_WdWarning(v37);
        return 3223192339LL;
      }
    }
  }
  v16 = *(_QWORD *)(v12 + 96);
  v17 = (_QWORD *)*((_QWORD *)this + 3);
  v18 = *(unsigned int *)(v12 + 24);
  v19 = *(_BYTE *)(v16 + 398);
  if ( v17 != (_QWORD *)((char *)this + 24) )
  {
    if ( --v17 )
    {
      do
      {
        if ( *(_DWORD *)(v17[12] + 24LL) == (_DWORD)v18 )
          break;
        v38 = (DMMVIDPNTOPOLOGY *)v17[1];
        v17 = (_QWORD *)((char *)v38 - 8);
        if ( v38 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v17 = 0LL;
      }
      while ( v17 );
      if ( v17 )
      {
        v32 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdDmmEvent)();
        v32[3] = a2;
        v32[4] = this;
        v32[5] = *(unsigned int *)(v12 + 24);
        WdLogEvent5_WdDmmEvent(v32);
        return 3223192320LL;
      }
    }
  }
  if ( !*(_QWORD *)(v16 + 104) )
  {
    v20 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v20, v17, v16, v18);
      *(_QWORD *)(v21 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v21 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v21);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v17, v16, v18);
        v40[3] = a2;
        v40[4] = this;
        v40[5] = *(unsigned int *)(v12 + 24);
        WdLogEvent5_WdDmmEvent(v40);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20, v17, v16, v18);
        WdLogEvent5_WdAssertion(v39);
      }
    }
  }
  v22 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v22 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) || (v41 = (char *)v22 - 8) == 0LL )
  {
LABEL_14:
    v23 = (_QWORD *)*((_QWORD *)this + 3);
    if ( v23 == (_QWORD *)((char *)this + 24) || --v23 == 0LL )
    {
LABEL_15:
      v24 = (char *)this + 24;
      v25 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
      if ( v25 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        goto LABEL_16;
      v47 = (char *)v25 - 8;
      if ( !v47 )
        goto LABEL_16;
      do
      {
        if ( v47 == (char *)a2 )
          break;
        v49 = (char *)*((_QWORD *)v47 + 1);
        v47 = v49 - 8;
        if ( v49 == v24 )
          v47 = 0LL;
      }
      while ( v47 );
      if ( !v47 )
      {
LABEL_16:
        v26 = (char **)*((_QWORD *)this + 4);
        v27 = (char *)a2 + 8;
        if ( *v26 != v24 )
          __fastfail(3u);
        *(_QWORD *)v27 = v24;
        *((_QWORD *)a2 + 2) = v26;
        *v26 = v27;
        *((_QWORD *)this + 4) = v27;
        ++*((_QWORD *)this + 5);
        goto LABEL_18;
      }
    }
    else
    {
      v18 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      while ( 1 )
      {
        if ( *(_DWORD *)(v23[11] + 24LL) == (_DWORD)v18 )
        {
          v24 = (char *)v23[12];
          v47 = (char *)*(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
          if ( *((_DWORD *)v24 + 6) == (_DWORD)v47 )
            break;
        }
        v48 = (DMMVIDPNTOPOLOGY *)v23[1];
        v23 = (_QWORD *)((char *)v48 - 8);
        if ( v48 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v23 = 0LL;
        if ( !v23 )
          goto LABEL_15;
      }
    }
    v50 = WdLogNewEntry5_WdAssertion(v47, v24, v23, v18);
    WdLogEvent5_WdAssertion(v50);
LABEL_18:
    if ( this )
    {
      if ( *((_QWORD *)a2 + 6) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v26, v24, v23, v18);
        WdLogEvent5_WdAssertion(v52);
      }
      *((_QWORD *)a2 + 6) = this;
    }
    else
    {
      v51 = WdLogNewEntry5_WdError(v26, v24);
      *(_QWORD *)(v51 + 24) = (char *)a2 + 40;
      *(_QWORD *)(v51 + 32) = *((_QWORD *)a2 + 6);
      WdLogEvent5_WdError(v51);
    }
    v28 = (unsigned int)(*((_DWORD *)a2 + 26) - 1);
    v29 = (unsigned int)(1 << (*((_BYTE *)a2 + 104) - 1));
    *((_DWORD *)this + 49) |= v29;
    if ( *((_QWORD *)this + 17) <= 1uLL )
    {
      v53 = WdLogNewEntry5_WdAssertion(v28, v29, v23, v18);
      WdLogEvent5_WdAssertion(v53);
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 18) + 8LL) != 255LL )
    {
      if ( *((_QWORD *)this + 17) <= 1uLL )
      {
        v54 = WdLogNewEntry5_WdAssertion(v28, v29, v23, v18);
        WdLogEvent5_WdAssertion(v54);
      }
      --*(_QWORD *)(*((_QWORD *)this + 18) + 8LL);
    }
    if ( *((_QWORD *)this + 17) <= 1uLL )
    {
      v55 = WdLogNewEntry5_WdAssertion(v28, v29, v23, v18);
      WdLogEvent5_WdAssertion(v55);
    }
    if ( !*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) )
      ProtectableFromChange::DisallowModifyingAction((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v42 = *((_QWORD *)v41 + 11);
    v43 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v42 + 24) != (_DWORD)v43 )
      goto LABEL_60;
    if ( v19 )
      break;
    v43 = *(_QWORD *)(*((_QWORD *)v41 + 12) + 96LL);
    if ( *(_BYTE *)(v43 + 398) )
    {
      v44 = WdLogNewEntry5_WdWarning(v43, v42, v16, v18);
      *(_QWORD *)(v44 + 24) = *((_QWORD *)v41 + 12);
      goto LABEL_67;
    }
LABEL_60:
    if ( *((_DWORD *)v41 + 26) == *((_DWORD *)a2 + 26) )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v16, v18);
      v45[3] = a2;
      v45[4] = *((int *)a2 + 26);
      v45[5] = v12;
      v45[6] = this;
      WdLogEvent5_WdWarning(v45);
    }
    v46 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v41 + 1);
    v41 = (char *)v46 - 8;
    if ( v46 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v41 = 0LL;
    if ( !v41 )
      goto LABEL_14;
  }
  v44 = WdLogNewEntry5_WdWarning(v43, v42, v16, v18);
  *(_QWORD *)(v44 + 24) = v12;
LABEL_67:
  *(_QWORD *)(v44 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v44);
  return 3223192321LL;
}
