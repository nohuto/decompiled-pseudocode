/*
 * XREFs of ?ApiSetXamlSine@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@W4Dwm__InterpolationMode@23@@Z @ 0x1801B7ED0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetXamlSine(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rsi
  int v7; // r8d
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  _DWORD *v10; // rax
  void **v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  void *lpMem; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  lpMem = 0LL;
  if ( !a3 )
  {
    v13 = Components::Animations::Interpolation::operator new(0x18uLL);
    v8 = v13;
    if ( v13 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      v11 = &Components::Animations::XamlSineInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
      goto LABEL_11;
    }
    goto LABEL_12;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = Components::Animations::Interpolation::operator new(0x18uLL);
    v8 = v12;
    if ( v12 )
    {
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      v11 = &Components::Animations::XamlSineInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
      goto LABEL_11;
    }
LABEL_12:
    v8 = 0LL;
    goto LABEL_13;
  }
  if ( v7 != 1 )
  {
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)&lpMem, 0LL);
    v8 = lpMem;
    v9 = -2147024809;
    goto LABEL_18;
  }
  v10 = Components::Animations::Interpolation::operator new(0x18uLL);
  v8 = v10;
  if ( !v10 )
    goto LABEL_12;
  *((_QWORD *)v10 + 1) = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  v11 = &Components::Animations::XamlSineInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
LABEL_11:
  v8[2] = 1;
  *(_QWORD *)v8 = v11;
LABEL_13:
  if ( !v8 )
    return (unsigned int)-2147024882;
  if ( a4 > 2 )
    a4 = 0;
  v8[4] = a4;
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    (_DWORD **)(**(_QWORD **)(a1 + 8) + 24 * v4 + 16),
    v8);
  v9 = 0;
LABEL_18:
  if ( v8 )
  {
    if ( v8[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v8);
  }
  return v9;
}
