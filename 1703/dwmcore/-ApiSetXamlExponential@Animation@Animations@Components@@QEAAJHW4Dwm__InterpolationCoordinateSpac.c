/*
 * XREFs of ?ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180021054
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Create@?$XamlExponentialInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180021124 (-Create@-$XamlExponentialInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animati.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$XamlExponentialInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B9020 (-Create@-$XamlExponentialInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Co.c)
 *     ?Create@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B90D0 (-Create@-$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animati.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlExponential(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  int v12; // r8d
  void *lpMem[3]; // [rsp+20h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v5 = (int)a2;
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(lpMem, 0LL);
        v7 = -2147024809;
        goto LABEL_9;
      }
      v6 = Components::Animations::XamlExponentialInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a4,
             a2,
             lpMem);
    }
    else
    {
      v6 = Components::Animations::XamlExponentialInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a4,
             a2,
             lpMem);
    }
  }
  else
  {
    v6 = Components::Animations::XamlExponentialInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a4,
           a2,
           lpMem);
  }
  v7 = v6;
  if ( v6 < 0 )
  {
LABEL_9:
    v9 = lpMem[0];
    goto LABEL_5;
  }
  v8 = 3 * v5;
  v9 = lpMem[0];
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    **(_QWORD **)(a1 + 8) + 8 * v8 + 16,
    lpMem[0]);
  v7 = 0;
LABEL_5:
  if ( v9 )
  {
    if ( v9[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v9);
  }
  return v7;
}
