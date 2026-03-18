/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x140517C80
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x140519C30 (RtlFormatCurrentUserKeyPath.c)
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     PspReadUserQuotaLimits @ 0x140572174 (PspReadUserQuotaLimits.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     LocalConvertSidToStringSidW @ 0x140796AB4 (LocalConvertSidToStringSidW.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407CA784 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x1407E0728 (AdtpBuildSidListString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcscat_s @ 0x14018EB50 (wcscat_s.c)
 *     wcscpy_s @ 0x14018EC10 (wcscpy_s.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     RtlIntegerToUnicode @ 0x140517E50 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlLargeIntegerToUnicode @ 0x1407864DC (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // edi
  WCHAR *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t Dst; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR String[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[496]; // [rsp+3Ch] [rbp-C4h] BYREF
  WCHAR v17; // [rsp+22Ch] [rbp+12Ch] BYREF
  WCHAR v18; // [rsp+22Eh] [rbp+12Eh] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Dst, 0x100uLL, L"S-1-");
  v6 = 0;
  v7 = String;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Dst, 0x100uLL, L"0x");
    v7 = (WCHAR *)v16;
    v11 = *((unsigned __int8 *)Sid + 5);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    *(_DWORD *)&SourceString.Length = *((unsigned __int8 *)Sid + 7)
                                    + (*((unsigned __int8 *)Sid + 6) << 8)
                                    + (v11 << 16)
                                    + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               &SourceString,
               v12,
               250LL,
               v16);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               0xAu,
               0xFCu,
               String);
  }
  if ( result >= 0 )
  {
    v9 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        while ( v7 < &v17 && *v7 )
          ++v7;
        *v7++ = 45;
        result = RtlIntegerToUnicode(*((_DWORD *)Sid + v9 + 2), 0xAu, 256 - (v7 - &Dst), v7);
        if ( result < 0 )
          break;
        if ( ++v9 >= *((_BYTE *)Sid + 1) )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( AllocateDestinationString )
        return RtlCreateUnicodeString(UnicodeString, &Dst) == 0 ? 0xC0000017 : 0;
      while ( v7 < &v18 && *v7 )
        ++v7;
      v10 = 2 * (v7 - &Dst);
      if ( v10 >= UnicodeString->MaximumLength )
        return -2147483643;
      SourceString.Length = v10;
      SourceString.Buffer = &Dst;
      SourceString.MaximumLength = v10 + 2;
      RtlCopyUnicodeString(UnicodeString, &SourceString);
      return v6;
    }
  }
  return result;
}
