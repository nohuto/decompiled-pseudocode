/*
 * XREFs of sub_180075968 @ 0x180075968
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800C98F0 @ 0x1800C98F0 (sub_1800C98F0.c)
 */

unsigned __int64 __fastcall sub_180075968(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || (result = *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned int)qword_18016F4F0, a1 >= result) )
    {
      result = sub_18000EF10(a1, (__int64 *)&v5);
    }
    else
    {
      v5 = xmmword_18016F4E0;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = sub_1800C98F0(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
