/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x140785700
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14017DCE0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x14017DEA0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x14017DEC0 (ZwOpenProcessTokenEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14059EE00 (_SysCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v13; // rcx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-99h] BYREF
  int TokenInformation; // [rsp+38h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+48h] [rbp-81h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-7Dh] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-69h] BYREF
  __int64 v22; // [rsp+70h] [rbp-59h] BYREF
  _BYTE Sid[16]; // [rsp+78h] [rbp-51h] BYREF
  PSID Sid2[11]; // [rsp+88h] [rbp-41h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v22 = 0LL;
  v8 = 0LL;
  appended = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, &Handle);
  if ( appended == -1073741700 )
    appended = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  if ( appended >= 0 )
  {
    TokenInformation = 0;
    appended = ZwQueryInformationToken(Handle, TokenType, &TokenInformation, 4u, &ReturnLength);
    if ( appended >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        v18 = 0;
        appended = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &v18, 4u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_24;
        if ( v18 < 2 )
        {
          appended = -1073741790;
          goto LABEL_24;
        }
      }
      else if ( TokenInformation != 1 )
      {
        goto LABEL_10;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_24;
      v10 = Sid2[0];
      appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      if ( appended < 0 )
        goto LABEL_24;
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlEqualSid(Sid, v10) )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
        if ( appended >= 0 )
        {
          if ( (unsigned __int16)(UnicodeString.Length + 30) < UnicodeString.Length
            || (v11 = UnicodeString.Length + 32,
                (unsigned __int16)(UnicodeString.Length + 32) < (unsigned __int16)(UnicodeString.Length + 30)) )
          {
            appended = -1073741675;
          }
          else
          {
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                       PagedPool,
                                       (unsigned __int16)(UnicodeString.Length + 32),
                                       0x53504E50u);
            v8 = PoolWithTag;
            if ( PoolWithTag )
            {
              Destination.Length = 0;
              Destination.MaximumLength = v11;
              Destination.Buffer = PoolWithTag;
              appended = RtlAppendUnicodeStringToString(&Destination, &stru_1402BBE00);
              if ( appended >= 0 )
              {
                appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( appended >= 0 )
                {
                  appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
                  if ( appended >= 0 )
                    appended = SysCtxRegOpenKey(v13, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
                }
              }
            }
            else
            {
              appended = -1073741801;
            }
          }
        }
        goto LABEL_24;
      }
LABEL_10:
      appended = -1073741637;
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
