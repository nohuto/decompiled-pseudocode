/*
 * XREFs of ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18002C5CC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Create@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x18002A6F0 (-Create@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1800C8ACC (-Create@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Create@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJMMMMPEAPEAVInterpolation@23@@Z @ 0x1801B8590 (-Create@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetCubicBezier(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7)
{
  float v7; // xmm3_4
  __int64 v8; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  _DWORD *v13; // rbx
  int v16; // r8d
  void *lpMem[3]; // [rsp+30h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v8 = a2;
  if ( a3 )
  {
    v16 = a3 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)lpMem, 0LL);
        v11 = -2147024809;
        goto LABEL_13;
      }
      v10 = Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::Create(
              a1,
              a2,
              1,
              a4,
              (__int64)lpMem);
    }
    else
    {
      v10 = Components::Animations::CubicBezierInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
              a1,
              a2,
              0,
              a4,
              (__int64)lpMem);
    }
  }
  else
  {
    v10 = Components::Animations::CubicBezierInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
            v7,
            a5,
            a6,
            a7,
            (float **)lpMem);
  }
  v11 = v10;
  if ( v10 < 0 )
  {
LABEL_13:
    v13 = lpMem[0];
    goto LABEL_5;
  }
  v12 = 3 * v8;
  v13 = lpMem[0];
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    (_DWORD **)(**(_QWORD **)(a1 + 8) + 8 * v12 + 16),
    (_DWORD *)lpMem[0]);
  v11 = 0;
LABEL_5:
  if ( v13 )
  {
    if ( v13[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v13);
  }
  return v11;
}
