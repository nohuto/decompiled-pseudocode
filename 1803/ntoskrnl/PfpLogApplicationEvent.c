/*
 * XREFs of PfpLogApplicationEvent @ 0x14006EDFC
 * Callers:
 *     PfCalculateProcessHash @ 0x14050E700 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 * Callees:
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmGetSessionGlobalVA @ 0x14057AAE0 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x14057FD44 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  int v5; // r14d
  UNICODE_STRING *p_DestinationString; // rdi
  __int64 v7; // rax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v11; // ebx
  int SessionId; // eax
  __int64 v13; // r9
  unsigned int v14; // r11d
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[256]; // [rsp+30h] [rbp-D0h] BYREF

  if ( dword_1403CD398 >= (unsigned int)dword_1403CD39C )
    return 3221225659LL;
  v5 = 0;
  v17[255] = 0LL;
  if ( a3 )
  {
    v17[0] = a1;
    v17[2] = 0LL;
    v14 = 14;
    LODWORD(v17[2]) = *(_DWORD *)(a1 + 736);
    v13 = 24LL;
    v17[1] = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v17[2]) = *(_DWORD *)(a1 + 1180);
  }
  else
  {
    if ( !a2 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    p_DestinationString = &DestinationString;
    if ( a2 )
      p_DestinationString = a2;
    memset(v17, 0, 0x40uLL);
    HIDWORD(v17[3]) = *(_DWORD *)(a1 + 736);
    v7 = a1 ^ *(_QWORD *)(a1 + 776);
    v17[6] = a1;
    v17[4] = v7 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v17[3]) = *(_DWORD *)(a1 + 1180);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v11 = p_DestinationString->Length;
    v17[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v11 = 1984;
    WORD2(v17[7]) = v11 >> 1;
    memmove((char *)&v17[7] + 6, (char *)Buffer + Length - v11, v11);
    *((_WORD *)&v17[7] + WORD2(v17[7]) + 3) = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v5 = SessionId;
    LODWORD(v17[0]) = v5;
    v17[1] = MmGetSessionGlobalVA(a1);
    v13 = v11 + 64;
    v14 = 1;
    v17[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v14,
           dword_1403CD6DC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v17,
           v13);
}
