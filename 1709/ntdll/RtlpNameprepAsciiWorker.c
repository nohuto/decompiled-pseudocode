/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x18004E6E4
 * Callers:
 *     RtlIdnToAscii @ 0x18004DEC0 (RtlIdnToAscii.c)
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToNameprepUnicode @ 0x1800F7FA0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlpValidateAsciiStd3AndLength @ 0x18004E978 (RtlpValidateAsciiStd3AndLength.c)
 *     RtlStringCchLengthW @ 0x180051880 (RtlStringCchLengthW.c)
 *     RtlNormalizeString @ 0x180080670 (RtlNormalizeString.c)
 *     punycode_encode @ 0x1800854C8 (punycode_encode.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090E18 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     FindEmailAt @ 0x1800F7F44 (FindEmailAt.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, __int64 a3, void *a4, int *a5, char a6)
{
  LONG v6; // ebx
  void *v7; // r15
  int v8; // edi
  int v10; // r14d
  bool v11; // dl
  char v12; // r13
  __int64 v13; // r8
  WCHAR *v14; // rdx
  __int64 result; // rax
  int v16; // eax
  WCHAR *v17; // r9
  LONG v18; // ecx
  NTSTATUS v19; // eax
  unsigned int v20; // ecx
  WCHAR v21; // dx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  LONG v25; // edi
  WCHAR v26; // ax
  LONG EmailAt; // eax
  NTSTATUS v28; // eax
  bool v29; // cc
  unsigned __int64 v30; // rax
  char v31; // [rsp+30h] [rbp-D0h]
  bool v32; // [rsp+31h] [rbp-CFh]
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  LONG v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h]
  WCHAR DestinationString[512]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD Src[520]; // [rsp+450h] [rbp+350h] BYREF

  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( (int)a3 < -1 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v10 = *a5;
  if ( *a5 < 0 || v10 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  v31 = 0;
  v35 = a1 & 1;
  DestinationStringLength = a1 & 4;
  v11 = DestinationStringLength != 0;
  v12 = (a1 & 2) != 0;
  v32 = DestinationStringLength != 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v34) >= 0 )
    {
      v11 = DestinationStringLength != 0;
      v8 = v34 + 1;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
  if ( v8 > 0 && !a2[v8 - 1] )
  {
    v31 = 1;
    --v8;
  }
  LOBYTE(a3) = v11;
  LOBYTE(a4) = v12;
  if ( !(unsigned __int8)RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v8, a3, a4) )
  {
    v16 = 0;
    v17 = DestinationString;
    v18 = 511;
    if ( DestinationStringLength )
    {
      EmailAt = FindEmailAt(a2, (unsigned int)v8, v13, DestinationString);
      v34 = EmailAt;
      if ( !EmailAt )
        goto LABEL_50;
      DestinationStringLength = 511;
      v28 = RtlNormalizeString(1u, a2, EmailAt, DestinationString, &DestinationStringLength);
      v6 = DestinationStringLength;
      v20 = v28;
      if ( v28 < 0 || !DestinationStringLength )
      {
        if ( v28 && v28 != -1073741789 && v28 != -1073740009 )
        {
          v29 = DestinationStringLength <= 0;
LABEL_55:
          if ( v29 )
            goto LABEL_42;
        }
LABEL_41:
        v20 = -1073740010;
LABEL_42:
        result = v20;
        goto LABEL_34;
      }
      v16 = v34;
      v17 = &DestinationString[DestinationStringLength];
      v18 = 511 - DestinationStringLength;
    }
    if ( v16 >= v8 )
    {
LABEL_30:
      if ( v6 > 0 )
      {
        v21 = DestinationString[v6 - 1];
        if ( v21 == 46 )
        {
          v26 = a2[v8 - 1];
          if ( v26 != 46 && v26 != 12290 && v26 != 0xFF0E && v26 != 0xFF61 )
            goto LABEL_50;
        }
        if ( !v21 )
          goto LABEL_50;
      }
      DestinationStringLength = 515;
      result = punycode_encode(DestinationString, v32, v12);
      v25 = DestinationStringLength;
      if ( !DestinationStringLength )
      {
LABEL_34:
        *a5 = 0;
        return result;
      }
      if ( !a6 )
      {
        if ( v31 )
        {
          if ( (unsigned __int64)v6 > 0x1FF )
            goto LABEL_50;
          v30 = v6++;
          if ( v30 >= 511 )
            _report_rangecheckfailure(v23, v22, v24, 0LL);
          DestinationString[v30] = 0;
        }
        if ( !v7 || !v10 )
          goto LABEL_21;
        if ( v6 <= v10 )
        {
          v14 = DestinationString;
          goto LABEL_20;
        }
        goto LABEL_81;
      }
      if ( !v31 )
        goto LABEL_66;
      if ( (unsigned __int64)DestinationStringLength < 0x203 )
      {
        v25 = DestinationStringLength + 1;
        if ( (unsigned __int64)(2LL * DestinationStringLength) >= 0x406 )
          _report_rangecheckfailure(v23, v22, v24, 0LL);
        Src[DestinationStringLength] = 0;
LABEL_66:
        if ( v7 && v10 )
        {
          if ( v25 > v10 )
          {
LABEL_81:
            result = 3221225507LL;
            goto LABEL_34;
          }
          memmove(v7, Src, 2LL * v25);
        }
        *a5 = v25;
        return 0LL;
      }
LABEL_50:
      result = 3221227286LL;
      goto LABEL_34;
    }
    DestinationStringLength = v18;
    v19 = RtlNormalizeString((((unsigned __int8)v35 ^ 1) << 8) + 13, &a2[v16], v8 - v16, v17, &DestinationStringLength);
    v20 = v19;
    if ( v19 >= 0 && DestinationStringLength )
    {
      v6 += DestinationStringLength;
      goto LABEL_30;
    }
    if ( v19 && v19 != -1073740009 && v19 != -1073741789 )
    {
      v29 = DestinationStringLength <= 0;
      goto LABEL_55;
    }
    goto LABEL_41;
  }
  if ( v8 )
  {
    v6 = v8 + 1;
    if ( !v31 )
      v6 = v8;
    if ( !v7 || !v10 )
      goto LABEL_21;
    if ( v6 <= v10 )
    {
      v14 = (WCHAR *)a2;
LABEL_20:
      memmove(v7, v14, 2LL * v6);
LABEL_21:
      *a5 = v6;
      return 0LL;
    }
    goto LABEL_81;
  }
  return 3221227286LL;
}
