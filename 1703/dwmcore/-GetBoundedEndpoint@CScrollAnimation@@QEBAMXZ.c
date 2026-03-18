/*
 * XREFs of ?GetBoundedEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801818C8
 * Callers:
 *     ?GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CB30 (-GetBoundedEndpoint@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetBoundedEndpoint(CScrollAnimation *this)
{
  float *v1; // rax

  v1 = (float *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
  return fminf(fmaxf(v1[15], v1[16]), v1[9]);
}
