/*
 * XREFs of ResFwpPageInBackground @ 0x140755F30
 * Callers:
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

void ResFwpPageInBackground()
{
  void *Memory; // rbx

  if ( (dword_140341A30 & 0xC00) != 0xC00 && (dword_140341A30 & 0x100000) == 0 )
  {
    if ( qword_140341A80 )
    {
      Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(Memory, qword_140341A80, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( Src )
          BgpFwFreeMemory((__int64)Memory);
        else
          _InterlockedExchange64((volatile __int64 *)&Src, (__int64)Memory);
      }
    }
  }
}
