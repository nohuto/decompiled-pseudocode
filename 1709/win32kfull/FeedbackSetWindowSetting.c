/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C009CB10
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C009CBA0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v5; // r8d
  char v6; // r11
  int v7; // r9d
  __int64 v8; // r8
  int Prop; // [rsp+28h] [rbp-10h]

  v3 = (unsigned __int16)gatomFeedbackSettings;
  Prop = GetProp(a1, gatomFeedbackSettings, 1);
  v7 = v5 << v6;
  v8 = ~(v5 << v6) & (Prop | (unsigned int)(0x10000 << v6));
  if ( a3 )
    v8 = v7 | (unsigned int)v8;
  InternalSetProp(a1, v3, v8, 5);
  return 1LL;
}
