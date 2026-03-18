/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C01F869C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00D27EC (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C01F85F4 (BmlUnPinAllPathsPartialModalityFromSource.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C01F8FE4 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BmlUnPinPartialPathModalityOnPath(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPNPRESENTPATH *v14; // r14
  _QWORD *v15; // rax
  bool v17; // zf
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r12d
  _QWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r15d
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r14d
  _QWORD *v36; // rax
  __int64 v37; // [rsp+70h] [rbp+8h] BYREF
  __int64 v38; // [rsp+78h] [rbp+10h]

  v3 = a3;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = v3;
  v9 = 104 * v3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v9 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v9 + a1 + 16) + 28LL));
  v14 = Path;
  if ( Path )
  {
    v17 = *((_DWORD *)Path + 29) == 254;
    v18 = *(_QWORD *)(a2 + 48);
    v19 = *(_QWORD *)(v18 + 432);
    v38 = v19;
    if ( v17
      || (v20 = a2 + 96,
          LOBYTE(v20) = 1,
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v19 + 88))(
                  (a2 + 96) & -(__int64)(a2 != -289),
                  *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL),
                  *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL),
                  v20),
          v23 >= 0) )
    {
      if ( *((_DWORD *)v14 + 28) == 254
        || (v25 = a2 + 96,
            LOBYTE(v25) = 1,
            v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v19 + 72))(
                    (a2 + 96) & -(__int64)(a2 != -289),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL),
                    v25),
            v28 >= 0) )
      {
        v30 = *((_QWORD *)v14 + 12);
        v31 = *(_QWORD *)(v30 + 104);
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 96));
          v31 = *(_QWORD *)(v30 + 104);
        }
        v17 = *(_QWORD *)(v31 + 144) == 0LL;
        v37 = v31;
        if ( v17
          || (LOBYTE(v11) = 1,
              v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v18 + 448) + 56LL))(
                      v31 & -(__int64)(v31 != -137),
                      v11),
              v35 >= 0) )
        {
          v35 = 0;
        }
        else
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v36[3] = v8;
          v36[4] = a2;
          v36[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
          v36[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
          WdLogEvent5_WdWarning(v36);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
        return (unsigned int)v35;
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v11, v27);
        v29[3] = v8;
        v29[4] = a2;
        v29[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
        v29[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
        WdLogEvent5_WdWarning(v29);
        return (unsigned int)v28;
      }
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v11, v22);
      v24[3] = v8;
      v24[4] = a2;
      v24[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
      v24[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
      WdLogEvent5_WdWarning(v24);
      return (unsigned int)v23;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v15[3] = v8;
    v15[4] = a2;
    v15[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
    v15[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
    WdLogEvent5_WdWarning(v15);
    return 3223192345LL;
  }
}
