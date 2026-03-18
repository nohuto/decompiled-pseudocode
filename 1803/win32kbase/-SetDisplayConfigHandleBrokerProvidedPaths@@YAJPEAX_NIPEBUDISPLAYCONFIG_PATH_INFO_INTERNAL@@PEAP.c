/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D260C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00D4D70 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C004B368 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C004B448 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath13927::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath13927 @ 0x1C0077498 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CBD64 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        void *a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  struct D3DKMT_GETPATHSMODALITY *i; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  char *v19; // r8
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rax
  struct D3DKMT_GETPATHSMODALITY *v24; // rax
  __int64 v25; // rax
  struct D3DKMT_GETPATHSMODALITY *v26; // r8
  __int64 v27; // rcx
  char *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r14d
  unsigned int v31; // edi
  unsigned int *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  bool j; // cf
  unsigned int v38; // r9d
  __int64 v39; // r10
  int v40; // r10d
  unsigned int k; // r9d
  __int64 v42; // r11
  __int64 v43; // rax
  int v44; // ecx
  unsigned int v45; // r9d
  __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // rax
  struct D3DKMT_GETPATHSMODALITY *v50; // [rsp+40h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v51; // [rsp+48h] [rbp-38h] BYREF
  __int128 v52; // [rsp+50h] [rbp-30h] BYREF
  __int128 v53; // [rsp+60h] [rbp-20h]

  v51 = 0LL;
  *(_QWORD *)&v52 = &v51;
  *((_QWORD *)&v52 + 1) = &v50;
  v50 = 0LL;
  v53 = v52;
  if ( !a2 )
  {
    PathsModality = GetPathsModality((__int64)&v50, &v51, 16777280LL, 0LL);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_58;
    }
    v11 = AllocPathsModality((unsigned __int16)a3 + *((_WORD *)v51 + 10));
    v50 = v11;
    if ( v11 )
    {
      *((_WORD *)v11 + 10) = 0;
      v15 = 0;
      for ( i = v51; v15 < *((unsigned __int16 *)v51 + 10); ++v15 )
      {
        v17 = (__int64)i + 272 * v15 + 48;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C01A2030)(
                                 a1,
                                 *(_QWORD *)(v17 + 16),
                                 *(unsigned int *)(v17 + 28)) )
        {
          v18 = *((unsigned __int16 *)v50 + 10);
          v19 = (char *)v50 + 272 * v18;
          *((_WORD *)v50 + 10) = v18 + 1;
          v20 = 2LL;
          v21 = v19 + 48;
          do
          {
            *v21 = *(_OWORD *)v17;
            v21[1] = *(_OWORD *)(v17 + 16);
            v21[2] = *(_OWORD *)(v17 + 32);
            v21[3] = *(_OWORD *)(v17 + 48);
            v21[4] = *(_OWORD *)(v17 + 64);
            v21[5] = *(_OWORD *)(v17 + 80);
            v21[6] = *(_OWORD *)(v17 + 96);
            v21 += 8;
            v22 = *(_OWORD *)(v17 + 112);
            v17 += 128LL;
            *(v21 - 1) = v22;
            --v20;
          }
          while ( v20 );
          *v21 = *(_OWORD *)v17;
          v23 = *((_DWORD *)v19 + 12) & 0x820B8F;
          *((_QWORD *)v19 + 34) = 0LL;
          *((_QWORD *)v19 + 7) = v23;
        }
        i = v51;
      }
      goto LABEL_15;
    }
LABEL_13:
    *(_DWORD *)a7 = 45;
    v25 = WdLogNewEntry5_WdError(v13, v12, v14);
    WdLogEvent5_WdError(v25);
    PathsModality = -1073741801;
    goto LABEL_58;
  }
  v24 = AllocPathsModality(a3);
  v50 = v24;
  if ( !v24 )
    goto LABEL_13;
  *((_WORD *)v24 + 10) = 0;
LABEL_15:
  v26 = v50;
  v27 = *((unsigned __int16 *)v50 + 10);
  *(_QWORD *)&v52 = (char *)v50 + 48;
  DWORD2(v52) = v27;
  if ( (_DWORD)v27 )
  {
    v28 = (char *)v50 + 280;
    v29 = (unsigned int)v27;
    do
    {
      *(_DWORD *)v28 |= 0x80u;
      v28[32] = 0;
      v28 += 272;
      --v29;
    }
    while ( v29 );
    v26 = v50;
  }
  v30 = *((unsigned __int16 *)v26 + 10);
  v31 = 0;
  if ( a3 )
  {
    v32 = (unsigned int *)((char *)a4 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C01A2030)(
                                 a1,
                                 *((_QWORD *)a4 + 25 * v31 + 2),
                                 *v32) )
        {
          v43 = WdLogNewEntry5_WdError(v34, v33, v35);
          WdLogEvent5_WdError(v43);
          v44 = 43;
          PathsModality = -1073741790;
LABEL_43:
          *(_DWORD *)a7 = v44;
          goto LABEL_57;
        }
        v26 = v50;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (unsigned __int64)a4 + 200 * v31,
                        *((unsigned __int16 *)v26 + 10),
                        v31,
                        1,
                        1,
                        v26,
                        a6);
      if ( PathsModality < 0 )
      {
        v44 = 46;
        goto LABEL_43;
      }
      ++v31;
      v32 += 50;
      ++*((_WORD *)v50 + 10);
      v26 = v50;
    }
    while ( v31 < a3 );
  }
  v36 = v30;
  for ( j = v30 < *((unsigned __int16 *)v26 + 10); ; j = (unsigned int)v36 < *((unsigned __int16 *)v50 + 10) )
  {
    if ( !j )
    {
      if ( *((_WORD *)v26 + 10) )
      {
        PathsModality = 0;
        v50 = 0LL;
        *a5 = v26;
      }
      else
      {
        *(_DWORD *)a7 = 47;
        v48 = WdLogNewEntry5_WdError(v27, v36, v26);
        WdLogEvent5_WdError(v48);
        PathsModality = -1073741811;
      }
      goto LABEL_57;
    }
    v27 = 272LL * (unsigned int)v36;
    if ( *(_DWORD *)((char *)v26 + v27 + 72) != -2 )
      break;
    *(_DWORD *)((char *)v26 + v27 + 72) = 0;
    while ( 1 )
    {
      v26 = v50;
      v45 = 0;
      if ( !*((_WORD *)v50 + 10) )
        break;
      while ( 1 )
      {
        if ( v45 != (_DWORD)v36 )
        {
          v46 = 272LL * v45;
          if ( *(_DWORD *)((char *)v50 + v46 + 64) == *(_DWORD *)((char *)v50 + v27 + 64)
            && *(_DWORD *)((char *)v50 + v46 + 68) == *(_DWORD *)((char *)v50 + v27 + 68)
            && *(_DWORD *)((char *)v50 + v46 + 72) == *(_DWORD *)((char *)v50 + v27 + 72) )
          {
            break;
          }
        }
        if ( ++v45 >= *((unsigned __int16 *)v50 + 10) )
          goto LABEL_34;
      }
      ++*(_DWORD *)((char *)v50 + v27 + 72);
    }
LABEL_34:
    v40 = v36 | 0xFE500000;
    v36 = (unsigned int)(v36 + 1);
    for ( k = v36; k < *((unsigned __int16 *)v26 + 10); ++k )
    {
      v42 = 272LL * k;
      if ( *(_DWORD *)((char *)v26 + v42 + 232) == *(_DWORD *)((char *)v26 + v27 + 232) )
      {
        *(_DWORD *)((char *)v26 + v42 + 232) = v40;
        v26 = v50;
        if ( !*((_BYTE *)v50 + v27 + 177) || *((_BYTE *)v50 + v27 + 312) )
        {
          *(_DWORD *)((char *)v50 + v42 + 72) = *(_DWORD *)((char *)v50 + v27 + 72);
          v26 = v50;
        }
      }
    }
    *(_DWORD *)((char *)v26 + v27 + 232) = v40;
    v26 = v50;
  }
  v38 = 0;
  if ( !v30 )
    goto LABEL_34;
  while ( 1 )
  {
    v39 = 272LL * v38;
    if ( *(_DWORD *)((char *)v26 + v39 + 64) == *(_DWORD *)((char *)v26 + v27 + 64)
      && *(_DWORD *)((char *)v26 + v39 + 68) == *(_DWORD *)((char *)v26 + v27 + 68)
      && *(_DWORD *)((char *)v26 + v39 + 72) == *(_DWORD *)((char *)v26 + v27 + 72) )
    {
      break;
    }
    if ( ++v38 >= v30 )
      goto LABEL_34;
  }
  v47 = WdLogNewEntry5_WdError(v27, v36, v26);
  WdLogEvent5_WdError(v47);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_57:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath13927::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath13927((__int64 *)&v52);
LABEL_58:
  FreePathsModality(*(struct D3DKMT_GETPATHSMODALITY **)v53);
  FreePathsModality(**((struct D3DKMT_GETPATHSMODALITY ***)&v53 + 1));
  return (unsigned int)PathsModality;
}
