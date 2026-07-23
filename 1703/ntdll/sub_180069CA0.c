/*
 * XREFs of sub_180069CA0 @ 0x180069CA0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x180069C80 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800F6AD0 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_180069F00 @ 0x180069F00 (sub_180069F00.c)
 *     RtlNormalizeString @ 0x18006B080 (RtlNormalizeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F6A70 @ 0x1800F6A70 (sub_1800F6A70.c)
 */

__int64 __fastcall sub_180069CA0(int a1, WCHAR *a2, __int64 a3, void *a4, int *a5, char a6)
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
  LONG v27; // eax
  NTSTATUS v28; // eax
  bool v29; // cc
  unsigned __int64 v30; // rax
  char v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+31h] [rbp-CFh]
  bool v33; // [rsp+32h] [rbp-CEh]
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR DestinationString[512]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD Src[520]; // [rsp+440h] [rbp+340h] BYREF

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
  v32 = a1 & 1;
  DestinationStringLength = a1 & 4;
  v11 = DestinationStringLength != 0;
  v12 = (a1 & 2) != 0;
  v33 = DestinationStringLength != 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)sub_180045280(a2, 0x7FFFFFFFuLL, &v35) >= 0 )
    {
      v11 = DestinationStringLength != 0;
      v8 = v35 + 1;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
LABEL_11:
  if ( v8 > 0 && !a2[v8 - 1] )
  {
    v31 = 1;
    --v8;
  }
  LOBYTE(a3) = v11;
  LOBYTE(a4) = v12;
  if ( !(unsigned __int8)sub_180069F00(a2, (unsigned int)v8, a3, a4) )
  {
    v16 = 0;
    v17 = DestinationString;
    v18 = 511;
    if ( DestinationStringLength )
    {
      v27 = sub_1800F6A70(a2, (unsigned int)v8, v13, DestinationString);
      LODWORD(v35) = v27;
      if ( !v27 )
        goto LABEL_39;
      DestinationStringLength = 511;
      v28 = RtlNormalizeString(1u, a2, v27, DestinationString, &DestinationStringLength);
      v6 = DestinationStringLength;
      v20 = v28;
      if ( v28 < 0 || !DestinationStringLength )
      {
        if ( !v28 || v28 == -1073741789 || v28 == -1073740009 )
          goto LABEL_50;
        v29 = DestinationStringLength <= 0;
LABEL_49:
        if ( v29 )
        {
LABEL_51:
          result = v20;
          goto LABEL_34;
        }
LABEL_50:
        v20 = -1073740010;
        goto LABEL_51;
      }
      v16 = v35;
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
            goto LABEL_39;
        }
        if ( !v21 )
          goto LABEL_39;
      }
      DestinationStringLength = 515;
      result = sub_180069760(DestinationString, v6, (unsigned __int64)Src, &DestinationStringLength, v33, v12);
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
            goto LABEL_39;
          v30 = v6++;
          if ( v30 >= 511 )
            _report_rangecheckfailure(v23, v22, v24, 0LL);
          DestinationString[v30] = 0;
        }
        if ( !v7 || !v10 )
          goto LABEL_23;
        if ( v6 <= v10 )
        {
          v14 = DestinationString;
          goto LABEL_22;
        }
        goto LABEL_80;
      }
      if ( !v31 )
        goto LABEL_65;
      if ( (unsigned __int64)DestinationStringLength < 0x203 )
      {
        v25 = DestinationStringLength + 1;
        if ( (unsigned __int64)(2LL * DestinationStringLength) >= 0x406 )
          _report_rangecheckfailure(v23, v22, v24, 0LL);
        Src[DestinationStringLength] = 0;
LABEL_65:
        if ( v7 && v10 )
        {
          if ( v25 > v10 )
          {
LABEL_80:
            result = 3221225507LL;
            goto LABEL_34;
          }
          memmove(v7, Src, 2LL * v25);
        }
        *a5 = v25;
        return 0LL;
      }
LABEL_39:
      result = 3221227286LL;
      goto LABEL_34;
    }
    DestinationStringLength = v18;
    v19 = RtlNormalizeString(v32 != 0 ? 13 : 269, &a2[v16], v8 - v16, v17, &DestinationStringLength);
    v20 = v19;
    if ( v19 >= 0 && DestinationStringLength )
    {
      v6 += DestinationStringLength;
      goto LABEL_30;
    }
    if ( !v19 || v19 == -1073741789 || v19 == -1073740009 )
      goto LABEL_50;
    v29 = DestinationStringLength <= 0;
    goto LABEL_49;
  }
  if ( v8 )
  {
    v6 = v8 + 1;
    if ( !v31 )
      v6 = v8;
    if ( !v7 || !v10 )
      goto LABEL_23;
    if ( v6 <= v10 )
    {
      v14 = a2;
LABEL_22:
      memmove(v7, v14, 2LL * v6);
LABEL_23:
      *a5 = v6;
      return 0LL;
    }
    goto LABEL_80;
  }
  return 3221227286LL;
}
