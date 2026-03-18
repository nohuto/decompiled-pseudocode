/*
 * XREFs of ResFwpPageOutBackground @ 0x140755980
 * Callers:
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_140341A30 & 0xC00) != 0xC00 )
  {
    v0 = Src;
    if ( Src )
    {
      if ( qword_140341A80 )
      {
LABEL_9:
        _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
        BgpFwFreeMemory((__int64)v0);
        return;
      }
      BgpFwReleaseLock();
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B494742u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, Src, (unsigned int)Size);
      BgpFwAcquireLock();
      if ( v2 )
      {
        if ( qword_140341A80 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_140341A80, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
