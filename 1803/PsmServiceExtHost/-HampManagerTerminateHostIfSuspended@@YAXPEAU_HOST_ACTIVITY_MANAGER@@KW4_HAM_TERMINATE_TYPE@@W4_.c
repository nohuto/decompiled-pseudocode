/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18003381C
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033680 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE2@Z @ 0x180064008 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE2@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000FF88 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x1800655D0 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char v8; // r14
  NTSTATUS v10; // edi
  int HostByProcessHandle; // eax
  char v13[8]; // [rsp+30h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-69h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v15; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-59h] BYREF
  NTSTATUS v17; // [rsp+4Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-29h]
  struct _RM_HAM_ACTIVITY_HOST **v21; // [rsp+80h] [rbp-21h]
  __int64 v22; // [rsp+88h] [rbp-19h]
  HANDLE *p_Handle; // [rsp+90h] [rbp-11h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  NTSTATUS *v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]

  v7 = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  v8 = 0;
  v13[0] = 0;
  v10 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v10 >= 0 )
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(a1, Handle, &v15);
    v7 = v15;
    v10 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
      v10 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  v17 = v10;
  if ( v10 >= 0 )
  {
    HampHostTerminateIfSuspended(v7, 1LL, a4, v13);
    v8 = v13[0];
  }
  else if ( _volatile_metadata > 4u )
  {
    v16 = a2;
    v19 = &v16;
    v21 = &v15;
    p_Handle = &Handle;
    v25 = &v17;
    v20 = 4LL;
    LODWORD(v15) = 1;
    v22 = 4LL;
    LODWORD(Handle) = a4;
    v24 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008253E, 0LL, 0LL, 6u, &pData);
  }
  if ( a5 )
    *a5 = v8;
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
}
