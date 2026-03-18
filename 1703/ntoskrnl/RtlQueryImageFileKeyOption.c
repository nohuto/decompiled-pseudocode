/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1404497B8
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x140238704 (PspReadDfssConfigurationValues.c)
 *     PspDetectComplusILImage @ 0x1404494A4 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x140449578 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1404495D0 (PspReadIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     SepIsImageInMinTcbList @ 0x1404F70A4 (SepIsImageInMinTcbList.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1405A5544 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
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
  int v18; // ecx
  unsigned int v19; // edi
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
      v19 = *((_DWORD *)v11 + 2);
      if ( v19 > a5 )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_49;
      }
      a3 = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v18 = *((_DWORD *)v11 + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      v19 = 4;
      if ( v18 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v11 + 3);
LABEL_23:
              if ( v23 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
                *v23 = v19;
              goto LABEL_11;
            }
            goto LABEL_49;
          }
          goto LABEL_37;
        }
LABEL_57:
        v12 = -1073741788;
        goto LABEL_11;
      }
      if ( v18 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
          {
            ResultLength = 8;
            v19 = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v11 + 12);
              goto LABEL_23;
            }
LABEL_49:
            v12 = -2147483643;
            goto LABEL_23;
          }
          goto LABEL_37;
        }
        goto LABEL_57;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_43;
      }
      if ( a3 == 4 )
      {
        if ( v10 != 4 )
        {
LABEL_37:
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
          goto LABEL_49;
        DestinationString.Buffer = (wchar_t *)(v11 + 12);
        DestinationString.Length = *((_WORD *)v11 + 4);
        DestinationString.MaximumLength = *((_WORD *)v11 + 4);
        v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
LABEL_43:
        v19 = ResultLength;
        goto LABEL_23;
      }
      v19 = *((_DWORD *)v11 + 2);
      ResultLength = v19;
      if ( v19 > v10 )
        goto LABEL_49;
      v20 = v19;
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_57;
      v19 = *((_DWORD *)v11 + 2);
      ResultLength = v19;
      if ( !a4 || *((_DWORD *)v11 + 2) > v10 )
        goto LABEL_49;
      v20 = *((unsigned int *)v11 + 2);
    }
    memmove(a4, v11 + 12, v20);
    goto LABEL_23;
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
