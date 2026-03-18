/*
 * XREFs of ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC14C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00A9BB0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00EEB00 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::ControlVSyncAdapter(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  LARGE_INTEGER PerformanceCounter; // rax

  v2 = *((_QWORD *)this + 33);
  if ( !v2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(v2 + 8) + 2704LL * a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(_BYTE *)(v3 + 403) = 1;
  *(LARGE_INTEGER *)(v3 + 736) = PerformanceCounter;
  KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
  return 0LL;
}
