/*
 * XREFs of sub_180047104 @ 0x180047104
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006C490 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006DBCC @ 0x18006DBCC (sub_18006DBCC.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 *     sub_18006EB64 @ 0x18006EB64 (sub_18006EB64.c)
 * Callees:
 *     sub_180047190 @ 0x180047190 (sub_180047190.c)
 */

__int64 __fastcall sub_180047104(int a1, char a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v7 = 0;
  if ( a1 < 1 )
    v3 = 4;
  result = sub_180047190(64, v3, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v3;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
