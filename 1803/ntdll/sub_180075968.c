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

char __fastcall sub_180075968(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || (v4 = *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned int)qword_18016F4F0, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = sub_18000EF10(BaseAddress, (__int64)&v6);
    }
    else
    {
      v6 = xmmword_18016F4E0;
    }
    if ( *((PVOID *)&v6 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = sub_1800C98F0(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
