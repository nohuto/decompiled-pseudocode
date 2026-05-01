/*
 * XREFs of RmpHandlePsmRetrieveHostMemoryLimit @ 0x18000B78C
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x18000B540 (PsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18000B6F0 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 */

__int64 __fastcall RmpHandlePsmRetrieveHostMemoryLimit(
        void *Src,
        int a2,
        wchar_t *Source,
        unsigned int a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  int v6; // eax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // rax
  bool v11; // zf
  PVOID P; // [rsp+30h] [rbp-288h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-280h] BYREF
  __int64 v14; // [rsp+48h] [rbp-270h]
  wchar_t Destination[280]; // [rsp+60h] [rbp-258h] BYREF

  P = 0LL;
  RmpPsmAppInstanceIdInitialize(Destination, Source, Src, a2, a4, a5);
  RmpAcquireGlobalLock();
  v6 = RmpActivityHostFindByPsmId(
         RmSvcGlobals,
         (struct _RM_PSM_HOST_INFO *)Destination,
         (struct _RM_ACTIVITY_HOST **)&P);
  v7 = P;
  v8 = v6;
  if ( v6 >= 0 )
  {
    RmpActivityHostComputeEnforcementSettings(
      (struct _RM_ACTIVITY_HOST *)P,
      0LL,
      0LL,
      (struct _RM_ENFORCEMENT_SETTINGS *)v13);
    v10 = v14;
    v11 = v14 == -1;
    v7[135] = v14;
    if ( v11 )
      v10 = 0LL;
    *a6 = v10;
    v8 = 0;
  }
  RmpReleaseGlobalLock();
  if ( v7 )
    RmpObjectRelease(v7);
  return v8;
}
