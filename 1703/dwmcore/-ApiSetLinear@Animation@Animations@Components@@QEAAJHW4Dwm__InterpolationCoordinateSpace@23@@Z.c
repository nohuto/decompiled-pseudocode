/*
 * XREFs of ?ApiSetLinear@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@@Z @ 0x18002C398
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x18002A41C (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetLinear(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  int v5; // edi
  _DWORD *v6; // rbx
  int v9; // r8d
  _DWORD *v10; // rax
  void **v11; // rax
  _DWORD *v12; // rax
  void *lpMem; // [rsp+48h] [rbp+20h] BYREF

  lpMem = 0LL;
  v4 = a2;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)&lpMem, 0LL);
        v5 = -2147024809;
        goto LABEL_18;
      }
      v10 = Components::Animations::Interpolation::operator new(0x10uLL);
      v6 = v10;
      if ( v10 )
      {
        *((_QWORD *)v10 + 1) = 0LL;
        v11 = &Components::Animations::LinearInterpolation<Components::Animations::HslCoordinateSpace>::`vftable';
LABEL_13:
        v6[2] = 1;
        *(_QWORD *)v6 = v11;
        goto LABEL_14;
      }
    }
    else
    {
      v12 = Components::Animations::Interpolation::operator new(0x10uLL);
      v6 = v12;
      if ( v12 )
      {
        *((_QWORD *)v12 + 1) = 0LL;
        v11 = &Components::Animations::LinearInterpolation<Components::Animations::SphericalCoordinateSpace>::`vftable';
        goto LABEL_13;
      }
    }
    v6 = 0LL;
LABEL_14:
    if ( !v6 )
      return (unsigned int)-2147024882;
    goto LABEL_4;
  }
  v5 = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(&lpMem);
  if ( v5 < 0 )
  {
LABEL_18:
    v6 = lpMem;
    goto LABEL_5;
  }
  v6 = lpMem;
LABEL_4:
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    (_DWORD **)(**(_QWORD **)(a1 + 8) + 24 * v4 + 16),
    v6);
  v5 = 0;
LABEL_5:
  if ( v6 )
  {
    if ( v6[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v6);
  }
  return (unsigned int)v5;
}
