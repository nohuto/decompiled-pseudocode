/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C01F8CEC
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C01F8B44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00051A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C001DA28 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00A7FC0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D4260 (BmlIsSecondaryClonePath.c)
 *     BmlAreRawModesEnabled @ 0x1C00D4E20 (BmlAreRawModesEnabled.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D5078 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00D5348 (BmlGetModeCategoryForRegion.c)
 *     BmlUnPinSourceMode @ 0x1C01F88F4 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C01F8FE4 (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, unsigned __int16 a3, CCD_MODE_RESULT_SET *a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  DMMVIDPNSOURCEMODESET *v17; // r15
  int PathModeListForPathTargetModes; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r13
  struct DMMVIDPNSOURCEMODE *i; // r13
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int16 v32; // bx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r8
  _QWORD *v37; // rax
  _QWORD *v39; // rax
  VIDPN_MGR *v40; // [rsp+30h] [rbp-58h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+38h] [rbp-50h]
  struct DMMVIDPNSOURCEMODE *v42; // [rsp+90h] [rbp+8h]
  DMMVIDPNSOURCEMODESET *v43; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 v44; // [rsp+A0h] [rbp+18h]
  CCD_MODE_RESULT_SET *v45; // [rsp+A8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = WdLogNewEntry5_WdTrace(a1, a2);
  v11 = a3;
  v12 = 104LL * a3;
  *(_QWORD *)(v9 + 24) = a3;
  *(_QWORD *)(v9 + 32) = a2;
  v40 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v40 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)&a1[v12 + 16];
  *(_WORD *)&a1[v12 + 64] = 0;
  *(_WORD *)&a1[v12 + 68] = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v14 + 24), *(_DWORD *)(v14 + 28));
  v15 = *((_QWORD *)Path + 11);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v43 = 0LL;
LABEL_10:
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
  v17 = *(DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v43 = v17;
  if ( !v17 )
    goto LABEL_10;
  if ( *((DMMVIDPNSOURCEMODESET **)v17 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)v17 + 48) )
  {
    PathModeListForPathTargetModes = 0;
  }
  else
  {
    if ( BmlIsSecondaryClonePath((__int64)a1, a3, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v20, v19);
      if ( !*((_QWORD *)v17 + 18) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v21);
      }
    }
    *(_QWORD *)&a1[v12 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v12 + 100] = 0LL;
    v42 = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)v17 + 18);
    v22 = (_QWORD *)*((_QWORD *)v17 + 6);
    if ( v22 != (_QWORD *)((char *)v17 + 48) )
    {
      for ( i = (struct DMMVIDPNSOURCEMODE *)(v22 - 1); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(v17, i) )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v24[3] = *((unsigned int *)i + 6);
        v24[4] = *((unsigned int *)i + 19);
        v24[5] = *((unsigned int *)i + 20);
        v24[6] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(i);
        v26 = *((int *)i + 24);
        v24[7] = v26;
        ++*(_DWORD *)&a1[v12 + 92];
        if ( (!v42 || v42 == i)
          && (BmlAreRawModesEnabled((__int64)a1)
           || (unsigned int)BmlGetModeCategoryForRegion((__int64)i + 76, (__int64)&a1[v12 + 36]) != 1)
          && BmlDoesSourceModeObeyConstraint((__int64)a1, v44, (unsigned int *)i) )
        {
          ++*(_DWORD *)&a1[v12 + 96];
          v27 = *((unsigned int *)i + 6);
          if ( v42 )
          {
            LODWORD(v28) = 0;
          }
          else
          {
            v28 = (int)VIDPN_MGR::PinVidPnSourceMode(v40, v17, v27, 1);
            v31 = WdLogNewEntry5_WdTrace(v30, v29);
            *(_QWORD *)(v31 + 24) = v27;
            *(_QWORD *)(v31 + 32) = v28;
          }
          if ( (int)v28 < 0 )
          {
            PathModeListForPathTargetModes = 0;
          }
          else
          {
            v32 = v44;
            PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, v44, (int)Path, v45);
            if ( !v42 )
            {
              v35 = BmlUnPinSourceMode(a1, a2, v32);
              if ( v35 < 0 )
              {
                v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v34, v36);
                v39[3] = a1;
                v39[4] = a2;
                v39[5] = v11;
                WdLogEvent5_WdWarning(v39);
                goto LABEL_33;
              }
            }
            if ( PathModeListForPathTargetModes < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v33);
              v37[3] = a1;
              v37[4] = a2;
              v37[5] = v11;
              WdLogEvent5_WdError(v37);
              break;
            }
          }
        }
        else
        {
          WdLogNewEntry5_WdTrace(v26, v25);
        }
      }
    }
  }
LABEL_32:
  v35 = PathModeListForPathTargetModes;
LABEL_33:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v43, 0LL);
  return (unsigned int)v35;
}
