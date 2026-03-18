/*
 * XREFs of ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x1801B7DF0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$XamlElasticInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801B8DD4 (-Create@-$XamlElasticInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Create@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801B8E98 (-Create@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$XamlElasticInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@HMPEAPEAVInterpolation@23@@Z @ 0x1801B8F5C (-Create@-$XamlElasticInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlElastic(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // r8
  unsigned int v8; // edi
  _DWORD *v9; // rbx
  int v12; // eax
  __int64 v13; // rdx
  void *lpMem[3]; // [rsp+20h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v7 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)lpMem, 0LL);
        v8 = -2147024809;
        goto LABEL_5;
      }
      v12 = Components::Animations::XamlElasticInterpolation<Components::Animations::HslCoordinateSpace>::Create(
              a4,
              a5,
              v7,
              lpMem);
    }
    else
    {
      v12 = Components::Animations::XamlElasticInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
              a4,
              a5,
              v7,
              lpMem);
    }
  }
  else
  {
    v12 = Components::Animations::XamlElasticInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
            a4,
            a5,
            a3,
            lpMem);
  }
  v8 = v12;
  if ( v12 >= 0 )
  {
    v13 = 3 * v5;
    v9 = lpMem[0];
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      (_DWORD **)(**(_QWORD **)(a1 + 8) + 8 * v13 + 16),
      (_DWORD *)lpMem[0]);
    v8 = 0;
    goto LABEL_6;
  }
LABEL_5:
  v9 = lpMem[0];
LABEL_6:
  if ( v9 )
  {
    if ( v9[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v9);
  }
  return v8;
}
