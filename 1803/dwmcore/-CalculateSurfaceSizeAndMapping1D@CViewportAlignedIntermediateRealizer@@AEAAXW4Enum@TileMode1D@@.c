/*
 * XREFs of ?CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@MMMMPEAHPEAIPEAM33@Z @ 0x1801C400C
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x1801C418C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800435C8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1801C44EC (-FloorSat@CFloatFPU@@SAHM@Z.c)
 */

__int64 __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceSizeAndMapping1D(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        float a5,
        float a6,
        _DWORD *a7,
        int *a8,
        float *a9,
        float *a10,
        _DWORD *a11)
{
  float v11; // xmm6_4
  int v12; // eax
  int v13; // edi
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm9_4
  int v17; // ebx
  __int64 result; // rax

  v11 = fmaxf(a4 - a3, 0.0);
  v12 = CFloatFPU::CeilingSat(v11);
  v13 = 1;
  if ( v12 > 1 )
    v13 = v12;
  *a8 = v13;
  *a9 = (float)v13 / v11;
  *a11 = 0;
  LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)v13 / v11) * a3) ^ _xmm;
  v15 = (float)((float)((float)v13 / v11) * a5) + v14;
  *a10 = v14;
  v16 = (float)((float)((float)v13 / v11) * a6) + v14;
  v17 = CFloatFPU::FloorSat(v15 - 0.5);
  result = CFloatFPU::FloorSat(v16 + 0.5);
  if ( v17 < 0x7FFFFFFF - v13
    && v17 > v13 - 0x7FFFFFFF
    && (int)result < 0x7FFFFFFF - v13
    && (int)result > v13 - 0x7FFFFFFF )
  {
    if ( v15 < 0.0 || v17 < 0 )
      v17 = 0;
    if ( (float)v13 <= v16 || (int)result >= v13 )
      LODWORD(result) = v13 - 1;
    if ( v17 >= v13 || (int)result < 0 )
    {
      result = (__int64)a7;
      *a7 = 1;
    }
    else
    {
      result = (unsigned int)(result - v17 + 1);
      *a8 = result;
      *a10 = v14 - (float)v17;
    }
  }
  return result;
}
