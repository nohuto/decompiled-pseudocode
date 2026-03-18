/*
 * XREFs of ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180037A00
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001AD08 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetProperty(
        CManipulationTransform *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int128 v9; // xmm1
  int v11; // eax

  v3 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              if ( *((_BYTE *)this + 264) )
              {
                CManipulationTransform::CalculateMatrixFromDelta(
                  (CManipulationTransform *)((char *)this + 152),
                  (CManipulationTransform *)((char *)this + 176),
                  (CManipulationTransform *)((char *)this + 188),
                  (CManipulationTransform *)((char *)this + 200));
                *((_BYTE *)this + 264) = 0;
              }
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + 200);
              *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 216);
              *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 232);
              v9 = *(_OWORD *)((char *)this + 248);
              *((_BYTE *)a3 + 76) = 1;
              *((_OWORD *)a3 + 3) = v9;
            }
            else
            {
              return (unsigned int)-2147024809;
            }
            return v3;
          }
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + 188);
          v11 = *((_DWORD *)this + 49);
        }
        else
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *((_QWORD *)this + 22);
          v11 = *((_DWORD *)this + 46);
        }
      }
      else
      {
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 164);
        v11 = *((_DWORD *)this + 43);
      }
      *((_DWORD *)a3 + 2) = v11;
    }
    else
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 19);
      *((_DWORD *)a3 + 2) = *((_DWORD *)this + 40);
    }
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  return 2147942487LL;
}
