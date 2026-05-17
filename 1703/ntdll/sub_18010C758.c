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

__int64 __fastcall sub_18010C758(__int64 a1, __int64 a2, UNICODE_STRING *p_DestinationString)
{
  NTSTATUS Mutant; // eax
  unsigned int v4; // ecx
  ULONG v6; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h]

  v9 = a1;
  if ( p_DestinationString )
  {
    RtlInitUnicodeString(&DestinationString, &p_DestinationString->Length);
    p_DestinationString = &DestinationString;
  }
  Mutant = sub_18010B8A0((__int64)v8, 0LL, (__int64)p_DestinationString, &v9);
  if ( Mutant < 0 || (Mutant = ZwCreateMutant(), Mutant < 0) )
  {
    v6 = RtlNtStatusToDosError(Mutant);
    RtlSetLastWin32Error(v6);
    return 0LL;
  }
  else
  {
    if ( Mutant == 0x40000000 )
      v4 = 183;
    else
      v4 = 0;
    RtlSetLastWin32Error(v4);
    return v10;
  }
}
