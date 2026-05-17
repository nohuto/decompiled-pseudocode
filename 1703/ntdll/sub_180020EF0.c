/*
 * XREFs of sub_180020EF0 @ 0x180020EF0
 * Callers:
 *     sub_180007288 @ 0x180007288 (sub_180007288.c)
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 *     sub_18001F560 @ 0x18001F560 (sub_18001F560.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_180020A2C @ 0x180020A2C (sub_180020A2C.c)
 *     sub_180020B20 @ 0x180020B20 (sub_180020B20.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 * Callees:
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

unsigned __int64 __fastcall sub_180020EF0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( (dword_180158684 & 1) != 0 )
  {
    result = sub_180100D30();
  }
  else if ( a1
         && (a1 ^ qword_18015BFA8 ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
  {
    result = 0LL;
  }
  else
  {
    result = (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  if ( !result || (*(_BYTE *)(result + 24) & 4) == 0 && a1 )
    return 0LL;
  if ( (*(_BYTE *)(result + 24) & 8) == 0 )
  {
    result += -32LL * *(unsigned __int8 *)(result + 27);
    if ( (*(_BYTE *)(result + 24) & 4) != 0
      && (*(_BYTE *)(result + 24) & 8) != 0
      && (*(_BYTE *)(result + 24) & 0x21) != 0 )
    {
      return result;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(result + 24) & 0x21) == 0
    && a2 != (result & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(result >> 5) & 0x7FFF) << 12) )
  {
    return 0LL;
  }
  return result;
}
