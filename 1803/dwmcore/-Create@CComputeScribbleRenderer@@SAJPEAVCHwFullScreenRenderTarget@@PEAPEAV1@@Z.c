/*
 * XREFs of ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x180218B64
 * Callers:
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801F1EE0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x180218C10 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Create(
        struct CHwFullScreenRenderTarget *a1,
        struct CComputeScribbleRenderer **a2)
{
  CComputeScribbleRenderer *v4; // rax
  CComputeScribbleRenderer *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CComputeScribbleRenderer *)operator new(0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = a1;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 4) = 0;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = CComputeScribbleRenderer::Initialize(v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = 0;
    *a2 = v5;
    v5 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v5 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(v5);
    operator delete(v5);
  }
  return v7;
}
