/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E120
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180037530 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18003BD60 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180056704 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800592CC (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     Pdcv2ActivationClientUnregister @ 0x18006B394 (Pdcv2ActivationClientUnregister.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  void *v4; // r8
  _QWORD *i; // rsi
  void *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  void *v14; // r8
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = *((_QWORD *)a1 + 279);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 279) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 560));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 251) )
    TpReleasePool();
  v3 = (void *)*((_QWORD *)a1 + 248);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  v4 = (void *)*((_QWORD *)a1 + 250);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 712);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 728));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 752));
  v6 = (void *)*((_QWORD *)a1 + 98);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  RmpReleaseGlobalLock();
  v7 = *((_QWORD *)a1 + 5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)a1 + 9);
  if ( v8 )
    TpReleaseTimer(v8);
  v9 = *((_QWORD *)a1 + 19);
  if ( v9 )
    TpReleaseTimer(v9);
  v10 = *((_QWORD *)a1 + 23);
  if ( v10 )
    TpReleaseTimer(v10);
  v11 = *((_QWORD *)a1 + 27);
  if ( v11 )
    TpReleaseTimer(v11);
  v12 = *((_QWORD *)a1 + 153);
  if ( v12 )
    TpReleaseWork(v12);
  v13 = (void *)*((_QWORD *)a1 + 48);
  if ( v13 )
    NtClose(v13);
  v14 = (void *)*((_QWORD *)a1 + 50);
  if ( v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  v15 = *((_QWORD *)a1 + 198);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    *((_QWORD *)a1 + 198) = 0LL;
  }
  v16 = (void *)*((_QWORD *)a1 + 208);
  if ( v16 )
    Pdcv2ActivationClientUnregister(v16);
  v17 = *((_QWORD *)a1 + 209);
  if ( v17 )
    TpReleaseWork(v17);
  v18 = *((_QWORD *)a1 + 237);
  if ( v18 )
    TpReleaseWork(v18);
  if ( *((_QWORD *)a1 + 236) )
    EtwEventUnregister();
  v19 = *((_QWORD *)a1 + 73);
  if ( v19 )
    TpReleaseTimer(v19);
  *((_DWORD *)a1 + 174) &= ~1u;
  CrmGlobalsCleanup();
}
