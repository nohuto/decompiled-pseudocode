/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmap@@UEAAJAEBVCRegion@@@Z @ 0x1801D12D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::AddDirtyRegion(CColorKeyBitmap *this, const struct CRegion *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2));
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x5Au);
  (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL))((char *)this - 128, a2);
  return v5;
}
