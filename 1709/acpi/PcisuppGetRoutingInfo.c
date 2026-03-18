/*
 * XREFs of PcisuppGetRoutingInfo @ 0x1C008ADE8
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     IrqPolicyGetSubKey @ 0x1C0087B6C (IrqPolicyGetSubKey.c)
 *     OSGetRegistryValue @ 0x1C008AF4C (OSGetRegistryValue.c)
 *     LinkNodeFindByName @ 0x1C00A7F48 (LinkNodeFindByName.c)
 */

NTSTATUS __fastcall PcisuppGetRoutingInfo(struct _DEVICE_OBJECT *a1, _OWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // edi
  PVOID P; // [rsp+30h] [rbp-89h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  __int128 v8; // [rsp+48h] [rbp-71h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp-49h] BYREF
  int v11; // [rsp+74h] [rbp-45h]
  unsigned int v12; // [rsp+78h] [rbp-41h]
  _BYTE v13[116]; // [rsp+7Ch] [rbp-3Dh] BYREF

  ResultLength = 0;
  P = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1u, &KeyHandle);
  if ( result >= 0 )
  {
    BYTE12(v8) = 0;
    if ( (int)OSGetRegistryValue(KeyHandle) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
        BYTE12(v8) = *((_BYTE *)P + 8);
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    RtlInitUnicodeString(&DestinationString, L"LinkNode");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x78u,
           &ResultLength) >= 0
      && v11 == 3
      && ResultLength < 0x78
      && v12 + 12 < 0x78 )
    {
      if ( v12 > 0x6B )
      {
        v4 = -1073741789;
        goto LABEL_5;
      }
      v13[v12] = 0;
      v4 = LinkNodeFindByName(v13, &P);
      if ( v4 < 0 )
        goto LABEL_5;
      DWORD2(v8) = 0;
      *(_QWORD *)&v8 = P;
    }
    else
    {
      *(_QWORD *)&v8 = 0LL;
      v4 = OSGetRegistryValue(KeyHandle);
      if ( v4 < 0 )
      {
LABEL_5:
        ZwClose(KeyHandle);
        return v4;
      }
      if ( *((_DWORD *)P + 1) )
      {
        if ( *(_DWORD *)P == 4 )
          DWORD2(v8) = *((_DWORD *)P + 2);
      }
    }
    *a2 = v8;
    goto LABEL_5;
  }
  return result;
}
