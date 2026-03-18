/*
 * XREFs of ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C00CEDFC
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0095E10 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DXGTERMINATIONTRACKER *__fastcall ADAPTER_RENDER::PopDeferredTracker(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = (char *)this + 912;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v3 = (_QWORD *)*((_QWORD *)this + 113);
  if ( v3 )
    *((_QWORD *)this + 113) = *v3;
  else
    *((_BYTE *)this + 960) = 0;
  *((_QWORD *)v2 + 1) = 0LL;
  v4 = v3 - 7;
  if ( !v3 )
    v4 = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGTERMINATIONTRACKER *)v4;
}
