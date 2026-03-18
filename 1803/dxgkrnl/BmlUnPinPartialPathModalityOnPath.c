/*
 * XREFs of BmlUnPinPartialPathModalityOnPath @ 0x1C022640C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00C3244 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C0226364 (BmlUnPinAllPathsPartialModalityFromSource.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C0226D40 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v14; // r9
  struct DMMVIDPNPRESENTPATH *v15; // r14
  _QWORD *v16; // rax
  bool v18; // zf
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r15d
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r14d
  _QWORD *v35; // rax
  __int64 v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+78h] [rbp+10h]
  int v38; // [rsp+80h] [rbp+18h]

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
  v15 = Path;
  if ( Path )
  {
    v18 = *((_DWORD *)Path + 29) == 254;
    v19 = *(_QWORD *)(a2 + 48);
    v20 = *(_QWORD *)(v19 + 432);
    v37 = v20;
    if ( v18
      || (v21 = a2 + 96,
          LOBYTE(v21) = 1,
          v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v20 + 88))(
                  (a2 + 96) & -(__int64)(a2 != -289),
                  v11,
                  v13,
                  v21),
          v38 >= 0) )
    {
      if ( *((_DWORD *)v15 + 28) == 254
        || (LOBYTE(v14) = 1,
            v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(v20 + 72))(
                    (a2 + 96) & -(__int64)(a2 != -289),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL),
                    *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL),
                    v14),
            v27 >= 0) )
      {
        v29 = *((_QWORD *)v15 + 12);
        v30 = *(_QWORD *)(v29 + 104);
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
          v30 = *(_QWORD *)(v29 + 104);
        }
        v18 = *(_QWORD *)(v30 + 144) == 0LL;
        v36 = v30;
        if ( v18
          || (LOBYTE(v11) = 1,
              v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v19 + 448) + 56LL))(
                      v30 & -(__int64)(v30 != -137),
                      v11),
              v34 >= 0) )
        {
          v34 = 0;
        }
        else
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
          v35[3] = v8;
          v35[4] = a2;
          v35[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
          v35[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
          WdLogEvent5_WdWarning(v35);
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v36, 0LL);
        return (unsigned int)v34;
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v11, v26);
        v28[3] = v8;
        v28[4] = a2;
        v28[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
        v28[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
        WdLogEvent5_WdWarning(v28);
        return (unsigned int)v27;
      }
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v11, v23);
      v24[3] = v8;
      v24[4] = a2;
      v24[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
      v24[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
      WdLogEvent5_WdWarning(v24);
      return (unsigned int)v38;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v16[3] = v8;
    v16[4] = a2;
    v16[5] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 24LL);
    v16[6] = *(unsigned int *)(*(_QWORD *)(v9 + a1 + 16) + 28LL);
    WdLogEvent5_WdWarning(v16);
    return 3223192345LL;
  }
}
