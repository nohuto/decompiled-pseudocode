/*
 * XREFs of std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007DC44
 * Callers:
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x18007D33C (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Med3_unchecked__HIDP_BUTTON_CAPS_____ptr64__lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int128 *a1,
        __int128 *a2,
        __int128 *a3)
{
  unsigned __int8 v3; // al
  __int128 v4; // xmm3
  __int128 v5; // xmm4
  __int128 v6; // xmm5
  __int128 v7; // xmm6
  __int64 v8; // xmm2_8
  unsigned __int16 v9; // ax
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  __int64 v14; // xmm6_8

  v3 = *((_BYTE *)a1 + 2);
  if ( *((_BYTE *)a2 + 2) < v3 || *((_BYTE *)a2 + 2) == v3 && *((_WORD *)a2 + 3) < *((_WORD *)a1 + 3) )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    v8 = *((_QWORD *)a2 + 8);
    *a2 = *a1;
    a2[1] = a1[1];
    a2[2] = a1[2];
    a2[3] = a1[3];
    *((_QWORD *)a2 + 8) = *((_QWORD *)a1 + 8);
    *a1 = v4;
    a1[1] = v5;
    a1[2] = v6;
    a1[3] = v7;
    *((_QWORD *)a1 + 8) = v8;
  }
  LOBYTE(v9) = *((_BYTE *)a2 + 2);
  if ( *((_BYTE *)a3 + 2) < (unsigned __int8)v9
    || *((_BYTE *)a3 + 2) == (_BYTE)v9 && (v9 = *((_WORD *)a2 + 3), *((_WORD *)a3 + 3) < v9) )
  {
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v13 = a3[3];
    v14 = *((_QWORD *)a3 + 8);
    *a3 = *a2;
    a3[1] = a2[1];
    a3[2] = a2[2];
    a3[3] = a2[3];
    *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 8);
    *a2 = v10;
    a2[1] = v11;
    a2[2] = v12;
    a2[3] = v13;
    *((_QWORD *)a2 + 8) = v14;
    LOBYTE(v9) = *((_BYTE *)a1 + 2);
    if ( *((_BYTE *)a2 + 2) < (unsigned __int8)v9
      || *((_BYTE *)a2 + 2) == (_BYTE)v9 && (v9 = *((_WORD *)a1 + 3), *((_WORD *)a2 + 3) < v9) )
    {
      *a2 = *a1;
      a2[1] = a1[1];
      a2[2] = a1[2];
      a2[3] = a1[3];
      *((_QWORD *)a2 + 8) = *((_QWORD *)a1 + 8);
      *a1 = v10;
      a1[1] = v11;
      a1[2] = v12;
      a1[3] = v13;
      *((_QWORD *)a1 + 8) = v14;
    }
  }
  return v9;
}
