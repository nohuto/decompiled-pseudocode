/*
 * XREFs of sub_14053AD6C @ 0x14053AD6C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140489EA8 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14053AB8C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14050F54C @ 0x14050F54C (sub_14050F54C.c)
 *     WbAddLookupEntryEx @ 0x14053ADCC (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_14053AD6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_14050F54C(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}
