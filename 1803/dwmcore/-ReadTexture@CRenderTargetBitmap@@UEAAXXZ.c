/*
 * XREFs of ?ReadTexture@CRenderTargetBitmap@@UEAAXXZ @ 0x1801799A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::ReadTexture(CRenderTargetBitmap *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 224LL))(*((_QWORD *)this + 1), 0LL, 0LL);
}
