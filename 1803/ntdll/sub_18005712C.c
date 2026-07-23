/*
 * XREFs of sub_18005712C @ 0x18005712C
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 */

void __fastcall sub_18005712C(_TP_POOL *a1)
{
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-50h] BYREF
  PTP_TIMER Timer; // [rsp+88h] [rbp+18h] BYREF

  if ( (dword_18015A43C & 0x40) != 0 )
  {
    Timer = 0LL;
    if ( a1 )
    {
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = a1;
      CallbackEnviron.Version = 3;
      CallbackEnviron.Size = 72;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_LOW;
      if ( TpAllocTimer(&Timer, sub_1800601D0, 0LL, &CallbackEnviron) >= 0 )
      {
        ::Timer = Timer;
        dword_18015D2B4 = 1;
      }
    }
  }
}
