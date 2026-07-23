/*
 * XREFs of sub_180002A00 @ 0x180002A00
 * Callers:
 *     sub_18005D768 @ 0x18005D768 (sub_18005D768.c)
 * Callees:
 *     sub_1800017D8 @ 0x1800017D8 (sub_1800017D8.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_180002A00(__int64 a1, __int128 *a2, __int64 a3, _OWORD *a4, _DWORD *a5)
{
  int v7; // eax
  _OWORD *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( !a4 )
    return 0LL;
  if ( a1 && *(_QWORD *)(a1 + 48) )
  {
    v10 = *a2;
    v7 = sub_1800017D8(a1, &v10);
    if ( v7 < 0 )
      return 0LL;
    v9 = (_OWORD *)(*(_QWORD *)(a1 + 48) + 48LL * v7);
  }
  else
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    v9 = 0LL;
  }
  if ( !v9 )
    return 0LL;
  *a4 = *v9;
  a4[1] = v9[1];
  a4[2] = v9[2];
  if ( a5 )
    *a5 = ((__int64)v9 - *(_QWORD *)(a1 + 48)) / 48;
  return 1LL;
}
