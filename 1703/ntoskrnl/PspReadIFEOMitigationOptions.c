/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x1404A0D20
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspValidateMitigationOptions @ 0x14044C848 (PspValidateMitigationOptions.c)
 */

void __fastcall PspReadIFEOMitigationOptions(__int64 a1, UNICODE_STRING *a2)
{
  void *v3; // rbx
  NTSTATUS inited; // esi
  ULONG Length; // esi
  _DWORD *PoolWithQuotaTag; // rbp
  NTSTATUS v7; // eax
  UNICODE_STRING v8; // xmm6
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned int v11; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-64h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING v15; // [rsp+50h] [rbp-48h] BYREF

  if ( !a1 )
    return;
  v3 = *(void **)(a1 + 192);
  if ( !v3 )
    return;
  inited = RtlInitUnicodeStringEx(&DestinationString, L"MitigationOptions");
  if ( inited >= 0 )
  {
    Length = 28;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x1CuLL, 0x6B497452u);
    if ( !PoolWithQuotaTag )
      return;
    while ( 1 )
    {
      v7 = ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, PoolWithQuotaTag, Length, &ResultLength);
      inited = v7;
      if ( v7 >= 0 )
        break;
      if ( v7 != -2147483643 )
        goto LABEL_8;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      Length = ResultLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
      if ( !PoolWithQuotaTag )
        return;
    }
    v9 = PoolWithQuotaTag[2];
    if ( v9 > 0x10 )
    {
      ResultLength = PoolWithQuotaTag[2];
    }
    else
    {
      v10 = PoolWithQuotaTag[1];
      if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v10 )
        {
          case 4:
            if ( v9 == 4 )
            {
              ResultLength = 4;
              v9 = 4;
              *(_DWORD *)&v15.Length = PoolWithQuotaTag[3];
LABEL_19:
              v13 = v9;
LABEL_8:
              ExFreePoolWithTag(PoolWithQuotaTag, 0);
              goto LABEL_9;
            }
            break;
          case 11:
            if ( v9 == 8 )
            {
              ResultLength = 8;
              *(_QWORD *)&v15.Length = *(_QWORD *)(PoolWithQuotaTag + 3);
              v13 = 8;
              goto LABEL_8;
            }
            break;
          case 1:
            ResultLength = PoolWithQuotaTag[2];
            memmove(&v15, PoolWithQuotaTag + 3, ResultLength);
            goto LABEL_19;
          default:
            inited = -1073741788;
            goto LABEL_8;
        }
        inited = -1073741820;
        goto LABEL_8;
      }
      ResultLength = PoolWithQuotaTag[2];
      v11 = PoolWithQuotaTag[2];
      if ( v11 <= v9 )
      {
        memmove(&v15, PoolWithQuotaTag + 3, v11);
        goto LABEL_19;
      }
    }
    inited = -2147483643;
    goto LABEL_19;
  }
LABEL_9:
  if ( inited >= 0 )
  {
    memset((char *)&v15 + v13, 0, 16LL - v13);
    v8 = v15;
    DestinationString = v15;
    if ( (int)PspValidateMitigationOptions((__m128i *)&DestinationString, 1) >= 0 )
      *a2 = v8;
  }
}
