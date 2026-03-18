/*
 * XREFs of ?ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x1801B7B0C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B8948 (-Create@-$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Com.c)
 *     ?Create@?$XamlBackInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B89F8 (-Create@-$XamlBackInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Component.c)
 *     ?Create@?$XamlBackInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJW4Dwm__InterpolationMode@23@MPEAPEAVInterpolation@23@@Z @ 0x1801B8AA8 (-Create@-$XamlBackInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Com.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlBack(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // rbx
  int v6; // r8d
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  int v11; // eax
  __int64 v12; // rdx
  void *lpMem[3]; // [rsp+20h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v5 = (int)a2;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)lpMem, 0LL);
        v7 = -2147024809;
        goto LABEL_5;
      }
      v11 = Components::Animations::XamlBackInterpolation<Components::Animations::HslCoordinateSpace>::Create(
              a4,
              a2,
              lpMem);
    }
    else
    {
      v11 = Components::Animations::XamlBackInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
              a4,
              a2,
              lpMem);
    }
  }
  else
  {
    v11 = Components::Animations::XamlBackInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
            a4,
            a2,
            lpMem);
  }
  v7 = v11;
  if ( v11 >= 0 )
  {
    v12 = 3 * v5;
    v8 = lpMem[0];
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
      (_DWORD **)(**(_QWORD **)(a1 + 8) + 8 * v12 + 16),
      (_DWORD *)lpMem[0]);
    v7 = 0;
    goto LABEL_6;
  }
LABEL_5:
  v8 = lpMem[0];
LABEL_6:
  if ( v8 )
  {
    if ( v8[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v8);
  }
  return v7;
}
