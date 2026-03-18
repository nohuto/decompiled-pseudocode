/*
 * XREFs of ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1802134E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::AddDirtyRegion(
        CColorKeyBitmapRealization *this,
        const struct CRegion *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 24LL) + 120LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x42u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5Eu);
  }
  (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this - 16) + 32LL))((char *)this - 128, a2);
  return v5;
}
