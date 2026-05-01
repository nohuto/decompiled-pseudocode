/*
 * XREFs of ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18004FF38
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x18004DB90 (-RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x1800554C4 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180056664 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseAllocation(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_CPU_SET_CLIENT_CONTEXT **Allocation; // rax
  char *v4; // rbx
  int v5; // eax
  DWORD v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  int *v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v11 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D0F7, 0LL, 0LL, 2u, &pData);
  RmpUtilCheckStartLockTracking(&v10, (struct _CEM_LOCK_TRACKER *)v12);
  RmpAcquireGlobalLock();
  Allocation = (struct _RM_CPU_SET_CLIENT_CONTEXT **)RmpCpuSetManagerFindAllocation(*a1, v11);
  v4 = (char *)Allocation;
  if ( Allocation && Allocation[7] == (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1 )
  {
    RmpCpuSetManagerReleaseAllocation(Allocation);
    v5 = 0;
  }
  else
  {
    v5 = -1073741584;
  }
  v8 = v5;
  if ( v4 )
    RmpObjectRelease(v4);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v8;
    v9 = *((_DWORD *)a1 + 14);
    v17 = &v9;
    v20 = &v11;
    v15 = 4;
    v18 = 4;
    v21 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007CC65, 0LL, 0LL, 5u, &v13);
  }
  if ( v10 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v6, 0LL);
    }
  }
  return v8;
}
