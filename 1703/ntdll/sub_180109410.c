/*
 * XREFs of sub_180109410 @ 0x180109410
 * Callers:
 *     sub_1800E20D4 @ 0x1800E20D4 (sub_1800E20D4.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 */

__int64 __fastcall sub_180109410(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = qword_18015A258;
  if ( qword_18015A258
    && (v3 = *(_QWORD *)(qword_18015A258 + 16)) != 0
    && (v4 = *(_QWORD *)(v3 + 24)) != 0
    && a2 < *(_DWORD *)(v4 + 68)
    && (v5 = *(_QWORD *)(qword_18015A258 + 24)) != 0
    && (v6 = a2, *(_QWORD *)(v5 + 8LL * a2)) )
  {
    if ( (unsigned int)sub_180109C90() )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8 * v6) = 0LL;
      return 1LL;
    }
  }
  else if ( !NtCurrentTeb()->LastErrorValue )
  {
    RtlSetLastWin32Error(0x57u);
  }
  return 0LL;
}
