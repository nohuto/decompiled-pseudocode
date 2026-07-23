/*
 * XREFs of sub_1800017D8 @ 0x1800017D8
 * Callers:
 *     sub_180002A00 @ 0x180002A00 (sub_180002A00.c)
 * Callees:
 *     sub_18000184C @ 0x18000184C (sub_18000184C.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_1800017D8(__int64 a1, __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 || !*(_QWORD *)(a1 + 48) )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0xFFFFFFFFLL;
  }
  v6 = *a2;
  v3 = sub_18000184C(a1, &v6);
  v4 = v3;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 48) + 48LL * v3 + 44) & 1) != 0 )
    return (unsigned int)-1;
  return v4;
}
