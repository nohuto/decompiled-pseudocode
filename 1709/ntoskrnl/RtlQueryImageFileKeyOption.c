/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x140584CF0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14024D7C0 (PspReadDfssConfigurationValues.c)
 *     PspReadIFEOPerfOptions @ 0x14044CA90 (PspReadIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspReadOptionsMapFromIFEO @ 0x14048C20C (PspReadOptionsMapFromIFEO.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     SepIsImageInMinTcbList @ 0x140580228 (SepIsImageInMinTcbList.c)
 *     PspDetectComplusILImage @ 0x14058F588 (PspDetectComplusILImage.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1405C1EC4 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140566A60 (RtlUnicodeStringToInteger.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        unsigned int *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // r14d
  _BYTE *v11; // rsi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  SIZE_T i; // rdx
  PVOID PoolWithQuotaTag; // rax
  void *v16; // r13
  NTSTATUS v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  size_t v20; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-28h]
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-20h] BYREF

  v23 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 < 8 )
  {
    v11 = KeyValueInformation;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    v12 = result;
    if ( result < 0 )
    {
      if ( result != -2147483643 )
        return result;
      Length = ResultLength;
      goto LABEL_7;
    }
    v16 = 0LL;
LABEL_15:
    if ( !a3 )
    {
      v18 = *((_DWORD *)v11 + 2);
      if ( v18 > a5 )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_37;
      }
      a3 = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v19 = *((_DWORD *)v11 + 1);
    if ( ((v19 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v19 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v11 + 3);
              goto LABEL_26;
            }
LABEL_37:
            v12 = -2147483643;
            goto LABEL_26;
          }
          goto LABEL_36;
        }
        goto LABEL_57;
      }
      if ( v19 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
          {
            ResultLength = 8;
            v18 = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v11 + 12);
LABEL_26:
              if ( v23 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
                *v23 = v18;
              goto LABEL_11;
            }
            goto LABEL_37;
          }
          goto LABEL_36;
        }
LABEL_57:
        v12 = -1073741788;
        goto LABEL_11;
      }
      if ( v19 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_43;
      }
      if ( a3 == 4 )
      {
        if ( v10 != 4 )
        {
LABEL_36:
          v12 = -1073741820;
LABEL_11:
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          return v12;
        }
        if ( ((unsigned __int8)a4 & 3) != 0 )
        {
          v12 = -2147483646;
          goto LABEL_11;
        }
        ResultLength = 4;
        if ( !a4 )
          goto LABEL_37;
        DestinationString.Buffer = (wchar_t *)(v11 + 12);
        DestinationString.Length = *((_WORD *)v11 + 4);
        DestinationString.MaximumLength = *((_WORD *)v11 + 4);
        v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
LABEL_43:
        v18 = ResultLength;
        goto LABEL_26;
      }
      v18 = *((_DWORD *)v11 + 2);
      ResultLength = v18;
      if ( v18 > v10 )
        goto LABEL_37;
      v20 = v18;
    }
    else
    {
      if ( a3 != v19 )
        goto LABEL_57;
      v18 = *((_DWORD *)v11 + 2);
      ResultLength = v18;
      if ( !a4 || *((_DWORD *)v11 + 2) > v10 )
        goto LABEL_37;
      v20 = *((unsigned int *)v11 + 2);
    }
    memmove(a4, v11 + 12, v20);
    goto LABEL_26;
  }
  Length = a5 + 12;
LABEL_7:
  for ( i = Length; ; i = ResultLength )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, i, 0x6B497452u);
    v16 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    v11 = PoolWithQuotaTag;
    v17 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    v12 = v17;
    if ( v17 >= 0 )
      goto LABEL_15;
    if ( v17 != -2147483643 )
      goto LABEL_11;
    ExFreePoolWithTag(v16, 0);
    Length = ResultLength;
  }
  return -1073741801;
}
