/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x1402BE48C
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1401868E8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WheapWorkQueueAddItem @ 0x1402BF9B4 (WheapWorkQueueAddItem.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  unsigned int v2; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi

  v2 = Src[5] + 40;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x61656857u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    v4[4] = v2;
    v4[6] = 2;
    memmove(v4 + 10, Src, (unsigned int)Src[5]);
    WheapWorkQueueAddItem(*((_QWORD *)KeGetPcr()->Prcb.WheaInfo + 2), v4);
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
