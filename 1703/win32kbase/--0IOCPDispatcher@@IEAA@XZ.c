/*
 * XREFs of ??0IOCPDispatcher@@IEAA@XZ @ 0x1C004C764
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C008B110 (UserActivateMITInputProcessing.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::IOCPDispatcher(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  memset((char *)this + 8, 0, 0xA00uLL);
  *((_DWORD *)this + 642) = 0;
  *((_QWORD *)this + 322) = 0LL;
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)((char *)this + 2584),
    mitUserModeHandleEntryCompare,
    mitUserModeHandleEntryAlloc,
    (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  return this;
}
