/*
 * XREFs of ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x18002C468
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Create@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x180029570 (-Create@-$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compone.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x18002A698 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Create@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x1801B86B8 (-Create@-$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@S.c)
 *     ?Create@?$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x1801B8800 (-Create@-$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compone.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetStep(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        char a8)
{
  int v8; // r10d
  __int64 v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  _DWORD *v14; // rbx
  int v17; // r8d
  void *lpMem[3]; // [rsp+30h] [rbp-18h] BYREF

  lpMem[0] = 0LL;
  v8 = a4;
  v9 = a2;
  if ( a3 )
  {
    v17 = a3 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
      {
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign((_DWORD **)lpMem, 0LL);
        v12 = -2147024809;
        goto LABEL_9;
      }
      LOBYTE(a4) = a7;
      v11 = Components::Animations::StepInterpolation<Components::Animations::HslCoordinateSpace>::Create(
              v8,
              a5,
              a6,
              a4,
              a8,
              (__int64)lpMem);
    }
    else
    {
      LOBYTE(a4) = a7;
      v11 = Components::Animations::StepInterpolation<Components::Animations::SphericalCoordinateSpace>::Create(
              v8,
              a5,
              a6,
              a4,
              a8,
              (__int64)lpMem);
    }
  }
  else
  {
    v11 = Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
            a4,
            a5,
            a6,
            a7,
            a8,
            (float **)lpMem);
  }
  v12 = v11;
  if ( v11 < 0 )
  {
LABEL_9:
    v14 = lpMem[0];
    goto LABEL_5;
  }
  v13 = 3 * v9;
  v14 = lpMem[0];
  Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
    (_DWORD **)(**(_QWORD **)(a1 + 8) + 8 * v13 + 16),
    (_DWORD *)lpMem[0]);
  v12 = 0;
LABEL_5:
  if ( v14 )
  {
    if ( v14[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v14);
  }
  return v12;
}
