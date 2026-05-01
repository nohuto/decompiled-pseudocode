/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18003330C
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x1800308F0 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180019FDC (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x180037DB0 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  struct _RM_OBJECT_TABLE *v5; // rcx
  char *v6; // rbx
  const GUID *v7; // r8
  const GUID *v8; // r9
  DWORD v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[80]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v18; // [rsp+D0h] [rbp-30h]
  int v19; // [rsp+D8h] [rbp-28h]
  int v20; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v21; // [rsp+E0h] [rbp-20h]
  int v22; // [rsp+E8h] [rbp-18h]
  int v23; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v24; // [rsp+F0h] [rbp-10h]
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF

  v14 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800564FB, v3, v4, 2u, &pData);
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v16);
  RmpAcquireGlobalLock();
  v5 = (struct _RM_CPU_SET_MANAGER *)((char *)*a1 + 48);
  v12 = v14;
  if ( (int)RmpObjectTableFindObjectByHandle(v5, &v12, (struct _RM_OBJECT_HEADER **)&P) < 0 )
  {
    v6 = 0LL;
LABEL_6:
    v11 = -1073741584;
    goto LABEL_7;
  }
  v6 = (char *)P;
  if ( !P || *((struct _RM_CPU_SET_MANAGER ***)P + 5) != a1 )
    goto LABEL_6;
  RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, P, 1u);
  v11 = 0;
LABEL_7:
  if ( v6 )
    RmpObjectRelease(v6);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v11;
    LODWORD(v12) = *((_DWORD *)a1 + 14);
    v21 = &v12;
    v24 = &v14;
    v19 = 4;
    v22 = 4;
    v25 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056EC5, v7, v8, 5u, &v17);
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
