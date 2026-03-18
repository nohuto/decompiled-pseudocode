/*
 * XREFs of ResFwpPageInBackground @ 0x14083C37C
 * Callers:
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_14039D7F0 & 0xC00) != 0xC00 && (dword_14039D7F0 & 0x100000) == 0 )
  {
    if ( qword_14039D840 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_14039D840, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( Src )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&Src, (__int64)Memory);
      }
    }
  }
}
