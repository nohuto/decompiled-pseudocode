/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00B2C4C
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00BB4A0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RtlStringCchCopyNW @ 0x1C00BB768 (RtlStringCchCopyNW.c)
 */

unsigned __int16 *__fastcall GetProcessAppContainerSid(__int64 a1)
{
  __int64 v1; // rbx
  BOOL v2; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v4; // rsi
  wchar_t *v5; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v1 = 0LL;
  UnicodeString.Buffer = 0LL;
  v2 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1);
  v4 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v4, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    v5 = (wchar_t *)Win32AllocPoolWithQuotaZInit(UnicodeString.Length + 2LL, 0x79747355u);
    v1 = (__int64)v5;
    if ( v5 )
      v2 = RtlStringCchCopyNW(
             v5,
             UnicodeString.Length + 1LL,
             UnicodeString.Buffer,
             (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v4);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v2 && v1 )
  {
    Win32FreePool(v1);
    v1 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned __int16 *)v1;
}
