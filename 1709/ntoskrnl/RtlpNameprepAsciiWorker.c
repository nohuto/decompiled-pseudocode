/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x140724598
 * Callers:
 *     RtlIdnToAscii @ 0x140724220 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x140724250 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     FindEmailAt @ 0x140255824 (FindEmailAt.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x140724970 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x140725184 (punycode_encode.c)
 *     RtlNormalizeString @ 0x140727090 (RtlNormalizeString.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, __int64 a3, void *a4, int *a5, char a6)
{
  LONG v6; // ebx
  void *v7; // r15
  signed int v8; // edi
  int v10; // r14d
  bool v11; // dl
  char v12; // r13
  __int64 result; // rax
  WCHAR *v14; // rdx
  signed int v15; // eax
  WCHAR *v16; // r9
  LONG v17; // ecx
  LONG EmailAt; // eax
  NTSTATUS v19; // eax
  unsigned int v20; // ecx
  NTSTATUS v21; // eax
  bool v22; // cc
  WCHAR v23; // dx
  WCHAR v24; // ax
  LONG v25; // edi
  unsigned __int64 v26; // rax
  char v27; // [rsp+30h] [rbp-D0h]
  bool v28; // [rsp+31h] [rbp-CFh]
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h]
  WCHAR DestinationString[512]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD Src[520]; // [rsp+450h] [rbp+350h] BYREF

  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( a2 )
  {
    if ( (int)a3 >= -1 )
    {
      if ( a5 )
      {
        v10 = *a5;
        if ( *a5 >= 0 && (v10 <= 0 || a4) && (a1 & 0xFFFFFFF8) == 0 )
        {
          v27 = 0;
          v31 = a1 & 1;
          DestinationStringLength = a1 & 4;
          v11 = DestinationStringLength != 0;
          v12 = (a1 & 2) != 0;
          v28 = DestinationStringLength != 0;
          if ( (_DWORD)a3 != -1 )
          {
LABEL_11:
            if ( v8 > 0 && !a2[v8 - 1] )
            {
              v27 = 1;
              --v8;
            }
            LOBYTE(a3) = v11;
            LOBYTE(a4) = v12;
            if ( (unsigned __int8)RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v8, a3, a4) )
            {
              if ( !v8 )
                return 3221227286LL;
              v6 = v8 + 1;
              if ( !v27 )
                v6 = v8;
              if ( !v7 || !v10 )
                goto LABEL_24;
              if ( v6 <= v10 )
              {
                v14 = (WCHAR *)a2;
LABEL_23:
                memmove(v7, v14, 2LL * v6);
LABEL_24:
                *a5 = v6;
                return 0LL;
              }
              goto LABEL_73;
            }
            v15 = 0;
            v16 = DestinationString;
            v17 = 511;
            if ( DestinationStringLength )
            {
              EmailAt = FindEmailAt((__int64)a2, v8);
              LODWORD(pcchLength) = EmailAt;
              if ( !EmailAt )
              {
LABEL_28:
                result = 3221227286LL;
LABEL_74:
                *a5 = 0;
                return result;
              }
              DestinationStringLength = 511;
              v19 = RtlNormalizeString(1u, a2, EmailAt, DestinationString, &DestinationStringLength);
              v6 = DestinationStringLength;
              v20 = v19;
              if ( v19 < 0 || !DestinationStringLength )
              {
                if ( !v19 || v19 == -1073741789 || v19 == -1073740009 )
                  goto LABEL_41;
                v22 = DestinationStringLength <= 0;
LABEL_40:
                if ( v22 )
                {
LABEL_42:
                  result = v20;
                  goto LABEL_74;
                }
LABEL_41:
                v20 = -1073740010;
                goto LABEL_42;
              }
              v15 = pcchLength;
              v16 = &DestinationString[DestinationStringLength];
              v17 = 511 - DestinationStringLength;
            }
            if ( v15 >= v8 )
            {
LABEL_47:
              if ( v6 > 0 )
              {
                v23 = DestinationString[v6 - 1];
                if ( v23 == 46 )
                {
                  v24 = a2[v8 - 1];
                  if ( v24 != 0xFF0E && v24 != 12290 && v24 != 46 && v24 != 0xFF61 )
                    goto LABEL_28;
                }
                if ( !v23 )
                  goto LABEL_28;
              }
              DestinationStringLength = 515;
              result = punycode_encode(DestinationString, v28, v12);
              v25 = DestinationStringLength;
              if ( !DestinationStringLength )
                goto LABEL_74;
              if ( !a6 )
              {
                if ( v27 )
                {
                  if ( (unsigned __int64)v6 > 0x1FF )
                    goto LABEL_28;
                  v26 = v6++;
                  if ( v26 >= 511 )
                    _report_rangecheckfailure();
                  DestinationString[v26] = 0;
                }
                if ( !v7 || !v10 )
                  goto LABEL_24;
                if ( v6 <= v10 )
                {
                  v14 = DestinationString;
                  goto LABEL_23;
                }
                goto LABEL_73;
              }
              if ( v27 )
              {
                if ( (unsigned __int64)DestinationStringLength >= 0x203 )
                  goto LABEL_28;
                v25 = DestinationStringLength + 1;
                if ( (unsigned __int64)(2LL * DestinationStringLength) >= 0x406 )
                  _report_rangecheckfailure();
                Src[DestinationStringLength] = 0;
              }
              if ( v7 && v10 )
              {
                if ( v25 > v10 )
                {
LABEL_73:
                  result = 3221225507LL;
                  goto LABEL_74;
                }
                memmove(v7, Src, 2LL * v25);
              }
              *a5 = v25;
              return 0LL;
            }
            DestinationStringLength = v17;
            v21 = RtlNormalizeString(
                    (((unsigned __int8)v31 ^ 1) << 8) + 13,
                    &a2[v15],
                    v8 - v15,
                    v16,
                    &DestinationStringLength);
            v20 = v21;
            if ( v21 >= 0 && DestinationStringLength )
            {
              v6 += DestinationStringLength;
              goto LABEL_47;
            }
            if ( !v21 || v21 == -1073741789 || v21 == -1073740009 )
              goto LABEL_41;
            v22 = DestinationStringLength <= 0;
            goto LABEL_40;
          }
          if ( RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength) >= 0 )
          {
            v11 = DestinationStringLength != 0;
            v8 = pcchLength + 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
