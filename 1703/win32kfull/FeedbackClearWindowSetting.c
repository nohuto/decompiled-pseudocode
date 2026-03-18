/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01B721C
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00EF3F0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1)
{
  char v1; // r10
  __int64 v2; // rdx
  int Prop; // [rsp+28h] [rbp-10h]

  Prop = GetProp(a1, gatomFeedbackSettings, 1);
  InternalSetProp(a1, v2, Prop & (unsigned int)~(65537 << v1), 5);
  return 1LL;
}
