/*
 * XREFs of ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698
 * Callers:
 *     ?ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x180021054 (-ApiSetXamlExponential@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpac.c)
 *     ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@@Z @ 0x18002C398 (-ApiSetLinear@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@@Z.c)
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x18002C468 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@HHH_N1.c)
 *     ?ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@MMMM@Z @ 0x18002C5CC (-ApiSetCubicBezier@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23.c)
 *     ?ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x18002C69C (-ApiSetXamlPower@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W.c)
 *     ?ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@M@Z @ 0x1801B7B0C (-ApiSetXamlBack@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4.c)
 *     ?ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x1801B7BDC (-ApiSetXamlBounce@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@.c)
 *     ?ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x1801B7CBC (-ApiSetXamlCircle@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@.c)
 *     ?ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@HM@Z @ 0x1801B7DF0 (-ApiSetXamlElastic@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23.c)
 *     ?ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x1801B7ED0 (-ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

_DWORD *__fastcall Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
        _DWORD **a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx

  if ( a2 )
    ++a2[2];
  v4 = *a1;
  if ( v4 )
  {
    if ( v4[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v4);
  }
  *a1 = a2;
  return a2;
}
