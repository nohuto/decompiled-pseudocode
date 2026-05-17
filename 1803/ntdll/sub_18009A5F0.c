/*
 * XREFs of sub_18009A5F0 @ 0x18009A5F0
 * Callers:
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_180013330 @ 0x180013330 (sub_180013330.c)
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002ABD8 @ 0x18002ABD8 (sub_18002ABD8.c)
 *     sub_18002AD5C @ 0x18002AD5C (sub_18002AD5C.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005C2AC @ 0x18005C2AC (sub_18005C2AC.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005D664 @ 0x18005D664 (sub_18005D664.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 */

__int64 __fastcall sub_18009A5F0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801597C0 != a2 )
  {
    qword_1801597D8 = a5;
    qword_1801597E0 = a6;
    dword_1801597B8 = a1;
    qword_1801597C0 = a2;
    qword_1801597C8 = a3;
    qword_1801597D0 = a4;
    return sub_1800FC664();
  }
  return result;
}
