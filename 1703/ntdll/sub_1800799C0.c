/*
 * XREFs of sub_1800799C0 @ 0x1800799C0
 * Callers:
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 */

unsigned __int64 __fastcall sub_1800799C0(PVOID BaseAddress)
{
  unsigned __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || (result = *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned int)qword_18016B4D0,
          (unsigned __int64)BaseAddress >= result) )
    {
      result = sub_180034A40(BaseAddress, (__int64)&v3);
    }
    else
    {
      v3 = xmmword_18016B4C0;
    }
    if ( *((PVOID *)&v3 + 1) != BaseAddress )
      __fastfail(0x18u);
  }
  return result;
}
