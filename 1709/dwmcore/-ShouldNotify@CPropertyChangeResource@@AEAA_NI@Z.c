/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234
 * Callers:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x180096324 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800964CC (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180096504 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x1801754E0 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPropertyChangeResource::ShouldNotify(CPropertyChangeResource *this, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax
  int v5; // eax

  v2 = *((_QWORD *)this + 6);
  v3 = 0;
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 68);
  else
    v4 = 0;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 14) )
    {
      v5 = *((_DWORD *)this + 16);
      if ( _bittest(&v5, a2) )
        return 1;
    }
  }
  return v3;
}
