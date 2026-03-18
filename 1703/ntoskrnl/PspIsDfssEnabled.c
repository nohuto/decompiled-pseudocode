/*
 * XREFs of PspIsDfssEnabled @ 0x1405A5620
 * Callers:
 *     PsBootPhaseComplete @ 0x1405A529C (PsBootPhaseComplete.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PspReadDfssConfigurationValues @ 0x140238704 (PspReadDfssConfigurationValues.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
 */

char PspIsDfssEnabled()
{
  char v0; // bl
  unsigned int v1; // r15d
  HANDLE v2; // rsi
  NTSTATUS inited; // edi
  _BYTE *v4; // r13
  NTSTATUS v5; // eax
  _BYTE *PoolWithQuotaTag; // r14
  ULONG Length; // edi
  NTSTATUS v9; // eax
  int v10; // ecx
  _BYTE *v11; // rax
  unsigned int v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  ULONG Value; // [rsp+34h] [rbp-35h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+80h] [rbp+17h] BYREF

  v0 = 0;
  v1 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    {
LABEL_7:
      if ( v0 )
LABEL_37:
        PspReadDfssConfigurationValues();
      return v0;
    }
    v2 = KeyHandle;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"EnableCpuQuota");
    if ( inited >= 0 )
    {
      v4 = KeyValueInformation;
      v5 = ZwQueryValueKey(
             v2,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      inited = v5;
      if ( v5 >= 0 )
      {
        PoolWithQuotaTag = 0LL;
      }
      else
      {
        if ( v5 != -2147483643 )
          goto LABEL_6;
        Length = ResultLength;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
        if ( !PoolWithQuotaTag )
        {
LABEL_24:
          inited = -1073741801;
          goto LABEL_6;
        }
        while ( 1 )
        {
          v4 = PoolWithQuotaTag;
          v9 = ZwQueryValueKey(
                 v2,
                 &DestinationString,
                 KeyValuePartialInformation,
                 PoolWithQuotaTag,
                 Length,
                 &ResultLength);
          inited = v9;
          if ( v9 >= 0 )
            break;
          if ( v9 != -2147483643 )
            goto LABEL_16;
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
          Length = ResultLength;
          v11 = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
          PoolWithQuotaTag = v11;
          if ( !v11 )
            goto LABEL_24;
        }
      }
      v10 = *((_DWORD *)v4 + 1);
      if ( ((v10 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v10 )
        {
          case 4:
            if ( *((_DWORD *)v4 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v4 + 3);
            }
            else
            {
              inited = -1073741820;
            }
            break;
          case 11:
            inited = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Value & 3) != 0 )
            {
              inited = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)(v4 + 12);
              DestinationString.Length = *((_WORD *)v4 + 4);
              DestinationString.MaximumLength = *((_WORD *)v4 + 4);
              inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
            }
            break;
          default:
            inited = -1073741788;
            break;
        }
      }
      else if ( v10 == 4 )
      {
        ResultLength = *((_DWORD *)v4 + 2);
        v12 = *((_DWORD *)v4 + 2);
        if ( v12 > 4 )
          inited = -2147483643;
        else
          memmove(&Value, v4 + 12, v12);
      }
      else
      {
        inited = -1073741788;
      }
LABEL_16:
      if ( PoolWithQuotaTag )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
    }
LABEL_6:
    ZwClose(KeyHandle);
    if ( inited < 0 )
      goto LABEL_7;
    if ( !Value )
      return 0;
    ++v1;
    v0 = 1;
    if ( v1 >= 2 )
      goto LABEL_37;
  }
}
