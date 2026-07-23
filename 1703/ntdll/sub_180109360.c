/*
 * XREFs of sub_180109360 @ 0x180109360
 * Callers:
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180109490 @ 0x180109490 (sub_180109490.c)
 *     sub_18010E1E0 @ 0x18010E1E0 (sub_18010E1E0.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 */

__int64 __fastcall sub_180109360(__int64 a1, __int64 a2)
{
  PVOID v2; // rbx
  int v3; // ebp
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax

  v2 = qword_18015A258;
  v3 = 0;
  if ( !qword_18015A258 || !a2 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
  if ( !*((_QWORD *)qword_18015A258 + 1) )
  {
    if ( !(unsigned int)sub_180109490(qword_18015A258) )
      return 0LL;
    v3 = 1;
  }
  v5 = *((_QWORD *)v2 + 1);
  if ( !v5 )
    return 0LL;
  v6 = sub_18010E1E0(v5, a2);
  if ( !v6 && !v3 )
  {
    v7 = sub_18010E330(*((PVOID *)v2 + 1));
    *((_QWORD *)v2 + 1) = v7;
    if ( v7 )
      return (unsigned int)sub_18010E1E0(v7, a2);
  }
  return v6;
}
