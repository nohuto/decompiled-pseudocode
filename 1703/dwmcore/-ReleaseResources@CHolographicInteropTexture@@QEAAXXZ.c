/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1801A41CC
 * Callers:
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18013005C (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A3A90 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801A3ABC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801A637C (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 i; // rdi
  void *v4; // rcx
  char *Ptr; // rcx
  char *v6; // rdi

  v1 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  for ( i = 0LL; (unsigned int)i < LODWORD(this[15].Ptr); i = (unsigned int)(i + 1) )
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this[12].Ptr + 12 * i);
    v4 = (void *)*((_QWORD *)this[12].Ptr + 12 * i + 1);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_QWORD *)this[12].Ptr + 12 * i + 1) = 0LL;
    }
  }
  LODWORD(this[15].Ptr) = 0;
  Ptr = (char *)this[12].Ptr;
  if ( Ptr )
  {
    v6 = Ptr - 8;
    `vector destructor iterator'(
      Ptr,
      96LL,
      *((_QWORD *)Ptr - 1),
      (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
    WPF::ProcessHeapImpl::Free(v6);
  }
  this[12].Ptr = 0LL;
  BYTE1(this[14].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
