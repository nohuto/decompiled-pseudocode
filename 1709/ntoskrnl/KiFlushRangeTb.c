/*
 * XREFs of KiFlushRangeTb @ 0x140150368
 * Callers:
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, char a2)
{
  char *v2; // r8
  int v4; // edx
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  unsigned __int64 i; // r9
  __int128 v9; // [rsp+0h] [rbp-38h]
  __int128 v10; // [rsp+10h] [rbp-28h]

  v2 = (char *)a1;
  _R11D = 0;
  v4 = (1 << a2) & 0xA;
  if ( v4 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
  {
    *(_QWORD *)&v9 = 1LL;
    *((_QWORD *)&v9 + 1) = a1;
    __asm { invpcid r11d, [rsp+38h+var_38] }
  }
  LOBYTE(CurrentThread) = 8 * ((a1 >> 10) & 3);
  v6 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v6 = i == 0 )
  {
    __invlpg(v2);
    if ( v6 )
      break;
    v2 += 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
    if ( v4 )
    {
      if ( KiFlushPcid )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread->ApcState.Process->AddressPolicy )
        {
          *(_QWORD *)&v10 = 1LL;
          *((_QWORD *)&v10 + 1) = v2;
          __asm { invpcid r11d, [rsp+38h+var_28] }
        }
      }
    }
    --i;
  }
  return (char)CurrentThread;
}
