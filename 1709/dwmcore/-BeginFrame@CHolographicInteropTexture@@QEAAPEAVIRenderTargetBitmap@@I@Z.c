/*
 * XREFs of ?BeginFrame@CHolographicInteropTexture@@QEAAPEAVIRenderTargetBitmap@@I@Z @ 0x1801BE3DC
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     <none>
 */

struct IRenderTargetBitmap *__fastcall CHolographicInteropTexture::BeginFrame(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  _DWORD *v3; // rsi
  _DWORD **Ptr; // rcx

  v1 = this + 36;
  AcquireSRWLockExclusive(this + 36);
  v3 = 0LL;
  if ( LODWORD(this[16].Ptr) )
  {
    Ptr = (_DWORD **)this[13].Ptr;
    v3 = *Ptr;
    *Ptr[2] = 0;
  }
  ReleaseSRWLockExclusive(v1);
  return (struct IRenderTargetBitmap *)v3;
}
