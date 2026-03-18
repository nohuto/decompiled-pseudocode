/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00D4540
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00D27EC (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00051A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     BmlCompareTargetModes @ 0x1C00D4338 (BmlCompareTargetModes.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00D4744 (BmlDoesTargetModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        DMMVIDPNSOURCEMODESET *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  struct DMMVIDPNSOURCEMODE *v16; // rdi
  __int64 v17; // r12
  int v18; // ebx
  bool v19; // zf
  _QWORD *v20; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rax
  char v34; // [rsp+88h] [rbp+30h]

  v11 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  if ( !a4 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !*(_QWORD *)(a5 + 144) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v31 + 32) = a3;
    *(_QWORD *)(v31 + 24) = a5;
    WdLogEvent5_WdAssertion(v31);
    return 3223192328LL;
  }
  v14 = 0xFFFFFFFFLL;
  v15 = 0LL;
  *a7 = -1;
  if ( a6 != -1 )
  {
    v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)a4 + 24, a6);
    if ( !v15 )
    {
      v32 = -1071774959;
LABEL_28:
      WdLogNewEntry5_WdTrace(v14, v12);
      return v32;
    }
  }
  v16 = 0LL;
  v17 = 104LL * a3;
  *(_DWORD *)(v17 + a1 + 100) = 0;
  *(_DWORD *)(v17 + a1 + 104) = 0;
  v18 = *(_DWORD *)(a1 + 8) & 8;
  if ( v18 )
    WdLogNewEntry5_WdTrace(v14, v12);
  v19 = v18 == 0;
  v20 = (_QWORD *)*((_QWORD *)a4 + 6);
  v34 = !v19;
  if ( v20 == (_QWORD *)((char *)a4 + 48) )
    goto LABEL_27;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(v20 - 1);
  if ( !NextMode )
    goto LABEL_27;
  do
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v12);
    v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
    v22[4] = *((unsigned int *)NextMode + 21);
    v22[5] = *((unsigned int *)NextMode + 22);
    v24 = *((unsigned int *)NextMode + 23);
    v22[6] = v24;
    v22[7] = *((unsigned int *)NextMode + 24);
    ++*(_DWORD *)(v17 + a1 + 100);
    if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v15
      || (LOBYTE(v23) = v34, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, a3, NextMode, v23)) )
    {
      WdLogNewEntry5_WdTrace(v24, v22);
    }
    else
    {
      ++*(_DWORD *)(v17 + a1 + 104);
      if ( (unsigned int)BmlCompareTargetModes(a1, a2, a3, (__int64)NextMode, (__int64)v16, v34) == 1
        && (!v15 || (unsigned int)BmlCompareTargetModes(a1, a2, a3, (__int64)NextMode, v15, v34) == -1) )
      {
        WdLogNewEntry5_WdTrace(v26, v25);
        v16 = NextMode;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a4, NextMode);
  }
  while ( NextMode );
  if ( !v16 )
  {
LABEL_27:
    v32 = -1071774970;
    goto LABEL_28;
  }
  v27 = *(_QWORD *)(a2 + 48);
  v19 = *(_QWORD *)(v27 + 8) == 0LL;
  *a7 = *((_DWORD *)v16 + 6);
  if ( v19 )
  {
    v33 = WdLogNewEntry5_WdAssertion(a7);
    WdLogEvent5_WdAssertion(v33);
  }
  DxgkLogCodePointPacket(
    0x21u,
    a3,
    *((_DWORD *)v16 + 21),
    *((_DWORD *)v16 + 22),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) + 268LL));
  return 0LL;
}
