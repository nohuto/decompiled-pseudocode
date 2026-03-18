/*
 * XREFs of ResFwpPageOutBackground @ 0x1407D0B10
 * Callers:
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void ResFwpPageOutBackground()
{
  void *v0; // rsi
  PVOID PoolWithTag; // rax
  void *v2; // rdi

  if ( (dword_14035A1B0 & 0xC00) != 0xC00 )
  {
    v0 = Src;
    if ( Src )
    {
      if ( qword_14035A200 )
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
        if ( qword_14035A200 )
        {
          BgpFwReleaseLock();
          ExFreePoolWithTag(v2, 0x4B494742u);
          BgpFwAcquireLock();
          return;
        }
        _InterlockedExchange64((volatile __int64 *)&qword_14035A200, (__int64)v2);
        goto LABEL_9;
      }
    }
  }
}
