/*
 * XREFs of ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801F1EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x180218B64 (-Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1802190B0 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 *     ??$emplace_back@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCComputeScribble@@@Z @ 0x18021BE40 (--$emplace_back@AEAPEAVCComputeScribble@@@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returnco.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::EnqueueComputeScribbleForCurrentBackbuffer(
        CHwFullScreenRenderTarget *this,
        struct CComputeScribble *a2)
{
  CComputeScribbleRenderer **v2; // r14
  __int64 v4; // rcx
  unsigned int v6; // ebx
  CComputeScribbleRenderer *v7; // rdi
  CComputeScribbleRenderer *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct CComputeScribbleRenderer *v12; // [rsp+28h] [rbp-41h] BYREF
  char v13; // [rsp+30h] [rbp-39h]
  struct CComputeScribble *v14; // [rsp+38h] [rbp-31h] BYREF
  int *v15; // [rsp+40h] [rbp-29h] BYREF
  int v16; // [rsp+48h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (CComputeScribbleRenderer **)((char *)this + 352);
  v4 = *((_QWORD *)this + 44);
  if ( !v4 )
  {
    v12 = 0LL;
    v13 = 1;
    v6 = CComputeScribbleRenderer::Create((CHwFullScreenRenderTarget *)((char *)this - 216), &v12);
    if ( v13 )
    {
      v7 = *v2;
      *v2 = v12;
      if ( v7 )
      {
        CComputeScribbleRenderer::~CComputeScribbleRenderer(v7);
        operator delete(v7);
      }
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)v6);
      return v6;
    }
    v9 = *v2;
    v16 = 0;
    v15 = &v16;
    v10 = CComputeScribbleRenderer::PreRender(v9, (struct CRegion *)&v15);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x233,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)v10);
      FastRegion::CRegion::FreeMemory((void **)&v15);
      return v6;
    }
    FastRegion::CRegion::FreeMemory((void **)&v15);
    v4 = *((_QWORD *)this + 44);
  }
  v11 = *(_QWORD *)(v4 + 24);
  if ( v11 )
  {
    v14 = a2;
    std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::emplace_back<CComputeScribble * &>(
      v11 + 104,
      &v14);
  }
  return 0LL;
}
