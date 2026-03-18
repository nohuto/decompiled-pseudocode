/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C00A0930
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001E970 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C002175C (Template_qqqxx.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C005E1C0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A1554 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

void __fastcall DeferredSetVprCallback(char *a1)
{
  __int64 v2; // rdx
  bool v3; // si
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD v15[12]; // [rsp+40h] [rbp-68h] BYREF

  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
    *((VIDMM_GLOBAL **)a1 + 5),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 16LL) + 404LL));
  v3 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 6) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qqqxx(
      *((unsigned int *)a1 + 16),
      v2,
      v4,
      *((_DWORD *)a1 + 14),
      *((_DWORD *)a1 + 15),
      *((_DWORD *)a1 + 16),
      *((_QWORD *)a1 + 11),
      *((_QWORD *)a1 + 12));
  if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 2288LL),
              (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56)) < 0
    && g_IsInternalRelease )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 9LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( v3 )
  {
    memset(v15, 0, 0x58uLL);
    v9 = *((_QWORD *)a1 + 6);
    LODWORD(v15[0]) = 128;
    LODWORD(v15[6]) = 1;
    v15[5] = *(_QWORD *)(v9 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 5), (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
  }
  v10 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( v10[3] )
  {
    v11 = *((_QWORD *)a1 + 5);
    v12 = v11 + 39984;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 39984));
    v13 = v11 + 39968;
    v14 = *(_QWORD **)(v13 + 8);
    if ( *v14 != v13 )
      __fastfail(3u);
    *v10 = v13;
    v10[1] = v14;
    *v14 = v10;
    *(_QWORD *)(v13 + 8) = v10;
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
