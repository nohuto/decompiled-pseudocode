/*
 * XREFs of sub_180032BDC @ 0x180032BDC
 * Callers:
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180032030 @ 0x180032030 (sub_180032030.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006E970 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006EB70 @ 0x18006EB70 (sub_18006EB70.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     sub_180032C68 @ 0x180032C68 (sub_180032C68.c)
 */

__int64 __fastcall sub_180032BDC(int a1, char a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = 4;
  if ( a1 >= 1 )
    v5 = a1;
  result = sub_180032C68(64, v5, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v5;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
