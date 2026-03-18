/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C00FA088
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E7630 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001B1F0 (--0AUTO_TGO@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F511C (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5308 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F5808 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v6; // rsi
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  struct D3DKMT_GETPATHSMODALITY *v21[6]; // [rsp+30h] [rbp-58h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v22; // [rsp+60h] [rbp-28h] BYREF

  v4 = (unsigned int)a3;
  v6 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v21);
  v22 = 0LL;
  v13 = *a1;
  v21[0] = (struct D3DKMT_GETPATHSMODALITY *)&off_1C015EFE0;
  if ( (v4 & 1) == 0 )
  {
    if ( !(_DWORD)v13 )
      goto LABEL_5;
    if ( (v4 & 2) != 0 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v4;
      goto LABEL_13;
    }
LABEL_7:
    v15 = DrvSetDisplayConfigValidateParams((unsigned int)v13, v6, 32864LL, 0LL, 1);
    if ( v15 < 0 )
      goto LABEL_23;
    v15 = AllocatePathModalityForDisplayConfig((unsigned int)v13, v6, &v22);
    if ( v15 < 0 )
      goto LABEL_23;
    v15 = ConvertDisplayConfigToPathModality((unsigned int)v13, v6, v22, 0LL);
    if ( v15 < 0 )
      goto LABEL_23;
    if ( (v4 & 1) != 0 )
    {
      v19 = *((unsigned int *)v6 - 44);
      if ( (unsigned int)v19 >= (unsigned int)v13 )
      {
        v14 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v14 + 24) = *((unsigned int *)v6 - 44);
        goto LABEL_13;
      }
      if ( (v4 & 2) != 0 )
        *((_QWORD *)v22 + 33 * v19 + 6) |= 0x4000000000uLL;
      v20 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, char *, char *))qword_1C0190C50)(
              0LL,
              v22,
              *((unsigned int *)v6 - 44),
              (char *)v6 - 168,
              (char *)v6 - 172);
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0190628)(0x8000LL, v22);
      if ( v15 < 0 )
        goto LABEL_23;
      v20 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))qword_1C0190BC0)(
              v22,
              a1,
              v6,
              a4);
    }
    v15 = v20;
    goto LABEL_23;
  }
  if ( (unsigned int)v13 >= 2 )
  {
    v6 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v6 + 192);
    LODWORD(v13) = v13 - 1;
    goto LABEL_7;
  }
LABEL_5:
  v14 = WdLogNewEntry5_WdError(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = v13;
LABEL_13:
  WdLogEvent5_WdError(v14);
  v15 = -1073741811;
LABEL_23:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v21);
  return (unsigned int)v15;
}
