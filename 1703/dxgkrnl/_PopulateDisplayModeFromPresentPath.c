/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C00F6170
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 */

D3DKMDT_VIDPN_PRESENT_PATH_ROTATION __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        _BYTE *a10)
{
  int v12; // eax
  unsigned int v13; // ecx
  char v14; // al
  unsigned __int64 v15; // rcx
  int v16; // ebp
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned int v20; // r12d
  unsigned int v21; // r10d
  unsigned int *v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  int v29; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION result; // eax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // [rsp+70h] [rbp+18h]
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v40; // [rsp+78h] [rbp+20h]

  v40 = (int)a4;
  v39 = a3;
  *(_DWORD *)(a9 + 8) = a1[7];
  *(_DWORD *)a9 = a1[4];
  *(_DWORD *)(a9 + 4) = a1[5];
  *(_DWORD *)(a9 + 24) = (int)(a2[14] << 29) >> 29;
  v12 = (*(_DWORD *)(a9 + 36) ^ a5) & 1;
  *a10 = 0;
  *(_DWORD *)(a9 + 36) ^= v12;
  v13 = a8 & 0xF | *(_DWORD *)(a9 + 40) & 0xFFFFFF80 | (a6 != 0 ? 0x40 : 0);
  *(_DWORD *)(a9 + 40) = v13;
  if ( a7 )
    v14 = 0x80;
  else
    v14 = 0;
  *(_DWORD *)(a9 + 40) = (unsigned __int8)(v14 | v13 & 0x7F);
  *(_QWORD *)(a9 + 16) = *(_QWORD *)(a2 + 7);
  v15 = a2[14];
  if ( (v15 & 0x1F8) != 0 )
  {
    v15 = ((unsigned int)v15 >> 3) & 0x3F;
    *(_DWORD *)(a9 + 20) *= (_DWORD)v15;
  }
  v16 = (int)(a2[14] << 29) >> 29;
  if ( !*(_DWORD *)(a9 + 20) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, a2, a3, a4);
    WdLogEvent5_WdAssertion(v34);
  }
  v17 = *(unsigned int *)(a9 + 20);
  v18 = *(unsigned int *)(a9 + 16);
  *a10 = 0;
  if ( v17 )
  {
    if ( v17 == 1000 )
    {
      a3 = (unsigned __int64)(((v18 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)
                            + ((unsigned __int64)((unsigned int)v18
                                                - ((v18 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)) >> 1)) >> 9;
      v19 = (unsigned int)v18 - 1000 * a3;
    }
    else
    {
      v19 = v18 % v17;
      a3 = v18 / v17;
    }
    v20 = a3 + 1;
    v15 = v17 - v19;
    if ( v19 < v17 - v19 )
      v20 = a3;
  }
  else
  {
    v20 = -1;
  }
  v21 = 0;
  v22 = (unsigned int *)&unk_1C004B234;
  while ( 1 )
  {
    if ( (_DWORD)v17 )
    {
      a3 = *v22;
      if ( (_DWORD)a3 )
      {
        v23 = 100000 * v18;
        v15 = v17 == 1000 ? v23 / 0x3E8 : v23 / v17;
        v24 = *(v22 - 1);
        v25 = *v22;
        v26 = 99950 * v24;
        a3 = v25 == 1001 ? v26 / 0x3E9 : v26 / v25;
        if ( v15 >= a3 )
        {
          v27 = 100050 * v24;
          a3 = v25 == 1001 ? v27 / 0x3E9 : v27 / v25;
          if ( v15 <= a3 )
            break;
        }
      }
    }
    ++v21;
    v22 += 2;
    if ( v21 >= 6 )
      goto LABEL_24;
  }
  if ( (unsigned int)v18 / (unsigned int)v17 != v20 )
  {
    v15 = (unsigned __int64)a10;
    *a10 = 1;
  }
  v20 = (unsigned int)v18 / (unsigned int)v17;
LABEL_24:
  if ( (unsigned int)(v16 - 2) <= 1 )
    v20 >>= 1;
  *(_DWORD *)(a9 + 12) = v20;
  v28 = 0x1C0000000uLL;
  switch ( v39 )
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
      v35 = WdLogNewEntry5_WdWarning(v15, 0x1C0000000uLL, a3, v22);
      *(_QWORD *)(v35 + 24) = v39;
      WdLogEvent5_WdWarning(v35);
      if ( v39 == 253 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36, v28, a3, v22);
        *(_QWORD *)(v37 + 24) = 164LL;
        WdLogEvent5_WdAssertion(v37);
      }
LABEL_27:
      *(_DWORD *)(a9 + 32) = 0;
      break;
  }
  v29 = v40;
  result = v40 - 5;
  if ( (unsigned int)(v40 - 5) <= 0xB )
  {
    result = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v40);
    v29 = ((int)a3 + result - 2) % 4 + 1;
  }
  v31 = v29 - 1;
  if ( v31 )
  {
    v32 = v31 - 1;
    if ( !v32 )
    {
      *(_DWORD *)(a9 + 28) = 2;
      goto LABEL_35;
    }
    v33 = (unsigned int)(v32 - 1);
    if ( !(_DWORD)v33 )
    {
      *(_DWORD *)(a9 + 28) = 3;
      goto LABEL_35;
    }
    if ( (_DWORD)v33 == 1 )
    {
      *(_DWORD *)(a9 + 28) = 4;
      goto LABEL_35;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v28, a3, v22);
    v38[3] = v40;
    v38[4] = *a1;
    v38[5] = *a2;
    result = (unsigned int)WdLogEvent5_WdWarning(v38);
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
