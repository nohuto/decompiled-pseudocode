/*
 * XREFs of PopAdjustHiberFile @ 0x14057B6F8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x14057B45C (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x14057CF08 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopAdjustHiberFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  PopCalculateHiberFileSize(&v3, &v2);
  result = PopResizeHiberFile(v3, &v4);
  if ( (int)result >= 0 )
    byte_14034BC96 = v2;
  return result;
}
