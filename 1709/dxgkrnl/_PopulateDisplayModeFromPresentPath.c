/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C00D63F0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 */

D3DKMDT_VIDPN_PRESENT_PATH_ROTATION __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        _BYTE *a10)
{
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int64 v17; // rcx
  int v18; // ebp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned int v22; // r12d
  unsigned int v23; // r10d
  unsigned int *v24; // r9
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  int v31; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION result; // eax
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  int v41; // [rsp+70h] [rbp+18h]

  v41 = a3;
  *(_DWORD *)(a9 + 8) = a1[7];
  *(_DWORD *)a9 = a1[4];
  *(_DWORD *)(a9 + 4) = a1[5];
  *(_DWORD *)(a9 + 24) = (int)(a2[14] << 29) >> 29;
  v12 = *(_DWORD *)(a9 + 36) & 0xFFFFFFFC;
  *a10 = 0;
  v13 = v12 | a5 & 1;
  v14 = *(_DWORD *)(a9 + 40);
  *(_DWORD *)(a9 + 36) = v13;
  v15 = a8 & 0xF | v14 & 0xFFFFFF80 | (a6 != 0 ? 0x40 : 0);
  *(_DWORD *)(a9 + 40) = v15;
  if ( a7 )
    v16 = 0x80;
  else
    v16 = 0;
  *(_DWORD *)(a9 + 40) = (unsigned __int8)(v16 | v15 & 0x7F);
  *(_QWORD *)(a9 + 16) = *(_QWORD *)(a2 + 7);
  v17 = (a2[14] >> 3) & 0x3F;
  if ( ((a2[14] >> 3) & 0x3F) != 0 )
    *(_DWORD *)(a9 + 20) *= (_DWORD)v17;
  v18 = (int)(a2[14] << 29) >> 29;
  if ( !*(_DWORD *)(a9 + 20) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v36);
  }
  v19 = *(unsigned int *)(a9 + 20);
  v20 = *(unsigned int *)(a9 + 16);
  *a10 = 0;
  if ( v19 )
  {
    if ( v19 == 1000 )
    {
      a3 = (unsigned __int64)(((v20 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)
                            + ((unsigned __int64)((unsigned int)v20
                                                - ((v20 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)) >> 1)) >> 9;
      v21 = (unsigned int)v20 - 1000 * a3;
    }
    else
    {
      v21 = v20 % v19;
      a3 = v20 / v19;
    }
    v22 = a3 + 1;
    v17 = v19 - v21;
    if ( v21 < v19 - v21 )
      v22 = a3;
  }
  else
  {
    v22 = -1;
  }
  v23 = 0;
  v24 = (unsigned int *)&unk_1C003C718;
  while ( 1 )
  {
    if ( (_DWORD)v19 )
    {
      a3 = v24[1];
      if ( (_DWORD)a3 )
      {
        v25 = *v24;
        v26 = 100000 * v20;
        v17 = v19 == 1000 ? v26 / 0x3E8 : v26 / v19;
        v27 = v24[1];
        v28 = 99950 * v25;
        a3 = v27 == 1001 ? v28 / 0x3E9 : v28 / v27;
        if ( v17 >= a3 )
        {
          v29 = 100050 * v25;
          a3 = v27 == 1001 ? v29 / 0x3E9 : v29 / v27;
          if ( v17 <= a3 )
            break;
        }
      }
    }
    ++v23;
    v24 += 2;
    if ( v23 >= 6 )
      goto LABEL_24;
  }
  if ( (unsigned int)v20 / (unsigned int)v19 != v22 )
  {
    v17 = (unsigned __int64)a10;
    *a10 = 1;
  }
  v22 = (unsigned int)v20 / (unsigned int)v19;
LABEL_24:
  if ( (unsigned int)(v18 - 2) <= 1 )
    v22 >>= 1;
  *(_DWORD *)(a9 + 12) = v22;
  v30 = 0x1C0000000uLL;
  switch ( v41 )
  {
    case 1:
    case 4:
    case 5:
    case 255:
      goto LABEL_27;
    case 2:
      *(_DWORD *)(a9 + 32) = 2;
      break;
    case 3:
      *(_DWORD *)(a9 + 32) = 1;
      break;
    default:
      v37 = WdLogNewEntry5_WdWarning(v17, 0x1C0000000uLL, a3);
      *(_QWORD *)(v37 + 24) = v41;
      WdLogEvent5_WdWarning(v37);
      if ( v41 == 253 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v39 + 24) = 141LL;
        WdLogEvent5_WdAssertion(v39);
      }
LABEL_27:
      *(_DWORD *)(a9 + 32) = 0;
      break;
  }
  v31 = a4;
  result = a4 - 5;
  if ( (unsigned int)(a4 - 5) <= 0xB )
  {
    result = D3DKMDT_VPPR_GET_OFFSET_ROTATION(a4);
    v31 = ((int)a3 + result - 2) % 4 + 1;
  }
  v33 = v31 - 1;
  if ( v33 )
  {
    v34 = v33 - 1;
    if ( !v34 )
    {
      *(_DWORD *)(a9 + 28) = 2;
      goto LABEL_35;
    }
    v35 = (unsigned int)(v34 - 1);
    if ( !(_DWORD)v35 )
    {
      *(_DWORD *)(a9 + 28) = 3;
      goto LABEL_35;
    }
    if ( (_DWORD)v35 == 1 )
    {
      *(_DWORD *)(a9 + 28) = 4;
      goto LABEL_35;
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v30, a3);
    v40[3] = a4;
    v40[4] = *a1;
    v40[5] = *a2;
    result = (unsigned int)WdLogEvent5_WdWarning(v40);
  }
  *(_DWORD *)(a9 + 28) = 1;
LABEL_35:
  if ( a1[1] == 3 )
  {
LABEL_56:
    *(_DWORD *)(a9 + 40) |= 0x10u;
    *(_DWORD *)(a9 + 36) |= 1u;
    return result;
  }
  if ( a1[1] == 4 )
  {
    *(_DWORD *)(a9 + 40) |= 0x20u;
    goto LABEL_56;
  }
  return result;
}
