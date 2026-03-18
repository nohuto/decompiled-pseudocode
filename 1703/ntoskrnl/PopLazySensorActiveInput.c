/*
 * XREFs of PopLazySensorActiveInput @ 0x1406D4648
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14041DDF0 (PopSessionWinlogonNotification.c)
 * Callees:
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x14042028C (PopConsoleSessionActiveInput.c)
 */

ULONG_PTR __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  ULONG_PTR result; // rax
  void *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  BYTE2(qword_140349E50) = 1;
  v5 = 0LL;
  HIDWORD(qword_140349E50) = 10;
  result = MmGetSessionById(a1);
  v4 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession(result) >= 0 )
    {
      PopConsoleSessionActiveInput(
        a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        (int *)&v5);
      MmDetachSession((__int64)v4, (__int64)v6);
      v1 = v5;
    }
    ObfDereferenceObject(v4);
    result = HIDWORD(v5);
    HIDWORD(PopLazyContext) = HIDWORD(v5);
    LOWORD(qword_140349E50) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
