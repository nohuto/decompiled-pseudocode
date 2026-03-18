/*
 * XREFs of PspReadIFEOPerfOptions @ 0x1404495D0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 */

void __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  _BYTE *PoolWithQuotaTag; // rdi
  _BYTE *v5; // r14
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebp
  int v8; // ecx
  ULONG Length; // ebp
  NTSTATUS v10; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  ULONG Value; // [rsp+34h] [rbp-54h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-40h] BYREF

  PoolWithQuotaTag = 0LL;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  if ( RtlInitUnicodeStringEx(&DestinationString, L"WorkingSetLimitInKB") >= 0 )
  {
    v5 = KeyValueInformation;
    v6 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147483643 )
      {
LABEL_10:
        if ( v7 >= 0 )
        {
          v12 = (unsigned __int64)Value >> 2;
          *(_DWORD *)(a2 + 4) |= 1u;
          *(_QWORD *)(a2 + 24) = v12;
        }
        return;
      }
      Length = ResultLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
      if ( !PoolWithQuotaTag )
        return;
      while ( 1 )
      {
        v5 = PoolWithQuotaTag;
        v10 = ZwQueryValueKey(
                KeyHandle,
                &DestinationString,
                KeyValuePartialInformation,
                PoolWithQuotaTag,
                Length,
                &ResultLength);
        v7 = v10;
        if ( v10 >= 0 )
          break;
        if ( v10 != -2147483643 )
          goto LABEL_20;
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
        Length = ResultLength;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
        if ( !PoolWithQuotaTag )
          return;
      }
    }
    v8 = *((_DWORD *)v5 + 1);
    if ( ((v8 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v8 )
      {
        case 4:
          if ( *((_DWORD *)v5 + 2) == 4 )
          {
            ResultLength = 4;
            Value = *((_DWORD *)v5 + 3);
          }
          else
          {
            v7 = -1073741820;
          }
          break;
        case 11:
          v7 = -1073741788;
          break;
        case 1:
          if ( ((unsigned __int8)&Value & 3) != 0 )
          {
            v7 = -2147483646;
          }
          else
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v5 + 12);
            DestinationString.Length = *((_WORD *)v5 + 4);
            DestinationString.MaximumLength = *((_WORD *)v5 + 4);
            v7 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
          }
          break;
        default:
          v7 = -1073741788;
          break;
      }
    }
    else if ( v8 == 4 )
    {
      ResultLength = *((_DWORD *)v5 + 2);
      v11 = *((_DWORD *)v5 + 2);
      if ( v11 > 4 )
        v7 = -2147483643;
      else
        memmove(&Value, v5 + 12, v11);
    }
    else
    {
      v7 = -1073741788;
    }
LABEL_20:
    if ( PoolWithQuotaTag )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
    goto LABEL_10;
  }
}
