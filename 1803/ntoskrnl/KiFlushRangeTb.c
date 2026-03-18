/*
 * XREFs of KiFlushRangeTb @ 0x1401621F0
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char *__fastcall KiFlushRangeTb(unsigned __int64 a1, char a2)
{
  char *result; // rax
  unsigned __int64 v4; // r8
  __int128 v5; // [rsp+0h] [rbp-38h]
  __int128 v6; // [rsp+10h] [rbp-28h]

  result = (char *)a1;
  _R11D = 0;
  if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
  {
    *(_QWORD *)&v5 = 1LL;
    *((_QWORD *)&v5 + 1) = a1;
    __asm { invpcid r11d, [rsp+38h+var_38] }
  }
  __invlpg((void *)a1);
  v4 = a1 & 0x3FF;
  if ( (a1 & 0x3FF) != 0 )
  {
    do
    {
      result += 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
      if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
      {
        *(_QWORD *)&v6 = 1LL;
        *((_QWORD *)&v6 + 1) = result;
        __asm { invpcid r11d, [rsp+38h+var_28] }
      }
      __invlpg(result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
