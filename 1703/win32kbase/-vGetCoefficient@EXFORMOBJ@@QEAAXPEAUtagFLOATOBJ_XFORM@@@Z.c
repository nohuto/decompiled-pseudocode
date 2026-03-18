/*
 * XREFs of ?vGetCoefficient@EXFORMOBJ@@QEAAXPEAUtagFLOATOBJ_XFORM@@@Z @ 0x1C00E8FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vGetCoefficient(__int128 **this, struct tagFLOATOBJ_XFORM *a2)
{
  __int128 *v3; // rcx
  int v4; // eax
  __int128 v5; // xmm2
  __int128 v6; // xmm4
  __int128 v7; // xmm2
  __int128 v8; // xmm4
  FLOATOBJ v9; // xmm0_4
  FLOATOBJ v10; // xmm1_4
  __int64 i; // rcx
  __int128 v12; // [rsp+0h] [rbp-30h]
  FLOATOBJ v13; // [rsp+8h] [rbp-28h]
  FLOATOBJ v14; // [rsp+Ch] [rbp-24h]

  v3 = *this;
  v4 = *((_DWORD *)v3 + 8);
  if ( (v4 & 8) != 0 )
  {
    v6 = v3[1];
    v5 = *v3;
    v14 = COERCE_FLOAT(HIDWORD(*v3)) * 0.0625;
    v13 = COERCE_FLOAT(*((_QWORD *)v3 + 1)) * 0.0625;
    a2->eM12 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)) * 0.0625;
    a2->eM11 = *(float *)&v5 * 0.0625;
    a2->eM21 = v13;
    a2->eM22 = v14;
    a2->eDx = *(float *)&v6 * 0.0625;
    a2->eDy = *((float *)&v6 + 1) * 0.0625;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    v8 = v3[1];
    v12 = *v3;
    v7 = *v3;
    v9 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v3)) * 16.0;
    v10 = COERCE_FLOAT(*((_QWORD *)v3 + 1)) * 16.0;
    a2->eDy = *((FLOATOBJ *)&v8 + 1);
    a2->eM12 = v9;
    a2->eM11 = *(float *)&v7 * 16.0;
    a2->eM21 = v10;
    a2->eM22 = *((float *)&v12 + 3) * 16.0;
    LODWORD(a2->eDx) = v8;
  }
  else
  {
    for ( i = 0LL; i < 24; i += 4LL )
      *(FLOATOBJ *)((char *)&a2->eM11 + i) = *(FLOATOBJ *)((char *)*this + i);
  }
}
