/*
 * XREFs of PfpLogApplicationEvent @ 0x1400618B4
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PfCalculateProcessHash @ 0x140564110 (PfCalculateProcessHash.c)
 * Callees:
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmGetSessionGlobalVA @ 0x140454588 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x14045950C (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // rdi
  int v5; // r11d
  unsigned int v6; // r9d
  __int64 v8; // rax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 Length; // cx
  unsigned int v11; // esi
  wchar_t *Buffer; // rdx
  int SessionId; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_14036DB18 >= (unsigned int)dword_14036DB1C )
    return 3221225659LL;
  v15[255] = 0LL;
  if ( a3 )
  {
    v15[0] = a1;
    v15[2] = 0LL;
    v5 = 14;
    v6 = 24;
    LODWORD(v15[2]) = *(_DWORD *)(a1 + 736);
    v15[1] = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v15[2]) = *(_DWORD *)(a1 + 1180);
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v15, 0, 0x40uLL);
    HIDWORD(v15[3]) = *(_DWORD *)(a1 + 736);
    v8 = a1 ^ *(_QWORD *)(a1 + 776);
    v15[6] = a1;
    v15[4] = v8 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v15[3]) = *(_DWORD *)(a1 + 1180);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    v11 = 1984;
    v15[5] = DirectoryFrameFromProcess;
    if ( Length <= 0x7C0u )
      v11 = Length;
    Buffer = p_DestinationString->Buffer;
    WORD2(v15[7]) = v11 >> 1;
    memmove((char *)&v15[7] + 6, (char *)Buffer + Length - v11, v11);
    *((_WORD *)&v15[7] + WORD2(v15[7]) + 3) = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId == -1 )
      SessionId = 0;
    LODWORD(v15[0]) = SessionId;
    v15[1] = MmGetSessionGlobalVA(a1);
    v6 = v11 + 64;
    v5 = 1;
    v15[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v5,
           dword_14036DE5C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v15,
           v6);
}
