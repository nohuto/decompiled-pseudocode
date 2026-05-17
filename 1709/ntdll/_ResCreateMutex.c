/*
 * XREFs of _ResCreateMutex @ 0x18010F750
 * Callers:
 *     ResCRequestInitMutex @ 0x18010ED70 (ResCRequestInitMutex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     NtCreateMutant @ 0x1800A1650 (NtCreateMutant.c)
 *     BaseFormatObjectAttributes @ 0x18010E7DC (BaseFormatObjectAttributes.c)
 */

__int64 __fastcall ResCreateMutex(__int64 a1, __int64 a2, UNICODE_STRING *p_DestinationString)
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
  Mutant = BaseFormatObjectAttributes((__int64)v8, 0LL, (__int64)p_DestinationString, &v9);
  if ( Mutant < 0 || (Mutant = NtCreateMutant(), Mutant < 0) )
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
