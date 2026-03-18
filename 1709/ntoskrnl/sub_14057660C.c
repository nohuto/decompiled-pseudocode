/*
 * XREFs of sub_14057660C @ 0x14057660C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14057642C (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_140501EA0 @ 0x140501EA0 (sub_140501EA0.c)
 *     WbAddLookupEntryEx @ 0x14057666C (WbAddLookupEntryEx.c)
 */

__int64 __fastcall sub_14057660C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_140501EA0(a1, a4, a5, 0LL, &a6);
  return WbAddLookupEntryEx(a1, a2);
}
