/*
 * XREFs of sub_1800F22CC @ 0x1800F22CC
 * Callers:
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_180021168 @ 0x180021168 (sub_180021168.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_18002C840 @ 0x18002C840 (sub_18002C840.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_1800959D8 @ 0x1800959D8 (sub_1800959D8.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_1801015EC @ 0x1801015EC (sub_1801015EC.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 *     sub_18010216C @ 0x18010216C (sub_18010216C.c)
 *     sub_1801021F4 @ 0x1801021F4 (sub_1801021F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F22CC(int a1, __int64 a2)
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
  unk_180158820 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180158820 + 1) = v2[1];
  *((_OWORD *)&unk_180158820 + 2) = v2[2];
  *((_OWORD *)&unk_180158820 + 3) = v2[3];
  *((_OWORD *)&unk_180158820 + 4) = v2[4];
  *((_OWORD *)&unk_180158820 + 5) = v2[5];
  *((_OWORD *)&unk_180158820 + 6) = v2[6];
  *((_OWORD *)&unk_180158820 + 7) = v2[7];
  *((_OWORD *)&unk_180158820 + 8) = v2[8];
  *((_QWORD *)&unk_180158820 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801588C0;
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
