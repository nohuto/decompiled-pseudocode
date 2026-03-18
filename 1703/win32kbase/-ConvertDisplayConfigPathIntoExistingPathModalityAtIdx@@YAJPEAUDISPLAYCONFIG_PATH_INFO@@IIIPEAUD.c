/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F41A0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F47D8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 * Callees:
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00F4120 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z @ 0x1C00F4138 (-ConvertDCPixelFormatToD3DDI@@YAHW4DISPLAYCONFIG_PIXELFORMAT@@PEAW4_D3DDDIFORMAT@@@Z.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F4754 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F7DF8 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct DISPLAYCONFIG_MODE_INFO *a5,
        __int16 a6,
        int a7,
        struct _D3DKMT_GETPATHSMODALITY *a8,
        int *a9)
{
  wchar_t *v9; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 result; // rax
  char *v15; // rsi
  char *v16; // rbx
  char *v17; // r15
  char *v18; // rbp
  int TargetVirtualization; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // r11d
  unsigned int v27; // r13d
  unsigned int v28; // eax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // r13d
  unsigned __int8 v34; // r9
  unsigned __int8 v35; // r8
  char v36; // al
  int v37; // eax
  int v38; // ecx
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rax
  unsigned __int8 v51; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v52[3]; // [rsp+31h] [rbp-37h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-34h]
  unsigned int v54; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v55; // [rsp+80h] [rbp+18h]

  v55 = a3;
  v9 = gpGraphicsDeviceList;
  v11 = a4;
  v12 = (unsigned int)a3;
  while ( 1 )
  {
    if ( !v9 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
      v13[3] = v12;
      goto LABEL_8;
    }
    if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0
      && *((_DWORD *)v9 + 66) == *(_DWORD *)a1
      && *((_DWORD *)v9 + 67) == *((_DWORD *)a1 + 1) )
    {
      break;
    }
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
  }
  v15 = 0LL;
  v16 = (char *)a8 + 264 * (unsigned int)a2;
  v17 = 0LL;
  v18 = 0LL;
  *((_QWORD *)v16 + 6) = 0LL;
  *((_QWORD *)v16 + 7) = 0LL;
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)a1,
                           *((_DWORD *)a1 + 7),
                           v52,
                           &v51,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v16 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v16 + 35);
  v23 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  *((_QWORD *)v16 + 6) |= 0x800000000000uLL;
  v25 = *((_QWORD *)v16 + 6);
  v26 = a6 & 0x8000;
  if ( a6 < 0 )
  {
    v27 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 7));
    v28 = Convert16bitSdcModeInfoIdxTo32bit(*((_WORD *)a1 + 17));
    v29 = *((_WORD *)a1 + 16);
    v53 = v28;
    v31 = (unsigned int)Convert16bitSdcModeInfoIdxTo32bit(v29);
  }
  else
  {
    v30 = *((unsigned int *)a1 + 8);
    v31 = 0xFFFFFFFFLL;
    v27 = *((_DWORD *)a1 + 3);
    v53 = *((_DWORD *)a1 + 8);
  }
  v54 = v31;
  if ( v27 == -1 )
  {
    if ( v26 )
    {
      v21 = (unsigned __int16)*((_DWORD *)a1 + 3) | 0xFE500000;
      *((_DWORD *)v16 + 70) = v21;
      *((_QWORD *)v16 + 6) = v25 | 0x4000000000000LL;
    }
  }
  else
  {
    if ( v27 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v32 = v27;
      goto LABEL_17;
    }
    v15 = (char *)a5 + 64 * (unsigned __int64)v27;
    if ( *(_DWORD *)v15 != 1 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v13[3] = a1;
      v13[4] = v15;
      goto LABEL_8;
    }
  }
  if ( (_DWORD)v30 != -1 )
  {
    if ( (unsigned int)v30 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v32 = v53;
      goto LABEL_17;
    }
    v17 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v30;
    if ( *(_DWORD *)v17 != 2 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v13[3] = a1;
      v13[4] = v17;
      goto LABEL_8;
    }
  }
  v33 = 3;
  if ( (_DWORD)v31 != -1 )
  {
    if ( (unsigned int)v31 >= (unsigned int)v11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v32 = v54;
LABEL_17:
      v13[3] = v32;
      v13[4] = a1;
      v13[5] = v11;
LABEL_8:
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    v18 = (char *)a5 + 64 * (unsigned __int64)(unsigned int)v31;
    if ( *(_DWORD *)v18 != 3 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
      v13[3] = a1;
      v13[4] = v18;
      goto LABEL_8;
    }
  }
  if ( !v15 && v17 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v30, v31);
    v13[3] = a1;
    goto LABEL_8;
  }
  v34 = v52[0];
  v35 = v51;
  *((_QWORD *)v16 + 8) = *((_QWORD *)v9 + 33);
  *((_DWORD *)v16 + 18) = *((_DWORD *)a1 + 2);
  *((_DWORD *)v16 + 19) = *((_DWORD *)a1 + 7);
  *((_QWORD *)v16 + 6) |= 0x8700000000000uLL;
  if ( !v34 || (v36 = 0, !v35) )
    v36 = 1;
  v16[177] = v36;
  *((_QWORD *)v16 + 29) = 0LL;
  if ( v17 )
  {
    *((_DWORD *)v16 + 20) = (unsigned __int16)*((_DWORD *)v17 + 14);
    *((_DWORD *)v16 + 21) = *((_DWORD *)v17 + 12);
    *((_DWORD *)v16 + 22) = *((_DWORD *)v17 + 13);
    *((_DWORD *)v16 + 23) = *((_DWORD *)v17 + 10);
    *((_DWORD *)v16 + 24) = *((_DWORD *)v17 + 11);
    *((_DWORD *)v16 + 25) = *((_DWORD *)v17 + 8);
    *((_DWORD *)v16 + 26) = *((_DWORD *)v17 + 9);
    *((_DWORD *)v16 + 27) = *((_DWORD *)v17 + 6);
    *((_DWORD *)v16 + 28) = *((_DWORD *)v17 + 7);
    *((_QWORD *)v16 + 15) = *((_QWORD *)v17 + 2);
    *((_DWORD *)v16 + 32) ^= (*((_DWORD *)v16 + 32) ^ *((_DWORD *)v17 + 15)) & 7;
    *((_DWORD *)v16 + 32) = *((_DWORD *)v16 + 32) & 7 | (*((_DWORD *)v17 + 14) >> 13) & 0x1F8;
    *((_QWORD *)v16 + 6) |= 0x87uLL;
  }
  else
  {
    v37 = *((_DWORD *)a1 + 12);
    if ( v37 && *((_DWORD *)a1 + 13) && *((_DWORD *)a1 + 14) )
    {
      v38 = *((_DWORD *)v16 + 32);
      *((_DWORD *)v16 + 25) = v37;
      *((_DWORD *)v16 + 26) = *((_DWORD *)a1 + 13);
      v39 = *((_DWORD *)a1 + 14) & 7 | v38 & 0xFFFFFE08 | 8;
      *((_QWORD *)v16 + 6) |= 6uLL;
      *((_DWORD *)v16 + 32) = v39;
    }
  }
  v40 = *((_QWORD *)v16 + 6);
  if ( (v40 & 2) != 0 && !*((_DWORD *)v16 + 26) )
    *((_QWORD *)v16 + 6) = v40 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( !v15 )
  {
LABEL_61:
    if ( v18 )
      goto LABEL_62;
    goto LABEL_63;
  }
  v41 = *((_QWORD *)v16 + 6) | 0x20400LL;
  *((_DWORD *)v16 + 50) = *((_DWORD *)v15 + 4);
  *((_DWORD *)v16 + 51) = *((_DWORD *)v15 + 5);
  *((_QWORD *)v16 + 6) = v41;
  if ( !a7 || v34 && v35 )
    v42 = 0LL;
  else
    v42 = 0x20000000000000LL;
  v43 = v42 | v41;
  *((_QWORD *)v16 + 6) = v43;
  *((_QWORD *)v16 + 24) = *(_QWORD *)(v15 + 28);
  *((_QWORD *)v16 + 6) = v43 | 0x800;
  if ( v34 && v35 )
    goto LABEL_58;
  if ( !v26 )
    goto LABEL_61;
  if ( v18 )
  {
LABEL_62:
    *((_DWORD *)v16 + 36) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v16 + 37) = *((_DWORD *)v18 + 5);
    *((_DWORD *)v16 + 38) = *((_DWORD *)v18 + 4);
    *((_DWORD *)v16 + 39) = *((_DWORD *)v18 + 5);
    v48 = *((_QWORD *)v16 + 6) | 0x100LL;
    *(_QWORD *)(v16 + 164) = 21LL;
    *((_QWORD *)v16 + 6) = v48;
    *((_DWORD *)v16 + 43) = 0;
    v49 = *(_OWORD *)(v18 + 24);
    *((_QWORD *)v16 + 6) = v48 | 0x800000;
    *(_OWORD *)(v16 + 216) = v49;
    goto LABEL_63;
  }
  if ( v17 )
  {
LABEL_58:
    *((_DWORD *)v16 + 36) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v16 + 37) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v16 + 38) = *((_DWORD *)v15 + 4);
    *((_DWORD *)v16 + 39) = *((_DWORD *)v15 + 5);
    if ( !(unsigned int)ConvertDCPixelFormatToD3DDI(*((_DWORD *)v15 + 6), &v54) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46);
      v13[3] = *((int *)v15 + 6);
      v13[4] = v55;
      goto LABEL_8;
    }
    v47 = v54;
    *((_QWORD *)v16 + 6) |= 0x100uLL;
    *((_DWORD *)v16 + 41) = v47;
    *((_QWORD *)v16 + 21) = 0LL;
    goto LABEL_61;
  }
LABEL_63:
  if ( *((_DWORD *)a1 + 10) == 1 )
  {
    v33 = 1;
  }
  else if ( *((_DWORD *)a1 + 10) == 2 )
  {
    v33 = 2;
  }
  else if ( *((_DWORD *)a1 + 10) != 3 )
  {
    if ( *((_DWORD *)a1 + 10) == 4 )
      v33 = 4;
    else
      v33 = 0;
  }
  v50 = *((_QWORD *)v16 + 6);
  *((_QWORD *)v16 + 7) |= 0x200uLL;
  v50 |= 0x200uLL;
  *((_DWORD *)v16 + 45) = v33;
  *((_QWORD *)v16 + 6) = v50;
  if ( (v50 & 0x20000) != 0 && ((v33 - 2) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)v16 + 50) = *((_DWORD *)v15 + 5);
    *((_DWORD *)v16 + 51) = *((_DWORD *)v15 + 4);
  }
  ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v16 + 48), a9);
  if ( (a6 & 0x400) == 0 )
    *((_QWORD *)v16 + 7) |= *((_DWORD *)v16 + 12) & 0x820987;
  *((_DWORD *)v16 + 72) = 0;
  result = 0LL;
  *((_DWORD *)v16 + 75) = 0;
  *((_DWORD *)v16 + 76) = 4;
  return result;
}
