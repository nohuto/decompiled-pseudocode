/*
 * XREFs of ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BE5A4
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180045DA4 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Create(struct CComposition *a1, struct CSwRenderTargetGetBounds **a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+48h] [rbp+8h]

  v4 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 8) = 1;
  *((_DWORD *)v4 + 12) = 0;
  *(_QWORD *)v4 = &CSwRenderTargetGetBounds::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v4 + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
  *((_QWORD *)v4 + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
  *((_QWORD *)v4 + 5) = a1;
  v8 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)(v4 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
  if ( (*((_DWORD *)v5 + 8))++ == -1 )
    *((_DWORD *)v5 + 8) = 1;
  *((_QWORD *)&v8 + 1) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
  *(_QWORD *)&v8 = 0LL;
  *(_OWORD *)(v5 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = (struct CSwRenderTargetGetBounds *)v5;
  ReleaseInterface<CSwRenderTargetGetBounds>((CMILCOMBase **)&v8);
  return 0LL;
}
