/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIHPEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F53A0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F5808 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F5784 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F58B4 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F8D70 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct D3DKMT_GETPATHSMODALITY *a5,
        int *a6)
{
  wchar_t *v6; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int TargetVirtualization; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int8 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int8 v32; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v33[39]; // [rsp+31h] [rbp-27h] BYREF

  v6 = gpGraphicsDeviceList;
  v8 = (unsigned int)a3;
  v9 = a1;
  while ( 1 )
  {
    if ( !v6 )
      goto LABEL_7;
    if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
      && *((_DWORD *)v6 + 66) == *(_DWORD *)(a1 + 16)
      && *((_DWORD *)v6 + 67) == *(_DWORD *)(a1 + 20) )
    {
      break;
    }
    v6 = (wchar_t *)*((_QWORD *)v6 + 16);
  }
  v12 = (char *)a5 + 264 * (unsigned int)a2;
  *((_QWORD *)v12 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v12 + 7) = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v13 & 0x7FD30FEFFF7CF070LL) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v13, a3);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)v9;
    goto LABEL_8;
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( (v14 & 0xFFFFFFFFFF7DF470uLL) != 0 || (v13 & v14) != v14 )
  {
    v10 = WdLogNewEntry5_WdError(v14, v13, a3);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)v9;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 8);
    goto LABEL_8;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)(v9 + 16),
                           *(_DWORD *)(v9 + 28),
                           v33,
                           &v32,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v12 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v12 + 35);
  v17 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, a2, a3);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
  v19 = v33[0];
  *((_QWORD *)v12 + 6) |= 0x800000000000uLL;
  LOBYTE(a3) = v32;
  *((_QWORD *)v12 + 8) = *((_QWORD *)v6 + 33);
  *((_DWORD *)v12 + 18) = *(_DWORD *)(v9 + 24);
  *((_DWORD *)v12 + 19) = *(_DWORD *)(v9 + 28);
  *((_DWORD *)v12 + 58) = *(_DWORD *)(v9 + 156);
  if ( v19 && (_BYTE)a3 )
    a2 = 0LL;
  else
    LOBYTE(a2) = 1;
  v12[177] = a2;
  *((_QWORD *)v12 + 6) |= 0x8000000000000uLL;
  if ( (*(_QWORD *)v9 & 0x8000000000000LL) != 0 )
  {
    a1 = *(_BYTE *)(v9 + 101) != 0;
    if ( (unsigned __int8)a2 != (_DWORD)a1 )
      goto LABEL_7;
  }
  *((_QWORD *)v12 + 33) = 0LL;
  if ( (*(_BYTE *)v9 & 0x87) != 0 )
  {
    *((_DWORD *)v12 + 20) = (unsigned __int16)*(_DWORD *)(v9 + 72);
    *((_DWORD *)v12 + 21) = *(_DWORD *)(v9 + 64);
    *((_DWORD *)v12 + 22) = *(_DWORD *)(v9 + 68);
    *((_DWORD *)v12 + 23) = *(_DWORD *)(v9 + 56);
    *((_DWORD *)v12 + 24) = *(_DWORD *)(v9 + 60);
    *((_DWORD *)v12 + 25) = *(_DWORD *)(v9 + 48);
    *((_DWORD *)v12 + 26) = *(_DWORD *)(v9 + 52);
    *((_DWORD *)v12 + 27) = *(_DWORD *)(v9 + 40);
    *((_DWORD *)v12 + 28) = *(_DWORD *)(v9 + 44);
    *((_QWORD *)v12 + 15) = *(_QWORD *)(v9 + 32);
    *((_DWORD *)v12 + 32) ^= (*((_DWORD *)v12 + 32) ^ *(_DWORD *)(v9 + 76)) & 7;
    *((_DWORD *)v12 + 32) = *((_DWORD *)v12 + 32) & 7 | (*(_DWORD *)(v9 + 72) >> 13) & 0x1F8;
  }
  a1 = *((_QWORD *)v12 + 6);
  a2 = 2LL;
  if ( (a1 & 2) != 0 && !*((_DWORD *)v12 + 26) )
  {
LABEL_7:
    v10 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v8;
LABEL_8:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)v9 & 0x20000) != 0 )
  {
    *((_QWORD *)v12 + 25) = *(_QWORD *)(v9 + 124);
    if ( !a4 || v19 && (_BYTE)a3 )
      v20 = 0LL;
    else
      v20 = 0x20000000000000LL;
    *((_QWORD *)v12 + 6) = v20 | a1;
  }
  if ( (*(_DWORD *)v9 & 0x800LL) != 0 )
    *((_QWORD *)v12 + 24) = *(_QWORD *)(v9 + 116);
  if ( (*(_DWORD *)v9 & 0x100LL) != 0 )
  {
    *((_DWORD *)v12 + 36) = *(_DWORD *)(v9 + 88);
    *((_DWORD *)v12 + 37) = *(_DWORD *)(v9 + 92);
    *((_DWORD *)v12 + 38) = *(_DWORD *)(v9 + 88);
    *((_DWORD *)v12 + 39) = *(_DWORD *)(v9 + 92);
    v21 = *(_DWORD *)(v9 + 96);
    *((_DWORD *)v12 + 42) = 0;
    *((_DWORD *)v12 + 43) = 0;
    *((_DWORD *)v12 + 41) = v21;
    LOBYTE(v21) = *(_BYTE *)(v9 + 100);
    *((_QWORD *)v12 + 6) |= 0x100uLL;
    v12[176] = v21;
  }
  if ( (*(_DWORD *)v9 & 0x800000) != 0 )
    *(_OWORD *)(v12 + 216) = *(_OWORD *)(v9 + 140);
  if ( (*(_DWORD *)v9 & 0x200LL) != 0 )
  {
    if ( *(_DWORD *)(v9 + 104) == 1 )
    {
      LODWORD(a2) = 1;
    }
    else if ( *(_DWORD *)(v9 + 104) != 2 )
    {
      if ( *(_DWORD *)(v9 + 104) == 3 )
      {
        LODWORD(a2) = 3;
      }
      else if ( *(_DWORD *)(v9 + 104) == 4 )
      {
        LODWORD(a2) = 4;
      }
      else
      {
        LODWORD(a2) = 0;
      }
    }
    *((_DWORD *)v12 + 45) = a2;
  }
  v24 = ConvertDisplayConfigScalingToPathModalityForPath(
          (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v9,
          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 48),
          a6);
  if ( v24 >= 0 )
  {
    *((_DWORD *)v12 + 60) = 0;
    if ( (*(_BYTE *)v9 & 8) != 0
      && (v29 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v9,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 48)),
          v29 < 0) )
    {
      v31 = WdLogNewEntry5_WdError(v28, v27, v30);
      *(_QWORD *)(v31 + 24) = v8;
      WdLogEvent5_WdError(v31);
      return (unsigned int)v29;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v23, v22, v25);
    *(_QWORD *)(v26 + 24) = v8;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v24;
  }
}
