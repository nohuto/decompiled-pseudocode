/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18008C700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  char v2; // bl
  float *v3; // rcx
  bool (__fastcall *v4)(CColorBrush *); // rax
  char IsEmptyDrawing; // al
  __int64 v7; // rcx

  v2 = 0;
  v3 = (float *)*((_QWORD *)this + 30);
  if ( !v3 )
    goto LABEL_9;
  v4 = *(bool (__fastcall **)(CColorBrush *))(*(_QWORD *)v3 + 176LL);
  if ( v4 == CSpriteVisualContent::IsEmptyDrawing )
  {
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing((CSpriteVisualContent *)v3);
  }
  else
  {
    if ( v4 == CColorBrush::IsEmptyDrawing )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3[23]) & _xmm) >= 0.0000011920929 )
        return 1;
      goto LABEL_9;
    }
    IsEmptyDrawing = ((__int64 (*)(void))v4)();
  }
  if ( !IsEmptyDrawing )
    return 1;
LABEL_9:
  v7 = *((_QWORD *)this + 62);
  if ( v7 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) )
    return 1;
  return v2;
}
