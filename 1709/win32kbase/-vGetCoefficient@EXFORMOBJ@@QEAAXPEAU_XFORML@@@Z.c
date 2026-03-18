/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAU_XFORML@@@Z @ 0x1C0054550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(FLOATL **this, struct _XFORML *a2)
{
  FLOATL *v2; // rax
  int v4; // ecx
  __int128 v5; // xmm4
  FLOATL v6; // xmm1_4
  __int128 v7; // xmm2
  __m128i v8; // xmm4
  float v9; // xmm0_4
  FLOATL v10; // [rsp+4h] [rbp-2Ch]
  FLOATL v11; // [rsp+4h] [rbp-2Ch]
  FLOATL v12; // [rsp+Ch] [rbp-24h]

  v2 = *this;
  v4 = *((_DWORD *)*this + 8);
  if ( (v4 & 8) != 0 )
  {
    v5 = *((_OWORD *)v2 + 1);
    v10 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * 0.0625;
    v12 = COERCE_FLOAT(HIDWORD(*(_OWORD *)v2)) * 0.0625;
    v6 = COERCE_FLOAT(*((_QWORD *)v2 + 1)) * 0.0625;
    a2->eM11 = COERCE_FLOAT(*(_OWORD *)v2) * 0.0625;
    a2->eM12 = v10;
    a2->eM21 = v6;
    a2->eM22 = v12;
    a2->eDx = *(float *)&v5 * 0.0625;
    *(float *)&v2 = *((float *)&v5 + 1) * 0.0625;
LABEL_3:
    LODWORD(a2->eDy) = (_DWORD)v2;
    return;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v7 = *(_OWORD *)v2;
    v8 = *(__m128i *)(v2 + 4);
    v11 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v2)) * 16.0;
    LODWORD(v9) = HIDWORD(*(_OWORD *)v2);
    a2->eM11 = COERCE_FLOAT(*(_OWORD *)v2) * 16.0;
    a2->eM12 = v11;
    a2->eM21 = *((float *)&v7 + 2) * 16.0;
    a2->eM22 = v9 * 16.0;
    v2 = (FLOATL *)HIDWORD(v8.m128i_i64[0]);
    LODWORD(a2->eDx) = _mm_cvtsi128_si32(v8);
    goto LABEL_3;
  }
  a2->eM11 = *v2;
  a2->eM12 = (*this)[1];
  a2->eM21 = (*this)[2];
  a2->eM22 = (*this)[3];
  a2->eDx = (*this)[4];
  a2->eDy = (*this)[5];
}
