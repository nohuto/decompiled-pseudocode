/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F210C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C00F22E4 (BmlFunctionalizePath.c)
 *     BmlIsSecondaryClonePath @ 0x1C00F3B80 (BmlIsSecondaryClonePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01DF248 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r15
  unsigned __int16 v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int16 v23; // di
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebp
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int16 i; // di
  __int64 v36; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DMMVIDPNPRESENTPATH *v57; // rbp
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v38 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !a2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v39);
  }
  v6 = *((_QWORD *)a2 + 6);
  if ( !v6 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v40);
  }
  v7 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v11 = 104LL * v7;
      v12 = *(_QWORD *)((char *)a1 + v11 + 16);
      *(_WORD *)((char *)a1 + v11 + 64) = 0;
      *(_WORD *)((char *)a1 + v11 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v12 + 24),
               *(_DWORD *)(v12 + 28));
      if ( !Path )
        break;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(a1, v7, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v11 + 66) )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v8, v9, v10);
          v42 = 104LL * v7;
          v41[3] = v7;
          v41[4] = a2;
          v41[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v42 + 16) + 24LL);
          v43 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v42 + 16) + 28LL);
          v41[7] = a1;
LABEL_33:
          v41[6] = v43;
          WdLogEvent5_WdWarning(v41);
          return 3223192345LL;
        }
      }
      else
      {
        v19 = *((_QWORD *)Path + 11);
        v20 = *(_QWORD *)(v19 + 104);
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
          v21 = *(_QWORD *)(v19 + 104);
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(_QWORD *)(v21 + 144);
        v63 = v21;
        if ( v22 )
        {
          if ( *(_WORD *)((char *)a1 + v11 + 66) )
          {
LABEL_31:
            v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v8, v9, v10);
            v45 = 104LL * v7;
            v44[3] = v7;
            v44[4] = a2;
            v44[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v45 + 16) + 24LL);
            v44[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v45 + 16) + 28LL);
            v44[7] = a1;
            WdLogEvent5_WdWarning(v44);
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v11 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
      }
      if ( ++v7 >= *(unsigned __int8 *)a1 )
        goto LABEL_16;
    }
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v46 = 104LL * v7;
    v41[3] = a1;
    v41[4] = v7;
    v41[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v46 + 16) + 24LL);
    v43 = *(unsigned int *)(*(_QWORD *)((char *)a1 + v46 + 16) + 28LL);
    v41[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v23 = 0;
  while ( v23 < *(unsigned __int8 *)a1 )
  {
    v24 = v23;
    v25 = *((_QWORD *)a1 + 13 * v23 + 2);
    if ( !DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v25 + 24), *(_DWORD *)(v25 + 28)) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v47);
    }
    v32 = BmlFunctionalizePath((int)a1);
    if ( v32 < 0 )
    {
      if ( v32 != -1071774970 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v33, v34);
        v53[3] = a2;
        v53[4] = a1;
        v53[5] = v23;
        return (unsigned int)v32;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v33, v34) + 24) = v23;
      if ( !*(_QWORD *)(v6 + 8) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        WdLogEvent5_WdAssertion(v52);
      }
      DxgkLogCodePointPacket(0x11u, v23, 0, 0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 268LL));
      if ( !v23 )
        return 3223192326LL;
      --v23;
    }
    else
    {
      ++v23;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30, v33, v34) + 24) = v24;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
  {
    v36 = *((_QWORD *)a1 + 13 * i + 2);
    if ( (*(_QWORD *)v36 & 0x20000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)v36 & 0x20200LL) != 0x20200 )
      {
        v54 = WdLogNewEntry5_WdAssertion(0x20000000000000LL, v8, v9, v10);
        WdLogEvent5_WdAssertion(v54);
      }
      v57 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v36 + 24),
              *(_DWORD *)(v36 + 28));
      if ( !v57 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v56, v55, v58, v59);
        WdLogEvent5_WdAssertion(v60);
      }
      if ( (int)BmlGetRecommendedContentSizeForPath(a1, i, v57, v36) < 0 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v61, v8, v9, v10);
        WdLogEvent5_WdAssertion(v62);
      }
    }
  }
  return 0LL;
}
