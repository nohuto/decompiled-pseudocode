/*
 * XREFs of ?ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x18002C69C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Create@?$XamlPowerInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x180028AA0 (-Create@-$XamlPowerInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Co.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$XamlPowerInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B9180 (-Create@-$XamlPowerInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Componen.c)
 *     ?Create@?$XamlPowerInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B9230 (-Create@-$XamlPowerInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Co.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlPower(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        float a5)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  int v13; // r8d
  void *lpMem[3]; // [rsp+20h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v6 = (int)a2;
  if ( a3 )
  {
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)lpMem, 0LL);
        v8 = -2147024809;
        goto LABEL_9;
      }
      v7 = Components::Animations::XamlPowerInterpolation<Components::Animations::HslCoordinateSpace>::Create(
             a4,
             a2,
             lpMem);
    }
    else
    {
      v7 = Components::Animations::XamlPowerInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
             a4,
             a2,
             lpMem);
    }
  }
  else
  {
    v7 = Components::Animations::XamlPowerInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
           a4,
           a5,
           (float **)lpMem);
  }
  v8 = v7;
  if ( v7 < 0 )
  {
LABEL_9:
    v10 = lpMem[0];
    goto LABEL_5;
  }
  v9 = 3 * v6;
  v10 = lpMem[0];
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    (_DWORD **)(**(_QWORD **)(a1 + 8) + 8 * v9 + 16),
    (_DWORD *)lpMem[0]);
  v8 = 0;
LABEL_5:
  if ( v10 )
  {
    if ( v10[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v10);
  }
  return v8;
}
