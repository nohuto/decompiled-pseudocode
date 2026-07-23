/*
 * XREFs of sub_180068000 @ 0x180068000
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x180067FE0 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800F4410 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 *     sub_180068274 @ 0x180068274 (sub_180068274.c)
 *     RtlNormalizeString @ 0x180069450 (RtlNormalizeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F43B4 @ 0x1800F43B4 (sub_1800F43B4.c)
 */

__int64 __fastcall sub_180068000(int a1, WCHAR *a2, __int64 a3, void *a4, int *a5, char a6)
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
  WCHAR v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  LONG v26; // edi
  LONG v27; // eax
  NTSTATUS v28; // eax
  bool v29; // cc
  unsigned __int64 v30; // rax
  char v31; // [rsp+30h] [rbp-D0h]
  bool v32; // [rsp+31h] [rbp-CFh]
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h]
  WCHAR DestinationString[512]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Src[520]; // [rsp+450h] [rbp+350h] BYREF

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
    if ( (int)sub_180035D8C(a2, 0x7FFFFFFFuLL, &v34) >= 0 )
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
  if ( !(unsigned __int8)sub_180068274(a2, (unsigned int)v8, a3, a4) )
  {
    v16 = 0;
    v17 = DestinationString;
    v18 = 511;
    if ( DestinationStringLength )
    {
      v27 = sub_1800F43B4(a2, (unsigned int)v8, v13, DestinationString);
      LODWORD(v34) = v27;
      if ( !v27 )
        goto LABEL_38;
      DestinationStringLength = 511;
      v28 = RtlNormalizeString(1u, a2, v27, DestinationString, &DestinationStringLength);
      v6 = DestinationStringLength;
      v20 = v28;
      if ( v28 < 0 || !DestinationStringLength )
      {
        if ( !v28 || v28 == -1073741789 || v28 == -1073740009 )
          goto LABEL_49;
        v29 = DestinationStringLength <= 0;
LABEL_48:
        if ( v29 )
        {
LABEL_50:
          result = v20;
          goto LABEL_35;
        }
LABEL_49:
        v20 = -1073740010;
        goto LABEL_50;
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
          v22 = a2[v8 - 1];
          if ( v22 != 46 && v22 != 12290 && v22 != 0xFF0E && v22 != 0xFF61 )
            goto LABEL_38;
        }
        if ( !v21 )
          goto LABEL_38;
      }
      DestinationStringLength = 515;
      result = sub_180067ACC(DestinationString, v6, Src, &DestinationStringLength, v32, v12);
      v26 = DestinationStringLength;
      if ( !DestinationStringLength )
      {
LABEL_35:
        *a5 = 0;
        return result;
      }
      if ( !a6 )
      {
        if ( v31 )
        {
          if ( (unsigned __int64)v6 > 0x1FF )
            goto LABEL_38;
          v30 = v6++;
          if ( v30 >= 511 )
            _report_rangecheckfailure(v24, v23, v25, 0LL);
          DestinationString[v30] = 0;
        }
        if ( !v7 || !v10 )
          goto LABEL_21;
        if ( v6 <= v10 )
        {
          v14 = DestinationString;
          goto LABEL_20;
        }
        goto LABEL_79;
      }
      if ( !v31 )
        goto LABEL_64;
      if ( (unsigned __int64)DestinationStringLength < 0x203 )
      {
        v26 = DestinationStringLength + 1;
        if ( (unsigned __int64)(2LL * DestinationStringLength) >= 0x406 )
          _report_rangecheckfailure(v24, v23, v25, 0LL);
        Src[DestinationStringLength] = 0;
LABEL_64:
        if ( v7 && v10 )
        {
          if ( v26 > v10 )
          {
LABEL_79:
            result = 3221225507LL;
            goto LABEL_35;
          }
          memmove(v7, Src, 2LL * v26);
        }
        *a5 = v26;
        return 0LL;
      }
LABEL_38:
      result = 3221227286LL;
      goto LABEL_35;
    }
    DestinationStringLength = v18;
    v19 = RtlNormalizeString((((unsigned __int8)v35 ^ 1) << 8) + 13, &a2[v16], v8 - v16, v17, &DestinationStringLength);
    v20 = v19;
    if ( v19 >= 0 && DestinationStringLength )
    {
      v6 += DestinationStringLength;
      goto LABEL_30;
    }
    if ( !v19 || v19 == -1073741789 || v19 == -1073740009 )
      goto LABEL_49;
    v29 = DestinationStringLength <= 0;
    goto LABEL_48;
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
      v14 = a2;
LABEL_20:
      memmove(v7, v14, 2LL * v6);
LABEL_21:
      *a5 = v6;
      return 0LL;
    }
    goto LABEL_79;
  }
  return 3221227286LL;
}
