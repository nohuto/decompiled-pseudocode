/*
 * XREFs of ??_ECRenderTargetGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008F290
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CRenderTargetGroupMarshaler *__fastcall DirectComposition::CRenderTargetGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CRenderTargetGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRenderTargetGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
