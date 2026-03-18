/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1802190B0
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x18007C100 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801F1EE0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x18013DBEC (-GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqqqq @ 0x180219288 (McTemplateU0xqqqq.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18021C06C (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this, struct CRegion *a2)
{
  __int64 v2; // rax
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ebp
  __int64 v8; // r12
  unsigned int v9; // edx
  CComputeScribbleRenderer::CFramebuffer *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  int LastPresentCount; // edi
  __int64 v14; // rdx
  struct CCrossThreadComposition *v16; // rax
  __int64 v17; // rcx
  char v18; // al
  unsigned int v19; // [rsp+40h] [rbp-58h] BYREF
  char v20[16]; // [rsp+48h] [rbp-50h] BYREF
  int v21; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = *(_QWORD *)this;
  ++*((_QWORD *)this + 6);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 248) + 72LL))(*(_QWORD *)(v2 + 248));
  v6 = *((_DWORD *)this + 4);
  v7 = v5;
  v8 = (v6 + v5 - 1) % v6;
  v9 = (v6 + v5 - 2) % v6;
  v10 = *(CComputeScribbleRenderer::CFramebuffer **)(*((_QWORD *)this + 1) + 8LL * v5);
  v11 = *(_QWORD *)this;
  v19 = 0;
  v12 = v9;
  LastPresentCount = CSwapChainBase::GetLastPresentCount(*(CSwapChainBase **)(v11 + 248), &v19);
  if ( LastPresentCount < 0 )
  {
    v14 = 81LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)LastPresentCount);
    return (unsigned int)LastPresentCount;
  }
  memset_0(v20, 0, 0x20uLL);
  LastPresentCount = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(*(_QWORD *)this + 248LL) + 312LL))(
                       *(_QWORD *)(*(_QWORD *)this + 248LL),
                       v20);
  if ( LastPresentCount < 0 )
  {
    v14 = 87LL;
    goto LABEL_3;
  }
  LastPresentCount = CComputeScribbleRenderer::CFramebuffer::AcquireForRender(v10, *((_QWORD *)this + 6), a2);
  if ( LastPresentCount < 0 )
  {
    v14 = 92LL;
    goto LABEL_3;
  }
  v16 = g_pComposition;
  *((_QWORD *)this + 3) = v10;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 69) + 144LL))(*((_QWORD *)v16 + 69)) )
    v10 = *(CComputeScribbleRenderer::CFramebuffer **)(*((_QWORD *)this + 1) + 8 * v8);
  *((_QWORD *)this + 5) = v10;
  if ( v19 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 144LL))(*((_QWORD *)g_pComposition
                                                                                           + 69));
    v17 = *((_QWORD *)this + 1);
    if ( v18 )
    {
      v17 = *(_QWORD *)(v17 + 8 * v12);
      *((_QWORD *)this + 4) = v17;
    }
    else
    {
      *((_QWORD *)this + 4) = *(_QWORD *)(v17 + 8 * v8);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqqq(
      v17,
      (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
      *((_QWORD *)this + 6),
      v7,
      v19,
      v20[0],
      v21);
  return 0LL;
}
