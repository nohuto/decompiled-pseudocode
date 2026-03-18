/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00DE840
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00E5D80 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RtlStringCchCopyNW @ 0x1C008D1D8 (RtlStringCchCopyNW.c)
 */

unsigned __int16 *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  BOOL v5; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v7; // rsi
  wchar_t *v8; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = 0LL;
  UnicodeString.Buffer = 0LL;
  v5 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v7 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v7, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    v8 = (wchar_t *)Win32AllocPoolWithQuotaZInit(UnicodeString.Length + 2LL, 0x79747355u);
    v4 = (__int64)v8;
    if ( v8 )
      v5 = RtlStringCchCopyNW(
             v8,
             UnicodeString.Length + 1LL,
             UnicodeString.Buffer,
             (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v7);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v5 && v4 )
  {
    Win32FreePool(v4);
    return 0LL;
  }
  return (unsigned __int16 *)v4;
}
