/*
 * XREFs of ResFwBackgroundTransition @ 0x140755EE8
 * Callers:
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ResFwpPageInBackground @ 0x140755F30 (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140341A30 & 0xC00) != 0xC00 )
      {
        v2 = Src;
        if ( Src )
        {
          _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140341A80;
        if ( qword_140341A80 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140341A80, 0LL);
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
  else
  {
    ResFwpPageInBackground();
  }
}
