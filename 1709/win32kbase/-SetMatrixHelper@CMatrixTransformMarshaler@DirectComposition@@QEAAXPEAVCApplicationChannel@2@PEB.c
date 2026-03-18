/*
 * XREFs of ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C007E7BC
 * Callers:
 *     ?SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C007E780 (-SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002FADC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CMatrixTransformMarshaler::SetMatrixHelper(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        bool *a4)
{
  bool v5; // r11
  __int64 v6; // r10

  v5 = *a4;
  v6 = *((_QWORD *)this + 7) - *(_QWORD *)a3;
  if ( !v6 )
  {
    v6 = *((_QWORD *)this + 8) - *((_QWORD *)a3 + 1);
    if ( !v6 )
      v6 = *((_QWORD *)this + 9) - *((_QWORD *)a3 + 2);
  }
  if ( v6 )
  {
    v5 = 1;
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)a3;
    *((_QWORD *)this + 9) = *((_QWORD *)a3 + 2);
  }
  if ( *((_QWORD *)this + 4) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v5 = 1;
  }
  *a4 = v5;
}
