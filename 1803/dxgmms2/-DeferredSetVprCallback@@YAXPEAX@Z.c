/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C00B0550
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022C8C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C002618C (McTemplateK0qqqxxp.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00B1DE0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

void __fastcall DeferredSetVprCallback(char *a1)
{
  bool v2; // si
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD v14[12]; // [rsp+50h] [rbp-68h] BYREF

  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
    *((VIDMM_GLOBAL **)a1 + 5),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 16LL) + 380LL));
  v2 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 6) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56));
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp(
      *((_QWORD *)a1 + 11),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL),
      v3,
      *((_DWORD *)a1 + 14),
      *((_DWORD *)a1 + 15),
      *((_DWORD *)a1 + 16),
      *((_QWORD *)a1 + 11),
      *((_QWORD *)a1 + 12),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 2464LL),
              (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56)) < 0
    && g_IsInternalRelease )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 9LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( v2 )
  {
    memset(v14, 0, 0x58uLL);
    v8 = *((_QWORD *)a1 + 6);
    LODWORD(v14[0]) = 128;
    LODWORD(v14[6]) = 1;
    v14[5] = *(_QWORD *)(v8 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 5), (struct _VIDMM_SYSTEM_COMMAND *)v14, 1);
  }
  v9 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( v9[3] )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = v10 + 40560;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v10 + 40560));
    v12 = v10 + 40544;
    v13 = *(_QWORD **)(v12 + 8);
    if ( *v13 != v12 )
      __fastfail(3u);
    *v9 = v12;
    v9[1] = v13;
    *v13 = v9;
    *(_QWORD *)(v12 + 8) = v9;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
