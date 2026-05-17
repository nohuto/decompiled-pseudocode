/*
 * XREFs of sub_18007A8C0 @ 0x18007A8C0
 * Callers:
 *     sub_18007A824 @ 0x18007A824 (sub_18007A824.c)
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 *     sub_18007AAA4 @ 0x18007AAA4 (sub_18007AAA4.c)
 *     sub_18007AB6C @ 0x18007AB6C (sub_18007AB6C.c)
 *     LdrGetDllFullName @ 0x18007AD40 (LdrGetDllFullName.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18007A8C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)(a2 + 48);
  v5 = 0;
  if ( v4 < *((_QWORD *)&xmmword_18016B4C0 + 1)
    || v4 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
  {
    sub_180034A40(v4, (__int64)&v11);
  }
  else
  {
    v11 = xmmword_18016B4C0;
    v12 = qword_18016B4D0;
  }
  v6 = *((_QWORD *)&v11 + 1);
  if ( !*((_QWORD *)&v11 + 1) )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) != 2 )
  {
    if ( *(_WORD *)(a2 + 98) < 0x8000u )
      return v5;
    *((_QWORD *)&v11 + 1) = &v13;
    WORD1(v11) = 260;
    DllFullName = LdrGetDllFullName(v6, &v11);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)sub_18007AB6C(a1, &v11, a2 + 32);
  }
  v5 = sub_18007AAA4(*((_QWORD *)&v11 + 1), 0x3FFFLL, &v11, &v10);
  if ( !v5 )
    return (unsigned int)sub_18007A9C4(a1, v11, v10);
  return v5;
}
