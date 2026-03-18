/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01BC58C
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C009CBA0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // r11
  int Prop; // [rsp+28h] [rbp-10h]

  v1 = (unsigned __int16)gatomFeedbackSettings;
  Prop = GetProp(a1, gatomFeedbackSettings, 1);
  InternalSetProp(a1, v1, Prop & (unsigned int)~(65537 << v2), 5);
  return 1LL;
}
