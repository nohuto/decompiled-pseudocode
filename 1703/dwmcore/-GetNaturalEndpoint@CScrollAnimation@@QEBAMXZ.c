/*
 * XREFs of ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180181A20
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016C49C (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016CF50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetNaturalEndpoint(CScrollAnimation *this)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 224LL))(this);
  if ( *(_DWORD *)(v2 + 16) == 2 )
    return *(float *)(v2 + 60);
  v4 = *((_QWORD *)this + 29);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  return CInteractionTracker::GetCurrentValue(v5, *((_DWORD *)this + 57));
}
