/*
 * XREFs of sub_1404412D8 @ 0x1404412D8
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1404410F4 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 * Callees:
 *     sub_14053B960 @ 0x14053B960 (sub_14053B960.c)
 */

__int64 __fastcall sub_1404412D8(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  if ( a6 == -1 )
    sub_14053B960(a1, a4, a5, 0, (__int64)&a6);
  return WbAddLookupEntryEx(a1, a2);
}
