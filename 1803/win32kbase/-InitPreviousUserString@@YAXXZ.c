/*
 * XREFs of ?InitPreviousUserString@@YAXXZ @ 0x1C003CB38
 * Callers:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     CreateProfileUserName @ 0x1C00A7F70 (CreateProfileUserName.c)
 * Callees:
 *     GetProcessLuid @ 0x1C003CBE0 (GetProcessLuid.c)
 */

void InitPreviousUserString(void)
{
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF
  struct _LUID AuthenticationId; // [rsp+40h] [rbp+8h] BYREF

  AuthenticationId = 0LL;
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId != luidPrevious )
  {
    luidPrevious = AuthenticationId;
    if ( AuthenticationId.LowPart == 999 && !AuthenticationId.HighPart || RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
    {
      RtlCopyUnicodeString(&PreviousUserString, &DefaultUserString);
    }
    else
    {
      RtlCopyUnicodeString(&PreviousUserString, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    RtlAppendUnicodeToString(&PreviousUserString, L"\\");
  }
}
