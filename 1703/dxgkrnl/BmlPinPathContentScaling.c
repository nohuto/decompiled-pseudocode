/*
 * XREFs of BmlPinPathContentScaling @ 0x1C00F2B0C
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00F24D8 (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00090F4 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009434 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00E4E80 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     BmlInternalTryPinningScaling @ 0x1C00F2BC4 (BmlInternalTryPinningScaling.c)
 */

__int64 __fastcall BmlPinPathContentScaling(_QWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  int *v5; // rdi
  __int64 v6; // rbp
  DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  VIDPN_MGR *v27; // rcx
  __int64 v28; // r14
  _QWORD *v29; // [rsp+50h] [rbp+8h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v30; // [rsp+60h] [rbp+18h] BYREF

  v29 = a1;
  v3 = a3;
  v5 = (int *)&a1[13 * a3 + 2];
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 24LL),
           *(_DWORD *)(*(_QWORD *)v5 + 28LL));
  v30 = 0;
  DMMVIDPNPRESENTPATH::GetScalingSupport(Path, &v30, v8, v9);
  if ( !DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path) )
  {
    v16 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v16 = BmlInternalTryPinningScaling(v5, a2, (unsigned int)v6, *(unsigned int *)&v30), v16 == -1071774970) )
    {
      if ( (dword_1C0070F30 & 1) == 0 )
      {
        v27 = *(VIDPN_MGR **)(a2 + 48);
        dword_1C0070F30 |= 1u;
        dword_1C0070EE8[0] = VIDPN_MGR::GetAdapterDefaultScaling(v27, v10, v12, v13);
        dword_1C0070EEC = 3;
        dword_1C0070EF0 = 4;
        dword_1C0070EF4 = 2;
      }
      v28 = 0LL;
      do
      {
        if ( (unsigned int)v28 >= 4 )
          break;
        v11 = dword_1C0070EE8;
        v12 = (unsigned int)dword_1C0070EE8[v28];
        if ( (_DWORD)v12 != (_DWORD)v6 )
          v16 = BmlInternalTryPinningScaling(v5, a2, v12, *(unsigned int *)&v30);
        v28 = (unsigned int)(v28 + 1);
      }
      while ( v16 == -1071774970 );
    }
    if ( v16 >= 0 )
      return (unsigned int)v16;
    ++v5[16];
    v5[18] = v16;
    if ( v16 == -1071774970 )
      return (unsigned int)v16;
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v26 = &v29;
    v25[3] = v6;
LABEL_22:
    v25[4] = v26;
    v25[5] = a2;
    v25[6] = v3;
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v16;
  }
  if ( (_DWORD)v6 != 5 )
  {
LABEL_3:
    v16 = BmlInternalTryPinningScaling(v5, a2, 1LL, *(unsigned int *)&v30);
    if ( v16 >= 0 )
      return 0LL;
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v17, v18);
    v25[3] = v5[2];
    v26 = v29;
    goto LABEL_22;
  }
  result = BmlInternalTryPinningScaling(v5, a2, 5LL, *(unsigned int *)&v30);
  if ( (int)result < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v24[3] = v29;
    v24[4] = a2;
    v24[5] = v3;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_3;
  }
  return result;
}
