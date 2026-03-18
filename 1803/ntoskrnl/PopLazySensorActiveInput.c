/*
 * XREFs of PopLazySensorActiveInput @ 0x14076D98C
 * Callers:
 *     PopSessionWinlogonNotification @ 0x14048B920 (PopSessionWinlogonNotification.c)
 * Callees:
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopConsoleSessionActiveInput @ 0x140527168 (PopConsoleSessionActiveInput.c)
 */

__int64 __fastcall PopLazySensorActiveInput(unsigned int a1)
{
  int v1; // ebx
  __int64 result; // rax
  void *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  BYTE2(qword_1403A7B10) = 1;
  v5 = 0LL;
  HIDWORD(qword_1403A7B10) = 10;
  result = MmGetSessionById(a1);
  v4 = (void *)result;
  if ( result )
  {
    if ( (int)MmAttachSession((_KPROCESS *)result, (__int64)v6) >= 0 )
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
    LOWORD(qword_1403A7B10) = 257;
    DWORD2(PopLazyContext) = v1;
  }
  return result;
}
