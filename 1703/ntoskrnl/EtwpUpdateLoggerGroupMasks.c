/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x140434B6C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 *     EtwpGetFlagExtension @ 0x14054F814 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  _WORD *FlagExtension; // rax
  int v6; // edx
  _DWORD v7[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v7);
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a2, 1LL);
  if ( !FlagExtension )
  {
    v6 = v7[0];
    if ( *(int *)(a2 + 72) >= 0 )
      v6 = *(_DWORD *)(a2 + 72);
    v7[0] = v6;
    return EtwpUpdateGroupMasks(a1, v7);
  }
  if ( (unsigned __int16)(4 * *FlagExtension - 4) <= 0x20u )
  {
    memmove(v7, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4));
    return EtwpUpdateGroupMasks(a1, v7);
  }
  return 3221225485LL;
}
