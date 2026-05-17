/*
 * XREFs of sub_1800048B8 @ 0x1800048B8
 * Callers:
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006F334 @ 0x18006F334 (sub_18006F334.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     sub_180004908 @ 0x180004908 (sub_180004908.c)
 *     ZwRaiseHardError @ 0x1800A7E30 (ZwRaiseHardError.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_1800048B8(int a1)
{
  char v1; // al
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = dword_180155A10;
  v2 = a1;
  if ( (dword_180155A10 & 3) != 0 )
  {
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1872,
      (unsigned int)"LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = dword_180155A10;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = sub_180004908(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !dword_18015AEC8 )
  {
    v5 = v2;
    return ZwRaiseHardError(3221225797LL, 1LL, 0LL, &v5, 1, &v4);
  }
  return result;
}
