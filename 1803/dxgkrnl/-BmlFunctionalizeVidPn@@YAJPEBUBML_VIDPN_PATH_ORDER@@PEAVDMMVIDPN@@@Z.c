/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02268A8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     BmlIsSecondaryClonePath @ 0x1C00C29B0 (BmlIsSecondaryClonePath.c)
 *     BmlFunctionalizePath @ 0x1C00C348C (BmlFunctionalizePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C0226134 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r13
  unsigned __int16 v7; // si
  unsigned __int16 v8; // ax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // si
  __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct DMMVIDPNPRESENTPATH *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // r14d
  unsigned __int16 v32; // si
  __int64 v33; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  struct DMMVIDPNPRESENTPATH *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v35 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v36);
  }
  v6 = *((_QWORD *)a2 + 6);
  if ( !v6 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v37);
  }
  v7 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  LOBYTE(v8) = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v9 = 104LL * v7;
      v10 = *(_QWORD *)((char *)a1 + v9 + 16);
      *(_WORD *)((char *)a1 + v9 + 64) = 0;
      *(_WORD *)((char *)a1 + v9 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v10 + 24),
               *(_DWORD *)(v10 + 28));
      if ( !Path )
        break;
      if ( BmlIsSecondaryClonePath((__int64)a1, v7, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v9 + 66) )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
          v38[4] = a2;
          v38[3] = v7;
          v38[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
          v39 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
          v38[7] = a1;
LABEL_33:
          v38[6] = v39;
          WdLogEvent5_WdWarning(v38);
          return 3223192345LL;
        }
      }
      else
      {
        v18 = *((_QWORD *)Path + 11);
        v19 = *(_QWORD *)(v18 + 104);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
          v20 = *(_QWORD *)(v18 + 104);
        }
        else
        {
          v20 = 0LL;
        }
        v21 = *(_QWORD *)(v20 + 144);
        v52 = v20;
        if ( v21 )
        {
          if ( *(_WORD *)((char *)a1 + v9 + 66) )
          {
LABEL_31:
            v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v15, v17);
            v40[4] = a2;
            v40[3] = v7;
            v40[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
            v40[6] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
            v40[7] = a1;
            WdLogEvent5_WdWarning(v40);
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v52, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v9 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v52, 0LL);
      }
      v8 = *(unsigned __int8 *)a1;
      if ( ++v7 >= v8 )
        goto LABEL_16;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v38[3] = a1;
    v38[4] = v7;
    v38[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 24LL);
    v39 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v7 + 2) + 28LL);
    v38[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v22 = 0;
  if ( (_BYTE)v8 )
  {
    do
    {
      v23 = v22;
      v24 = *((_QWORD *)a1 + 13 * v22 + 2);
      v26 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v24 + 24),
              *(_DWORD *)(v24 + 28));
      if ( !v26 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v41);
      }
      v31 = BmlFunctionalizePath((__int64)a1, (__int64)a2, v22, (__int64)v26);
      if ( v31 < 0 )
      {
        if ( v31 != -1071774970 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
          v45[3] = a2;
          v45[4] = a1;
          v45[5] = v22;
          return (unsigned int)v31;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = v22;
        v43 = *(_QWORD *)(v6 + 8);
        if ( !v43 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v42);
          WdLogEvent5_WdAssertion(v44);
          v43 = *(_QWORD *)(v6 + 8);
        }
        DxgkLogCodePointPacket(0x11u, v22, 0, 0, *(_QWORD *)(*(_QWORD *)(v43 + 16) + 268LL));
        if ( !v22 )
          return 3223192326LL;
        --v22;
      }
      else
      {
        ++v22;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = v23;
      }
      v8 = *(unsigned __int8 *)a1;
    }
    while ( v22 < v8 );
  }
  v32 = 0;
  if ( (_BYTE)v8 )
  {
    do
    {
      v33 = *((_QWORD *)a1 + 13 * v32 + 2);
      if ( (*(_QWORD *)v33 & 0x20000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)v33 & 0x20200LL) != 0x20200 )
        {
          v46 = WdLogNewEntry5_WdAssertion(0x20000000000000LL);
          WdLogEvent5_WdAssertion(v46);
        }
        v48 = DMMVIDPNTOPOLOGY::FindPath(
                (struct DMMVIDPN *)((char *)a2 + 96),
                *(_DWORD *)(v33 + 24),
                *(_DWORD *)(v33 + 28));
        if ( !v48 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v47);
          WdLogEvent5_WdAssertion(v49);
        }
        if ( (int)BmlGetRecommendedContentSizeForPath(a1, v32, v48, v33) < 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v50);
          WdLogEvent5_WdAssertion(v51);
        }
      }
      ++v32;
    }
    while ( v32 < *(unsigned __int8 *)a1 );
  }
  return 0LL;
}
