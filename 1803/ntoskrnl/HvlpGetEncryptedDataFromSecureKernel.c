/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x14022CF7C
 * Callers:
 *     HvlGetEncryptedData @ 0x14022CC10 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x14022EB88 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x14022ECF4 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14022EF40 (HvlpStartSecurePageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(__int64 a1, __int64 a2, int a3, _DWORD *a4, _QWORD *a5)
{
  _QWORD *v6; // rdi
  __int64 result; // rax
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  *a4 = 0;
  v6 = a5;
  *a5 = 0LL;
  if ( !HvlpCrashdumpIterationState )
  {
    result = HvlpStartSecurePageListIteration(1LL, 2 * (((unsigned int)HvlpFlags >> 1) & 1) + 1);
    if ( (int)result < 0 )
      return result;
    HvlpCrashdumpIterationState = 1;
  }
  result = HvlpGetSecurePageList(1LL, a1, a2, 0LL, v6, &v10);
  if ( (int)result >= 0 )
  {
    *a4 = 4096;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
