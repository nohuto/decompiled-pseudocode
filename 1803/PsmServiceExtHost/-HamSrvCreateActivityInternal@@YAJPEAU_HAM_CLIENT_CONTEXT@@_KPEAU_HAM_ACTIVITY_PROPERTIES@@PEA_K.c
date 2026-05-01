/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011974
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025F30 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  const WCHAR *v8; // r15
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  unsigned int v11; // r9d
  int v12; // eax
  struct _CEM_RC_OBJECT *v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // r10d
  int v16; // r10d
  int v17; // r9d
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+38h] [rbp-C8h] BYREF
  struct _CEM_RC_OBJECT *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  __int64 *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 *v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF

  v24 = a2;
  if ( _volatile_metadata > 4u )
  {
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800823FB, 0LL, 0LL, 2u, &pData);
    a2 = v24;
  }
  v7 = *a1;
  v23 = -1LL;
  v8 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Host = RmHamFindHost(v7, a2, &v21);
  v10 = v21;
  v11 = Host;
  v20 = Host;
  if ( Host >= 0 )
  {
    v8 = (const WCHAR *)((char *)v21 + 24);
    v12 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v21, a3, 0, &v22);
    v13 = v22;
    v11 = v12;
    v20 = v12;
    if ( v12 >= 0 )
    {
      v14 = *((_QWORD *)v22 + 5);
      v11 = 0;
      *a4 = v14;
      v23 = v14;
      v20 = 0;
    }
    if ( v13 )
    {
      CemRcObjectDereference(v13);
      v11 = v20;
    }
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v28 = 0;
    v31 = 0;
    v26 = &v20;
    v27 = 4;
    v29 = &v23;
    v30 = v15;
    TlgCreateWsz(&pDesc, v8);
    v35 = 0;
    v33 = &v24;
    v34 = v16;
    TlgCreateWsz(&v36, (LPCWSTR)a3 + 6);
    TlgCreateWsz(&v37, (LPCWSTR)a3 + 70);
    v17 = *(_DWORD *)a3;
    v40 = 0;
    v38 = &v21;
    LODWORD(v21) = v17;
    v39 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800813DE, 0LL, 0LL, 9u, &v25);
    v11 = v20;
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v10 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
    return v20;
  }
  return v11;
}
