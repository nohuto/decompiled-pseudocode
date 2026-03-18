/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180183630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18016EE48 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  _DWORD *v7; // rcx
  _DWORD *v10; // rcx
  float (__fastcall **v11)(char *, struct CExpressionValueStack *, __int64); // r11

  v5 = *((_QWORD *)this + 29);
  v7 = 0LL;
  if ( v5 )
    v7 = *(_DWORD **)(v5 + 8);
  CInteractionTracker::ValueFromBoundary(v7, 2LL, 2);
  CInteractionTracker::ValueFromBoundary(v10, 1LL, 2);
  *a5 = (*v11)((char *)this + 336, a2, a3);
  return 0LL;
}
