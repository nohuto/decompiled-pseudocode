/*
 * XREFs of sub_18010C758 @ 0x18010C758
 * Callers:
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwCreateMutant @ 0x1800A6870 (ZwCreateMutant.c)
 *     sub_18010B8A0 @ 0x18010B8A0 (sub_18010B8A0.c)
 */

HANDLE __fastcall sub_18010C758(_OBJECT_ATTRIBUTES *a1, __int64 a2, _UNICODE_STRING *p_DestinationString)
{
  NTSTATUS v3; // eax
  LONG v4; // ecx
  LONG v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF
  POBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+8h] BYREF
  HANDLE MutantHandle; // [rsp+80h] [rbp+18h] BYREF

  ObjectAttributes = a1;
  if ( p_DestinationString )
  {
    RtlInitUnicodeString(&DestinationString, &p_DestinationString->Length);
    p_DestinationString = &DestinationString;
  }
  v3 = sub_18010B8A0((__int64)v8, 0LL, (__int64)p_DestinationString, &ObjectAttributes);
  if ( v3 < 0 || (v3 = ZwCreateMutant(&MutantHandle, 0x1F0001u, ObjectAttributes, 1u), v3 < 0) )
  {
    v6 = RtlNtStatusToDosError(v3);
    RtlSetLastWin32Error(v6);
    return 0LL;
  }
  else
  {
    if ( v3 == 0x40000000 )
      v4 = 183;
    else
      v4 = 0;
    RtlSetLastWin32Error(v4);
    return MutantHandle;
  }
}
