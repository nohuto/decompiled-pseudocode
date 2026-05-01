/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180032F2C
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x1800308C0 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180036FCC (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180037A7C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037DB0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  PVOID v7; // rdi
  const GUID *v8; // r8
  const GUID *v9; // r9
  DWORD ProcessId; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  char *v12; // rbx
  unsigned __int64 v13; // rcx
  DWORD v14; // eax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  DWORD v17; // ebx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+B0h] [rbp-50h] BYREF
  int *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  __int64 *v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  int *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  PVOID *p_P; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v24 = a3;
  RmpUtilCheckStartLockTracking(&v22, (struct _CEM_LOCK_TRACKER *)v25);
  v23 = -1LL;
  v7 = 0LL;
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800564C7, v8, v9, 2u, &pData);
  ProcessId = GetProcessId(a2);
  if ( ProcessId == GetCurrentProcessId() )
  {
    v19 = -1073741584;
    goto LABEL_17;
  }
  RmpAcquireGlobalLock();
  Allocation = RmpCpuSetManagerFindAllocation(*a1, v24);
  v12 = (char *)Allocation;
  if ( !Allocation || *((struct _RM_CPU_SET_MANAGER ***)Allocation + 6) != a1 || !*((_DWORD *)Allocation + 64) )
  {
    v19 = -1073741583;
LABEL_13:
    if ( v7 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v7, 1u);
    goto LABEL_15;
  }
  v19 = RmpCpuSetManagerRegisterProcessWithAllocation(
          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
          a2,
          Allocation,
          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
  if ( v19 < 0 )
  {
    v7 = P;
    goto LABEL_13;
  }
  v13 = *((_QWORD *)P + 3);
  v19 = 0;
  v23 = v13;
  *a4 = v13;
LABEL_15:
  if ( v12 )
    RmpObjectRelease(v12);
LABEL_17:
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v27 = &v19;
    v30 = &v23;
    v21 = *((_DWORD *)a1 + 14);
    v33 = &v21;
    v28 = 4;
    v31 = 8;
    v34 = 4;
    v14 = GetProcessId(a2);
    v38 = 0;
    v41 = 0;
    LODWORD(P) = v14;
    p_P = &P;
    v39 = &v24;
    v37 = 4;
    v40 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005642C, v15, v16, 7u, &v26);
  }
  if ( v22 )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v17, 0LL);
    }
  }
  return (unsigned int)v19;
}
