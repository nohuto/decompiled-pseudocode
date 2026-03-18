/*
 * XREFs of ?Create@?$StepInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJHHH_N0PEAPEAVInterpolation@23@@Z @ 0x180029570
 * Callers:
 *     ?ApiSetStep@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@HHH_N1@Z @ 0x18002C468 (-ApiSetStep@Animation@Animations@Components@@QEAAJHW4Dwm__InterpolationCoordinateSpace@23@HHH_N1.c)
 * Callees:
 *     ??2Interpolation@Animations@Components@@SAPEAX_K@Z @ 0x18002A820 (--2Interpolation@Animations@Components@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        float **a6)
{
  int v6; // ebp
  unsigned __int8 v7; // r14
  unsigned int v8; // ebx
  unsigned __int8 v9; // si
  int v10; // r15d
  int v11; // r12d
  float *v12; // rax
  float *v13; // rdi

  v6 = 1;
  v7 = a4;
  if ( a1 >= 1 )
    v6 = a1;
  v8 = 0;
  if ( a2 < 0 )
  {
    a2 = 0;
  }
  else if ( a2 > v6 )
  {
    a2 = v6;
  }
  if ( a3 < a2 )
  {
    a3 = a2;
  }
  else if ( a3 > v6 )
  {
    a3 = v6;
  }
  if ( a3 - a2 == 1 )
  {
    if ( !a4 )
    {
LABEL_11:
      v9 = a5;
      goto LABEL_12;
    }
    v9 = a5;
    if ( a5 )
      goto LABEL_28;
  }
  else
  {
    if ( a3 != a2 )
      goto LABEL_11;
    if ( a4 || (v9 = a5) != 0 )
    {
      v7 = 0;
LABEL_28:
      v9 = 0;
    }
  }
LABEL_12:
  v10 = a2 + 1;
  v11 = a3 - 1;
  if ( !v7 )
    v10 = a2;
  if ( !v9 )
    v11 = a3;
  v12 = (float *)Components::Animations::Interpolation::operator new(0x28uLL);
  v13 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x28uLL);
    *((_DWORD *)v13 + 2) = 1;
    *(_QWORD *)v13 = &Components::Animations::StepInterpolation<Components::Animations::CartesianCoordinateSpace>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    *((_DWORD *)v13 + 7) = v7;
    *((_DWORD *)v13 + 8) = v9;
    v13[9] = 1.0 / (float)(v11 - v10 + 1);
    *((_DWORD *)v13 + 4) = v6;
    *((_DWORD *)v13 + 5) = v10;
    *((_DWORD *)v13 + 6) = v11;
    *a6 = v13;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
