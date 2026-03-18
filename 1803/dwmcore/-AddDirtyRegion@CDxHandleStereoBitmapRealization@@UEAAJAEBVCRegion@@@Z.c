/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180214B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CBitmapRealization::AddDirtyRegion(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x9Cu);
  }
  else if ( *((_QWORD *)this + 33) )
  {
    (*(void (__fastcall **)(char *, const struct FastRegion::Internal::CRgnData **))(*((_QWORD *)this + 36) + 32LL))(
      (char *)this + 288,
      a2);
  }
  return v5;
}
