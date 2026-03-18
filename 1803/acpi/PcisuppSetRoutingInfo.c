/*
 * XREFs of PcisuppSetRoutingInfo @ 0x1C008C99C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 *     IrqPolicyGetSubKey @ 0x1C008DDC4 (IrqPolicyGetSubKey.c)
 */

__int64 __fastcall PcisuppSetRoutingInfo(__int64 a1, __int64 a2)
{
  _BYTE *Data; // rbx
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rcx
  __int64 DataSize; // rax
  NTSTATUS v8; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF

  Data = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Flags");
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 12), 1u);
    if ( v5 < 0 )
    {
LABEL_12:
      ZwClose(KeyHandle);
      return (unsigned int)v5;
    }
    if ( *(_QWORD *)a2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a2 + 552LL);
      P = 0LL;
      v5 = ACPIAmliBuildObjectPathname(v6, (char **)&P, 0);
      if ( v5 < 0 )
        goto LABEL_10;
      Data = P;
      RtlInitUnicodeString(&DestinationString, L"LinkNode");
      DataSize = -1LL;
      do
        ++DataSize;
      while ( Data[DataSize] );
      v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"StaticVector");
      v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (PVOID)(a2 + 8), 4u);
    }
    v5 = v8;
LABEL_10:
    if ( Data )
      ExFreePoolWithTag(Data, 0);
    goto LABEL_12;
  }
  return result;
}
