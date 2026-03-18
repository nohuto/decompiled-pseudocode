/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D241C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D1DD8 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C01F8B44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C00D25F8 (BmlFunctionalizePath.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D4260 (BmlIsSecondaryClonePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01F8330 (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(const struct BML_VIDPN_PATH_ORDER *a1, struct DMMVIDPN *a2)
{
  __int64 v4; // r15
  unsigned __int16 v5; // di
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int16 v19; // di
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebp
  unsigned __int16 i; // di
  __int64 v27; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  struct DMMVIDPNPRESENTPATH *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v29 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v30);
  }
  v4 = *((_QWORD *)a2 + 6);
  if ( !v4 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v31);
  }
  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a2;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v6 = 104LL * v5;
      v7 = *(_QWORD *)((char *)a1 + v6 + 16);
      *(_WORD *)((char *)a1 + v6 + 64) = 0;
      *(_WORD *)((char *)a1 + v6 + 68) = 0;
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v7 + 24),
               *(_DWORD *)(v7 + 28));
      if ( !Path )
        break;
      if ( (unsigned __int8)BmlIsSecondaryClonePath(a1, v5, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v6 + 66) )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v32[3] = v5;
          v32[4] = a2;
          v32[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 24LL);
          v33 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 28LL);
          v32[7] = a1;
LABEL_33:
          v32[6] = v33;
          WdLogEvent5_WdWarning(v32);
          return 3223192345LL;
        }
      }
      else
      {
        v15 = *((_QWORD *)Path + 11);
        v16 = *(_QWORD *)(v15 + 104);
        if ( v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
          v17 = *(_QWORD *)(v15 + 104);
        }
        else
        {
          v17 = 0LL;
        }
        v18 = *(_QWORD *)(v17 + 144);
        v46 = v17;
        if ( v18 )
        {
          if ( *(_WORD *)((char *)a1 + v6 + 66) )
          {
LABEL_31:
            v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v12, v14);
            v35 = 104LL * v5;
            v34[3] = v5;
            v34[4] = a2;
            v34[5] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v35 + 16) + 24LL);
            v34[6] = *(unsigned int *)(*(_QWORD *)((char *)a1 + v35 + 16) + 28LL);
            v34[7] = a1;
            WdLogEvent5_WdWarning(v34);
            auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v46, 0LL);
            return 3223192328LL;
          }
        }
        else if ( !*(_WORD *)((char *)a1 + v6 + 66) )
        {
          goto LABEL_31;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v46, 0LL);
      }
      if ( ++v5 >= *(unsigned __int8 *)a1 )
        goto LABEL_16;
    }
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v32[4] = v5;
    v32[3] = a1;
    v32[5] = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 24LL);
    v33 = *(unsigned int *)(*((_QWORD *)a1 + 13 * v5 + 2) + 28LL);
    v32[7] = a2;
    goto LABEL_33;
  }
LABEL_16:
  v19 = 0;
  while ( v19 < *(unsigned __int8 *)a1 )
  {
    v20 = v19;
    v21 = *((_QWORD *)a1 + 13 * v19 + 2);
    if ( !DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v21 + 24), *(_DWORD *)(v21 + 28)) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v36);
    }
    v25 = BmlFunctionalizePath((int)a1);
    if ( v25 < 0 )
    {
      if ( v25 != -1071774970 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
        v39[3] = a2;
        v39[4] = a1;
        v39[5] = v19;
        return (unsigned int)v25;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23) + 24) = v19;
      if ( !*(_QWORD *)(v4 + 8) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v38);
      }
      DxgkLogCodePointPacket(0x11u, v19, 0, 0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) + 268LL));
      if ( !v19 )
        return 3223192326LL;
      --v19;
    }
    else
    {
      ++v19;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23) + 24) = v20;
    }
  }
  for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
  {
    v27 = *((_QWORD *)a1 + 13 * i + 2);
    if ( (*(_QWORD *)v27 & 0x20000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)v27 & 0x20200LL) != 0x20200 )
      {
        v40 = WdLogNewEntry5_WdAssertion(0x20000000000000LL);
        WdLogEvent5_WdAssertion(v40);
      }
      v42 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v27 + 24),
              *(_DWORD *)(v27 + 28));
      if ( !v42 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v41);
        WdLogEvent5_WdAssertion(v43);
      }
      if ( (int)BmlGetRecommendedContentSizeForPath(a1, i, v42, v27) < 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v44);
        WdLogEvent5_WdAssertion(v45);
      }
    }
  }
  return 0LL;
}
