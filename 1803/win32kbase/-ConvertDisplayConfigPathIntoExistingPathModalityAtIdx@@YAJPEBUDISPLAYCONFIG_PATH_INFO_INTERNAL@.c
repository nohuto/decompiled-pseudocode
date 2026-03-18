/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CBD64
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CC218 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D260C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D2AD0 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C00CC198 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00CC2C4 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C00D1F5C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  wchar_t *v7; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int TargetVirtualization; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int8 v21; // r9
  __int64 v22; // rcx
  bool v23; // al
  bool v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v39[15]; // [rsp+41h] [rbp-27h] BYREF

  v7 = gpGraphicsDeviceList;
  v9 = (unsigned int)a3;
  v10 = a1;
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_7;
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0
      && *((_DWORD *)v7 + 62) == *(_DWORD *)(a1 + 16)
      && *((_DWORD *)v7 + 63) == *(_DWORD *)(a1 + 20) )
    {
      break;
    }
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  v13 = (char *)a6 + 272 * (unsigned int)a2;
  *((_QWORD *)v13 + 6) = *(_QWORD *)a1;
  *((_QWORD *)v13 + 7) = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v14 & 0x7FD30FEFFF7CF070LL) != 0 )
  {
    v11 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v14, a3);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)v10;
    goto LABEL_8;
  }
  v15 = *(_QWORD *)(a1 + 8);
  if ( (v15 & 0xFFFFFFFFFF7DF470uLL) != 0 || (v14 & v15) != v15 )
  {
    v11 = WdLogNewEntry5_WdError(v15, v14, a3);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)v10;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(v10 + 8);
    goto LABEL_8;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)(v10 + 16),
                           *(_DWORD *)(v10 + 28),
                           v39,
                           &v38,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v13 + 34,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v13 + 35,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v13 + 260));
  v19 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, a3);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v19;
  }
  v21 = v39[0];
  v22 = *((_QWORD *)v13 + 6) | 0x800000000000LL;
  LOBYTE(a3) = v38;
  *((_QWORD *)v13 + 6) = v22;
  *((_QWORD *)v13 + 8) = *((_QWORD *)v7 + 31);
  *((_DWORD *)v13 + 18) = *(_DWORD *)(v10 + 24);
  *((_DWORD *)v13 + 19) = *(_DWORD *)(v10 + 28);
  *((_DWORD *)v13 + 58) = *(_DWORD *)(v10 + 156);
  v23 = !v21 || !(_BYTE)a3;
  a2 = 0x8000000000000LL;
  v13[177] = v23;
  *((_QWORD *)v13 + 6) = v22 | 0x8000000000000LL;
  if ( a5 )
  {
    *((_DWORD *)v13 + 70) |= 0x80u;
    v24 = !(_BYTE)a3 && v21;
    v13[312] = v24;
  }
  if ( (*(_QWORD *)v10 & 0x8000000000000LL) != 0 )
  {
    a1 = *(_BYTE *)(v10 + 101) != 0;
    if ( (v13[177] != 0) != (_DWORD)a1 )
      goto LABEL_7;
  }
  *((_QWORD *)v13 + 34) = 0LL;
  if ( (*(_BYTE *)v10 & 0x87) != 0 )
  {
    *((_DWORD *)v13 + 20) = (unsigned __int16)*(_DWORD *)(v10 + 72);
    *((_DWORD *)v13 + 21) = *(_DWORD *)(v10 + 64);
    *((_DWORD *)v13 + 22) = *(_DWORD *)(v10 + 68);
    *((_DWORD *)v13 + 23) = *(_DWORD *)(v10 + 56);
    *((_DWORD *)v13 + 24) = *(_DWORD *)(v10 + 60);
    *((_DWORD *)v13 + 25) = *(_DWORD *)(v10 + 48);
    *((_DWORD *)v13 + 26) = *(_DWORD *)(v10 + 52);
    *((_DWORD *)v13 + 27) = *(_DWORD *)(v10 + 40);
    *((_DWORD *)v13 + 28) = *(_DWORD *)(v10 + 44);
    *((_QWORD *)v13 + 15) = *(_QWORD *)(v10 + 32);
    *((_DWORD *)v13 + 32) ^= (*((_DWORD *)v13 + 32) ^ *(_DWORD *)(v10 + 76)) & 7;
    *((_DWORD *)v13 + 32) = *((_DWORD *)v13 + 32) & 7 | (*(_DWORD *)(v10 + 72) >> 13) & 0x1F8;
  }
  a1 = *((_QWORD *)v13 + 6);
  a2 = 2LL;
  if ( (a1 & 2) != 0 && !*((_DWORD *)v13 + 26) )
  {
LABEL_7:
    v11 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = v9;
LABEL_8:
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  v25 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v13 + 25) = *(_QWORD *)(v10 + 124);
    if ( !a4 || v21 && (_BYTE)a3 )
      v26 = 0LL;
    else
      v26 = 0x20000000000000LL;
    a1 |= v26;
    *((_QWORD *)v13 + 6) = a1;
    v25 = *(_QWORD *)v10;
  }
  if ( (v25 & 0x800) != 0 )
  {
    *((_QWORD *)v13 + 24) = *(_QWORD *)(v10 + 116);
    v25 = *(_QWORD *)v10;
  }
  if ( (v25 & 0x100) != 0 )
  {
    *((_DWORD *)v13 + 36) = *(_DWORD *)(v10 + 88);
    *((_DWORD *)v13 + 37) = *(_DWORD *)(v10 + 92);
    *((_DWORD *)v13 + 38) = *(_DWORD *)(v10 + 88);
    *((_DWORD *)v13 + 39) = *(_DWORD *)(v10 + 92);
    v27 = *(_DWORD *)(v10 + 96);
    *((_DWORD *)v13 + 42) = 0;
    *((_DWORD *)v13 + 43) = 0;
    *((_DWORD *)v13 + 41) = v27;
    LOBYTE(v27) = *(_BYTE *)(v10 + 100);
    *((_QWORD *)v13 + 6) = a1 | 0x100;
    v13[176] = v27;
    v25 = *(_QWORD *)v10;
  }
  if ( (v25 & 0x800000) != 0 )
  {
    *(_OWORD *)(v13 + 216) = *(_OWORD *)(v10 + 140);
    v25 = *(_QWORD *)v10;
  }
  if ( (v25 & 0x200) != 0 )
  {
    if ( *(_DWORD *)(v10 + 104) == 1 )
    {
      LODWORD(a2) = 1;
    }
    else if ( *(_DWORD *)(v10 + 104) != 2 )
    {
      if ( *(_DWORD *)(v10 + 104) == 3 )
      {
        LODWORD(a2) = 3;
      }
      else if ( *(_DWORD *)(v10 + 104) == 4 )
      {
        LODWORD(a2) = 4;
      }
      else
      {
        LODWORD(a2) = 0;
      }
    }
    *((_DWORD *)v13 + 45) = a2;
  }
  v30 = ConvertDisplayConfigScalingToPathModalityForPath(
          (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v10,
          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + 48),
          a7);
  if ( v30 >= 0 )
  {
    *((_DWORD *)v13 + 60) = 0;
    if ( (*(_BYTE *)v10 & 8) != 0
      && (v35 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v10,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v13 + 48)),
          v35 < 0) )
    {
      v37 = WdLogNewEntry5_WdError(v34, v33, v36);
      *(_QWORD *)(v37 + 24) = v9;
      WdLogEvent5_WdError(v37);
      return (unsigned int)v35;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v29, v28, v31);
    *(_QWORD *)(v32 + 24) = v9;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v30;
  }
}
