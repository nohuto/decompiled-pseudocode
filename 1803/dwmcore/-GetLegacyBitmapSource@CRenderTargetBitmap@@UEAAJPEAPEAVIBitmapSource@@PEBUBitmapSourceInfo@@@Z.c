/*
 * XREFs of ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008A470
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008A8BC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetLegacyBitmapSource(
        CRenderTargetBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 18)
    && (!*((_BYTE *)this + 160)
     || !a3
     || (int)CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
               (char *)this - 16,
               *(_QWORD *)a3,
               *((unsigned int *)a3 + 2)) >= 0) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**((_QWORD **)this + 18) + 232LL))(
           *((_QWORD *)this + 18),
           a2);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x10Eu);
  }
  return v3;
}
