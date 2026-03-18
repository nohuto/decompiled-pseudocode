/*
 * XREFs of KeGetBugMessageResourceEntry @ 0x140206174
 * Callers:
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x1400DD6A0 (RtlFindMessageInTable.c)
 */

__int64 __fastcall KeGetBugMessageResourceEntry(unsigned int a1)
{
  int MessageInTable; // eax
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  MessageInTable = RtlFindMessageInTable((int *)KiBugCodeMessages, a1, &v4);
  v2 = v4;
  if ( MessageInTable < 0 )
    return 0LL;
  return v2;
}
