/*
 * XREFs of ?Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStrokeRenderState@@PEAVCGenericInkTipPointSource@@IPEAUIDCompositionDirectInkFactoryPartner@@PEAPEAV1@@Z @ 0x18017C91C
 * Callers:
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180171848 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CSuperWetInkScribble@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@PEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18017CA90 (-Initialize@CSuperWetInkScribble@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@PEAUIDComposi.c)
 */

__int64 __fastcall CSuperWetInkScribble::Create(
        struct IDCompositionDirectInkWetStrokePartner *a1,
        const struct DCompWetInkStrokeRenderState *a2,
        struct CGenericInkTipPointSource *a3,
        int a4,
        struct IDCompositionDirectInkFactoryPartner *a5,
        struct CSuperWetInkScribble **a6)
{
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int128 v12; // xmm0
  CMILRefCountBase *v13; // rbx
  int v14; // eax
  unsigned int v15; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (volatile signed __int32 *)operator new(0x58uLL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v10 = &CSuperWetInkScribble::`vftable';
    *((_DWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    *((_OWORD *)v10 + 2) = *(_OWORD *)a2;
    *((_OWORD *)v10 + 3) = *((_OWORD *)a2 + 1);
    v12 = *((_OWORD *)a2 + 2);
    *((_DWORD *)v10 + 20) = a4;
    *((_OWORD *)v10 + 4) = v12;
  }
  else
  {
    v11 = 0LL;
  }
  v13 = (CMILRefCountBase *)v11;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v13 = (CMILRefCountBase *)v11;
  }
  v14 = CSuperWetInkScribble::Initialize((CSuperWetInkScribble *)v11, a1, a5);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v13 = 0LL;
    v15 = 0;
    *a6 = (struct CSuperWetInkScribble *)v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v14);
  }
  if ( v13 )
    CMILRefCountBase::Release(v13);
  return v15;
}
