/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800196B0
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180019550 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800195F0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x1801B6DA0 (-BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B6DF0 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdi
  const struct CMILMatrix *Matrix; // rax

  *((_WORD *)a3 + 32) = 32085;
  *(_OWORD *)a3 = _xmm;
  *((_OWORD *)a3 + 1) = _xmm;
  *((_OWORD *)a3 + 2) = _xmm;
  *((_OWORD *)a3 + 3) = _xmm;
  v6 = *((_DWORD *)this + 8) ^ ((unsigned __int8)*((_DWORD *)this + 8) ^ (unsigned __int8)(*((_DWORD *)this + 8) + 2)) & 6;
  *((_DWORD *)this + 8) = v6;
  if ( (v6 & 6) == 2 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 44) )
    {
      do
      {
        Matrix = CTransform3D::GetMatrix(*(CTransform3D **)(*((_QWORD *)this + 23) + 8 * v7), a2);
        CMILMatrix::Multiply(a3, Matrix);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 44) );
      v6 = *((_DWORD *)this + 8);
    }
  }
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * (v6 >> 1) - 2)) & 6;
}
