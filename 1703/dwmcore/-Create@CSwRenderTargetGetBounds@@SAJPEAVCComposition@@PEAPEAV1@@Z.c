/*
 * XREFs of ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4EA8
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x18001E284 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Create(struct CComposition *a1, struct CSwRenderTargetGetBounds **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+18h]

  v4 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  v5 = v4;
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    JUMPOUT(0x18011F5D4LL);
  }
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 8) = 1;
  *((_DWORD *)v4 + 12) = 0;
  *(_QWORD *)v4 = &CSwRenderTargetGetBounds::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v4 + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
  *((_QWORD *)v4 + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
  *((_QWORD *)v4 + 5) = a1;
  v8 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)(v4 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v4);
  v6 = *((_DWORD *)v5 + 8) + 1;
  if ( *((_DWORD *)v5 + 8) == -1 )
    v6 = 1;
  *((_DWORD *)v5 + 8) = v6;
  *((_QWORD *)&v8 + 1) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
  *(_QWORD *)&v8 = 0LL;
  *(_OWORD *)(v5 + 52) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a2 = (struct CSwRenderTargetGetBounds *)v5;
  ReleaseInterface<CSwRenderTargetGetBounds>((CMILCOMBase **)&v8);
  return 0LL;
}
