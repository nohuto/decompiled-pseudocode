/*
 * XREFs of sub_18010473C @ 0x18010473C
 * Callers:
 *     sub_180011EB0 @ 0x180011EB0 (sub_180011EB0.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_18001A8A0 @ 0x18001A8A0 (sub_18001A8A0.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801004A0 @ 0x1801004A0 (sub_1801004A0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_180101048 @ 0x180101048 (sub_180101048.c)
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 *     sub_180102B70 @ 0x180102B70 (sub_180102B70.c)
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010473C(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_180159910 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180159910 + 1) = v2[1];
  *((_OWORD *)&unk_180159910 + 2) = v2[2];
  *((_OWORD *)&unk_180159910 + 3) = v2[3];
  *((_OWORD *)&unk_180159910 + 4) = v2[4];
  *((_OWORD *)&unk_180159910 + 5) = v2[5];
  *((_OWORD *)&unk_180159910 + 6) = v2[6];
  *((_OWORD *)&unk_180159910 + 7) = v2[7];
  *((_OWORD *)&unk_180159910 + 8) = v2[8];
  *((_QWORD *)&unk_180159910 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801599B0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
