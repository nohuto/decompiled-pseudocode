/*
 * XREFs of ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C01991F4
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C0198548 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C019924C (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 */

struct tagQMSG *__fastcall FindNodeQueuedMessage(const struct tagPOINTERINFONODE *a1, __int64 a2, struct tagQ **a3)
{
  __int64 v5; // rax
  struct tagQ *v7; // rcx

  v5 = ValidateHwnd(*((_QWORD *)a1 + 10));
  if ( v5 && (v7 = *(struct tagQ **)(*(_QWORD *)(v5 + 16) + 384LL)) != 0LL )
    return FindNodeQueuedMessageWorker(v7, *((_QWORD *)a1 + 2), 1, a3);
  else
    return 0LL;
}
