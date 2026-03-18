/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00F4168
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00F24D8 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0008600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     BmlCompareTargetModes @ 0x1C00F406C (BmlCompareTargetModes.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00F4360 (BmlDoesTargetModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DMMVIDPNSOURCEMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  struct DMMVIDPNSOURCEMODE *v18; // rdi
  __int64 v19; // r12
  int v20; // ebx
  bool v21; // zf
  _QWORD *v22; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ebx
  __int64 v38; // rax
  char v39; // [rsp+88h] [rbp+30h]

  v8 = a3;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a2 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !*(_QWORD *)(a5 + 144) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v36 + 32) = v8;
    *(_QWORD *)(v36 + 24) = a5;
    WdLogEvent5_WdAssertion(v36);
    return 3223192328LL;
  }
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v17 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)a4 + 24, a6);
    if ( !v17 )
    {
      v37 = -1071774959;
LABEL_28:
      WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
      return v37;
    }
  }
  v18 = 0LL;
  v19 = 104LL * v8;
  *(_DWORD *)(v19 + a1 + 100) = 0;
  *(_DWORD *)(v19 + a1 + 104) = 0;
  v20 = *(_DWORD *)(a1 + 8) & 8;
  if ( v20 )
    WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
  v21 = v20 == 0;
  v22 = (_QWORD *)*((_QWORD *)a4 + 6);
  v39 = !v21;
  if ( v22 == (_QWORD *)((char *)a4 + 48) )
    goto LABEL_27;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(v22 - 1);
  if ( !NextMode )
    goto LABEL_27;
  do
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v12, v14, v15);
    v24[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v24[4] = *((unsigned int *)NextMode + 21);
    v24[5] = *((unsigned int *)NextMode + 22);
    v27 = *((unsigned int *)NextMode + 23);
    v24[6] = v27;
    v24[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v19 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v17
      || (LOBYTE(v26) = v39, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, v8, NextMode, v26)) )
    {
      WdLogNewEntry5_WdTrace(v27, v24, v25, v26);
    }
    else
    {
      ++*(_DWORD *)(v19 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, v8, (__int64)NextMode, (__int64)v18, v39) == 1
        && (!v17 || (unsigned int)BmlCompareTargetModes(a1, a2, v8, (__int64)NextMode, v17, v39) == -1) )
      {
        WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v18 = NextMode;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode, v30, v31);
  }
  while ( NextMode );
  if ( !v18 )
  {
LABEL_27:
    v37 = -1071774970;
    goto LABEL_28;
  }
  v32 = *(_QWORD *)(a2 + 48);
  v21 = *(_QWORD *)(v32 + 8) == 0LL;
  *a7 = *((_DWORD *)v18 + 6);
  if ( v21 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a7, v12, v14, v15);
    WdLogEvent5_WdAssertion(v38);
  }
  DxgkLogCodePointPacket(
    0x21u,
    v8,
    *((_DWORD *)v18 + 21),
    *((_DWORD *)v18 + 22),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 16LL) + 268LL));
  return 0LL;
}
