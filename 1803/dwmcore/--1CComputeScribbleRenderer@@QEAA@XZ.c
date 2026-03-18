/*
 * XREFs of ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800D7CB0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800D7D7C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801F1EE0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801F2360 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x180218B64 (-Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18021D1C4 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer *this)
{
  CComputeScribbleRenderer::CScheduler *v1; // rsi
  CComputeScribbleRenderer::CScheduler *v2; // rbx
  char *v4; // rcx
  char *v5; // rbx

  v1 = (CComputeScribbleRenderer::CScheduler *)*((_QWORD *)this + 7);
  v2 = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( v1 )
  {
    CComputeScribbleRenderer::CScheduler::~CScheduler(v1);
    operator delete(v1);
    v2 = (CComputeScribbleRenderer::CScheduler *)*((_QWORD *)this + 7);
  }
  if ( v2 )
  {
    CComputeScribbleRenderer::CScheduler::~CScheduler(v2);
    operator delete(v2);
  }
  v4 = (char *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      8LL,
      *((_QWORD *)v4 - 1),
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))std::unique_ptr<CComputeScribbleRenderer::CFramebuffer>::~unique_ptr<CComputeScribbleRenderer::CFramebuffer>);
    operator delete(v5);
  }
}
