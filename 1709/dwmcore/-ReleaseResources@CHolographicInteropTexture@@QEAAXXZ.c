/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801BED2C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BE440 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801BE470 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1801BEBB8 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801C0DC0 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // rdi
  void *v4; // rcx
  char *Ptr; // rcx
  char *v6; // rdi

  v1 = this + 36;
  AcquireSRWLockExclusive(this + 36);
  for ( i = 0LL; (unsigned int)i < LODWORD(this[16].Ptr); i = (unsigned int)(i + 1) )
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this[13].Ptr + 12 * i);
    v4 = (void *)*((_QWORD *)this[13].Ptr + 12 * i + 1);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_QWORD *)this[13].Ptr + 12 * i + 1) = 0LL;
    }
  }
  LODWORD(this[16].Ptr) = 0;
  Ptr = (char *)this[13].Ptr;
  if ( Ptr )
  {
    v6 = Ptr - 8;
    `vector destructor iterator'(
      Ptr,
      96LL,
      *((_QWORD *)Ptr - 1),
      (void (__fastcall *)(CDrawListBitmap *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
    WPF::ProcessHeapImpl::Free(v6);
  }
  this[13].Ptr = 0LL;
  BYTE1(this[15].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
