/*
 * XREFs of ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18003316C
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x1800308E0 (-RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180036FCC (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037C64 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseAllocation(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  struct _RM_CPU_SET_CLIENT_CONTEXT **Allocation; // rax
  char *v6; // rbx
  const GUID *v7; // r8
  const GUID *v8; // r9
  DWORD v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[80]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v17; // [rsp+C0h] [rbp-40h]
  int v18; // [rsp+C8h] [rbp-38h]
  int v19; // [rsp+CCh] [rbp-34h]
  int *v20; // [rsp+D0h] [rbp-30h]
  int v21; // [rsp+D8h] [rbp-28h]
  int v22; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v14 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056AA4, v3, v4, 2u, &pData);
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v15);
  RmpAcquireGlobalLock();
  Allocation = (struct _RM_CPU_SET_CLIENT_CONTEXT **)RmpCpuSetManagerFindAllocation(*a1, v14);
  v6 = (char *)Allocation;
  if ( Allocation && Allocation[6] == (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1 )
  {
    RmpCpuSetManagerReleaseAllocation(Allocation);
    v11 = 0;
  }
  else
  {
    v11 = -1073741584;
  }
  if ( v6 )
    RmpObjectRelease(v6);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v11;
    v12 = *((_DWORD *)a1 + 14);
    v20 = &v12;
    v23 = &v14;
    v18 = 4;
    v21 = 4;
    v24 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056671, v7, v8, 5u, &v16);
  }
  if ( v13 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return v11;
}
