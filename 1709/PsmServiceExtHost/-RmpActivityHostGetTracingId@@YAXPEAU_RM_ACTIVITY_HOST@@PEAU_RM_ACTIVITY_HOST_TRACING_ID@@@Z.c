/*
 * XREFs of ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     RmpTracingControlCallback @ 0x1800201F0 (RmpTracingControlCallback.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180033FF0 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003ADF0 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18003D428 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180040E40 (-RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800366DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall RmpActivityHostGetTracingId(struct _RM_ACTIVITY_HOST *a1, struct _RM_ACTIVITY_HOST_TRACING_ID *a2)
{
  struct _RM_ACTIVITY_HOST_TRACING_ID *v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  struct _RM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // rax

  memset_0(a2, 0, 0x230uLL);
  if ( *((_DWORD *)a1 + 14) )
  {
    v8 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 105);
    if ( v8 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 840) && v8 != (struct _RM_ACTIVITY_HOST *)1416 )
      StringCchCopyW((unsigned __int16 *)a2, 0xE8uLL, *((const unsigned __int16 **)v8 - 173));
    v9 = *((_QWORD *)a1 + 5);
    *((_OWORD *)a2 + 29) = *(_OWORD *)(v9 + 1756);
    *((_OWORD *)a2 + 30) = *(_OWORD *)(v9 + 1772);
    *((_OWORD *)a2 + 31) = *(_OWORD *)(v9 + 1788);
    *((_OWORD *)a2 + 32) = *(_OWORD *)(v9 + 1804);
    *((_DWORD *)a2 + 132) = *(_DWORD *)(v9 + 1820);
    *((_QWORD *)a2 + 68) = *((_QWORD *)a1 + 3);
    *((_DWORD *)a2 + 138) = *((_DWORD *)a1 + 22);
  }
  else
  {
    v4 = a2;
    v5 = (__int128 *)((char *)a1 + 88);
    v6 = 3LL;
    do
    {
      v4 = (struct _RM_ACTIVITY_HOST_TRACING_ID *)((char *)v4 + 128);
      v7 = *v5;
      v5 += 8;
      *((_OWORD *)v4 - 8) = v7;
      *((_OWORD *)v4 - 7) = *(v5 - 7);
      *((_OWORD *)v4 - 6) = *(v5 - 6);
      *((_OWORD *)v4 - 5) = *(v5 - 5);
      *((_OWORD *)v4 - 4) = *(v5 - 4);
      *((_OWORD *)v4 - 3) = *(v5 - 3);
      *((_OWORD *)v4 - 2) = *(v5 - 2);
      *((_OWORD *)v4 - 1) = *(v5 - 1);
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v4 = *v5;
    *((_OWORD *)v4 + 1) = v5[1];
    *((_OWORD *)v4 + 2) = v5[2];
    *((_OWORD *)v4 + 3) = v5[3];
    *((_OWORD *)v4 + 4) = v5[4];
    *((_OWORD *)a2 + 29) = *(_OWORD *)((char *)a1 + 552);
    *((_OWORD *)a2 + 30) = *(_OWORD *)((char *)a1 + 568);
    *((_OWORD *)a2 + 31) = *(_OWORD *)((char *)a1 + 584);
    *((_OWORD *)a2 + 32) = *(_OWORD *)((char *)a1 + 600);
    *((_DWORD *)a2 + 132) = *((_DWORD *)a1 + 154);
    *((_DWORD *)a2 + 133) = *((_DWORD *)a1 + 155);
    *((_DWORD *)a2 + 134) = *((_DWORD *)a1 + 156);
    *((_QWORD *)a2 + 68) = *((_QWORD *)a1 + 79);
    *((_DWORD *)a2 + 138) = 0;
  }
}
