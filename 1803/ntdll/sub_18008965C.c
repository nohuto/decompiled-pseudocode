/*
 * XREFs of sub_18008965C @ 0x18008965C
 * Callers:
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     sub_1800896AC @ 0x1800896AC (sub_1800896AC.c)
 *     ZwRaiseHardError @ 0x18009D690 (ZwRaiseHardError.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18008965C(int a1)
{
  char v1; // al
  __int64 v2; // rbx
  __int64 result; // rax
  char v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = dword_180156A70;
  v2 = a1;
  if ( (dword_180156A70 & 3) != 0 )
  {
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1847,
      (unsigned int)"LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = dword_180156A70;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = sub_1800896AC(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !dword_18015BEE8 )
  {
    v5 = v2;
    return ZwRaiseHardError(3221225797LL, 1LL, 0LL, &v5, 1, &v4);
  }
  return result;
}
