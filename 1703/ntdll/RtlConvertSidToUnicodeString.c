/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x180044360
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_1800DB244 @ 0x1800DB244 (sub_1800DB244.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcscat_s @ 0x1800A1620 (wcscat_s.c)
 *     wcscpy_s @ 0x1800A16D0 (wcscpy_s.c)
 *     sub_1800EB208 @ 0x1800EB208 (sub_1800EB208.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  _BYTE *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v8; // di
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-248h] BYREF
  wchar_t Destination; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v14[4]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v15[496]; // [rsp+3Ch] [rbp-22Ch] BYREF
  _BYTE v16[2]; // [rsp+22Ch] [rbp-3Ch] BYREF
  _BYTE v17[2]; // [rsp+22Eh] [rbp-3Ah] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Destination, 0x100uLL, L"S-1-");
  v6 = v14;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Destination, 0x100uLL, L"0x");
    v6 = v15;
    v10 = *((unsigned __int8 *)Sid + 5);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    *(_DWORD *)&SourceString.Length = *((unsigned __int8 *)Sid + 7)
                                    + (*((unsigned __int8 *)Sid + 6) << 8)
                                    + (v10 << 16)
                                    + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64, _BYTE *))sub_1800EB208)(
               &SourceString,
               v11,
               250LL,
               v15);
  }
  else
  {
    result = sub_180044560(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v14);
  }
  if ( result >= 0 )
  {
    v8 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        for ( ; v6 < v16; v6 += 2 )
        {
          if ( !*(_WORD *)v6 )
            break;
        }
        *(_WORD *)v6 = 45;
        v6 += 2;
        result = sub_180044560(
                   *((unsigned int *)Sid + v8 + 2),
                   10LL,
                   256 - (unsigned int)((v6 - (_BYTE *)&Destination) >> 1),
                   v6);
        if ( result < 0 )
          break;
        if ( ++v8 >= *((_BYTE *)Sid + 1) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( AllocateDestinationString )
      {
        if ( !RtlCreateUnicodeString(UnicodeString, &Destination) )
          return -1073741801;
      }
      else
      {
        for ( ; v6 < v17; v6 += 2 )
        {
          if ( !*(_WORD *)v6 )
            break;
        }
        v9 = 2 * ((v6 - (_BYTE *)&Destination) >> 1);
        if ( v9 >= UnicodeString->MaximumLength )
          return -2147483643;
        SourceString.Length = v9;
        SourceString.Buffer = &Destination;
        SourceString.MaximumLength = v9 + 2;
        RtlCopyUnicodeString(UnicodeString, &SourceString);
      }
      return 0;
    }
  }
  return result;
}
