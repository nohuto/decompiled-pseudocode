/*
 * XREFs of KiFlushCurrentTbOnly @ 0x1400ADBA4
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401ABF40 (KiSetUserTbFlushPending.c)
 */

unsigned __int64 __fastcall KiFlushCurrentTbOnly(int a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rcx
  __int128 v5; // [rsp+20h] [rbp-50h]
  __int128 v6; // [rsp+30h] [rbp-40h]
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]

  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
      if ( KiFlushPcid )
      {
        *(_QWORD *)&v5 = 2LL;
        _EAX = 1;
        __asm { invpcid eax, [rbp+var_50] }
        goto LABEL_16;
      }
      goto LABEL_8;
    }
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v6 = 2LL;
      result = 1LL;
      __asm { invpcid eax, [rbp+var_40] }
      return result;
    }
LABEL_12:
    result = __readcr3();
    __writecr3(result);
    return result;
  }
  if ( a1 && a1 <= 2 )
  {
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v7 = 2LL;
      result = 1LL;
      __asm { invpcid eax, [rbp+var_30] }
      return result;
    }
    goto LABEL_12;
  }
  if ( !KiFlushPcid )
  {
LABEL_8:
    v2 = __readcr4();
    if ( (v2 & 0x20080) != 0 )
    {
      result = v2 ^ 0x80;
      __writecr4(v2 ^ 0x80);
      __writecr4(v2);
      return result;
    }
    goto LABEL_12;
  }
  *(_QWORD *)&v8 = 2LL;
  _EAX = 1;
  __asm { invpcid eax, [rbp+var_20] }
LABEL_16:
  result = (unsigned __int64)KeGetCurrentThread();
  if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
    return KiSetUserTbFlushPending();
  return result;
}
