/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x1C00F9EA4
 * Callers:
 *     UserFunctionalizeDisplayConfig @ 0x1C00D7E44 (UserFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0057AC4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F3EA0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F47D8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        __int16 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  struct _D3DKMT_GETPATHSMODALITY *v15[6]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v15);
  v11 = *a3;
  v12 = *a1;
  v16 = 0LL;
  v15[0] = (struct _D3DKMT_GETPATHSMODALITY *)&off_1C015FCD0;
  v13 = ConvertDisplayConfigToPathModality(v12, a2, v11, a4, a5, 0LL, 0LL);
  if ( v13 >= 0 )
  {
    v13 = ((__int64 (__fastcall *)(__int64, __int64))qword_1C018B9C0)(0x8000LL, v16);
    if ( v13 >= 0 )
      v13 = ((__int64 (__fastcall *)(__int64, unsigned int *, struct DISPLAYCONFIG_PATH_INFO *, unsigned int *, struct DISPLAYCONFIG_MODE_INFO *, __int64))qword_1C018BF40)(
              v16,
              a1,
              a2,
              a3,
              a4,
              a7);
  }
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v15);
  return (unsigned int)v13;
}
