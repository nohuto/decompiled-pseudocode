/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C00EF518
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00EF3F0 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  char v3; // r10
  int v4; // r9d
  __int64 v5; // r8
  int v6; // r11d
  int Prop; // [rsp+28h] [rbp-10h]

  Prop = GetProp(a1, gatomFeedbackSettings, 1);
  v4 = v2 << v3;
  v5 = ~(v2 << v3) & (Prop | (unsigned int)(0x10000 << v3));
  if ( v6 )
    v5 = v4 | (unsigned int)v5;
  InternalSetProp(a1, v1, v5, 5);
  return 1LL;
}
