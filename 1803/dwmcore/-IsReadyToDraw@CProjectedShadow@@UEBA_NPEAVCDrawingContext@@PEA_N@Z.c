/*
 * XREFs of ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801B60E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A054C (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A1618 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

char __fastcall CProjectedShadow::IsReadyToDraw(CProjectedShadow *this, struct CDrawingContext *a2, bool *a3)
{
  CProjectedShadowCaster *v4; // rcx
  bool v5; // di
  char v6; // bl
  struct CSpriteVisualContent *EffectiveMaskBrush; // rax
  struct CSpriteVisualContent *v10; // rax
  char result; // al
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = (CProjectedShadowCaster *)*((_QWORD *)this + 9);
  v5 = 1;
  v6 = 1;
  v13 = 0;
  EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(v4);
  if ( EffectiveMaskBrush )
    v6 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, char *))(*(_QWORD *)EffectiveMaskBrush + 272LL))(
           EffectiveMaskBrush,
           a2,
           &v12);
  v10 = CProjectedShadowReceiver::GetEffectiveMaskBrush(*((CProjectedShadowReceiver **)this + 10));
  if ( v10 )
    v6 = v6
      && (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, char *))(*(_QWORD *)v10 + 272LL))(
           v10,
           a2,
           &v13);
  if ( !v12 || !v13 )
    v5 = 0;
  result = v6;
  *a3 = v5;
  return result;
}
