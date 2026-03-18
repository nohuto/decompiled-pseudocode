/*
 * XREFs of PfpLogApplicationEvent @ 0x1400B9690
 * Callers:
 *     PfCalculateProcessHash @ 0x140447470 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmGetSessionGlobalVA @ 0x140593944 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140598F20 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned int v5; // r11d
  __int64 v7; // rax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v11; // ebx
  int SessionId; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_140387A98 >= (unsigned int)dword_140387A9C )
    return 3221225659LL;
  v14[255] = 0LL;
  if ( a3 )
  {
    v14[0] = a1;
    v14[2] = 0LL;
    v5 = 14;
    LODWORD(v14[2]) = *(_DWORD *)(a1 + 736);
    v14[1] = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v14[2]) = *(_DWORD *)(a1 + 1180);
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v14, 0, 0x40uLL);
    HIDWORD(v14[3]) = *(_DWORD *)(a1 + 736);
    v7 = a1 ^ *(_QWORD *)(a1 + 776);
    v14[6] = a1;
    v14[4] = v7 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v14[3]) = *(_DWORD *)(a1 + 1180);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v11 = p_DestinationString->Length;
    v14[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v11 = 1984;
    WORD2(v14[7]) = v11 >> 1;
    memmove((char *)&v14[7] + 6, (char *)Buffer + Length - v11, v11);
    *((_WORD *)&v14[7] + WORD2(v14[7]) + 3) = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId == -1 )
      SessionId = 0;
    LODWORD(v14[0]) = SessionId;
    v14[1] = MmGetSessionGlobalVA(a1);
    v5 = 1;
    v14[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v5,
           dword_14038D2BC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v14);
}
