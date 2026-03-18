/*
 * XREFs of ResFwBackgroundTransition @ 0x1407D0BC4
 * Callers:
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x1407D0B10 (ResFwpPageOutBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx
  __int64 Memory; // rax
  void *v5; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_14035A1B0 & 0xC00) != 0xC00 )
      {
        v2 = Src;
        if ( Src )
        {
          _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_14035A200;
        if ( qword_14035A200 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_14035A200, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else if ( (dword_14035A1B0 & 0xC00) != 0xC00 && (dword_14035A1B0 & 0x100000) == 0 )
  {
    if ( qword_14035A200 )
    {
      Memory = BgpFwAllocateMemory((unsigned int)Size);
      v5 = (void *)Memory;
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(v5, qword_14035A200, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( Src )
          BgpFwFreeMemory((__int64)v5);
        else
          _InterlockedExchange64((volatile __int64 *)&Src, (__int64)v5);
      }
    }
  }
}
