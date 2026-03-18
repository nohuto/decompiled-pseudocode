/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x140749BD8
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpGetFlagExtension @ 0x1404ECD34 (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  unsigned __int16 v5; // cx
  int v7; // edx
  _DWORD v8[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( a2 )
  {
    FlagExtension = EtwpGetFlagExtension(a2, 1);
    if ( FlagExtension )
    {
      v5 = 4 * *FlagExtension - 4;
      if ( v5 > 0x20u )
        return 3221225485LL;
      memmove(v8, FlagExtension + 2, v5);
    }
    else
    {
      v7 = v8[0];
      if ( *(int *)(a2 + 72) >= 0 )
        v7 = *(_DWORD *)(a2 + 72);
      v8[0] = v7;
    }
  }
  return EtwpUpdateGroupMasks(a1, (__int64)v8);
}
