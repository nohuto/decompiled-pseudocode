/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x18004F90C
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x18004DAC0 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180054C74 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180056664 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  UCHAR v8; // dl
  PVOID v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  DWORD v12; // ebx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v17; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  int *v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+138h] [rbp+38h]
  ULONG *v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  ULONG *v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  PVOID *p_P; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  RmpUtilCheckStartLockTracking(&v19, (struct _CEM_LOCK_TRACKER *)v21);
  v20 = -1LL;
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v7, &unk_18007C71B, 0LL, 0LL, 2u, &pData);
  RtlInitializeBitMap((PRTL_BITMAP)&pData, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 8 && RtlNumberOfSetBits((PRTL_BITMAP)&pData) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v14 = RmpCpuSetManagerAcquireCpuSets(
            a1,
            (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
            0,
            (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v14 < 0 )
    {
      v9 = P;
    }
    else
    {
      v20 = *((_QWORD *)P + 4);
      *a3 = v20;
      v9 = 0LL;
      v14 = 0;
    }
    if ( v9 )
      RmpCpuSetManagerReleaseAllocation(v9);
    RmpReleaseGlobalLock();
  }
  else
  {
    v14 = -1073741584;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL)
    && hProvider > 4u
    && TlgKeywordOn(v10, 9uLL) )
  {
    v24 = 4LL;
    v23 = &v14;
    v25 = &v20;
    v16 = *((_DWORD *)a1 + 14);
    v27 = &v16;
    v17 = a2[42];
    v29 = &v17;
    v18 = a2[43];
    v31 = &v18;
    LODWORD(P) = *a2;
    p_P = &P;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    TlgWrite(v11, &unk_18007D54B, 0LL, 0LL, 8u, &v22);
  }
  if ( v19 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  return (unsigned int)v14;
}
