/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180032B84
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180030810 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037C64 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  UCHAR v10; // dl
  PVOID v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  DWORD v16; // ebx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v21; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+B0h] [rbp-50h] BYREF
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  ULONG *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  ULONG *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  PVOID *p_P; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  RmpUtilCheckStartLockTracking(&v23, (struct _CEM_LOCK_TRACKER *)v25);
  v24 = -1LL;
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v7, &unk_1800562A0, v8, v9, 2u, &pData);
  RtlInitializeBitMap((PRTL_BITMAP)&pData, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 4 && RtlNumberOfSetBits((PRTL_BITMAP)&pData) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v18 = RmpCpuSetManagerAcquireCpuSets(
            a1,
            (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
            0,
            (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v18 < 0 )
    {
      v11 = P;
    }
    else
    {
      v24 = *((_QWORD *)P + 3);
      *a3 = v24;
      v11 = 0LL;
      v18 = 0;
    }
    if ( v11 )
      RmpCpuSetManagerReleaseAllocation(v11);
    RmpReleaseGlobalLock();
  }
  else
  {
    v18 = -1073741584;
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v10, 0LL)
    && hProvider > 4u
    && TlgKeywordOn(v12, 9uLL) )
  {
    v28 = 4LL;
    v27 = &v18;
    v30 = 8LL;
    v29 = &v24;
    v20 = *((_DWORD *)a1 + 14);
    v31 = &v20;
    v21 = a2[42];
    v33 = &v21;
    v22 = a2[43];
    v35 = &v22;
    LODWORD(P) = *a2;
    p_P = &P;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    TlgWrite(v13, &unk_18005712E, v14, v15, 8u, &v26);
  }
  if ( v23 )
  {
    v16 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v16, 0LL);
    }
  }
  return (unsigned int)v18;
}
