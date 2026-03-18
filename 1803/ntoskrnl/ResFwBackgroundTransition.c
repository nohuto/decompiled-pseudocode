/*
 * XREFs of ResFwBackgroundTransition @ 0x14083C338
 * Callers:
 *     BgpFwLibraryEnable @ 0x1401658A8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x14083CFC4 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ResFwpPageInBackground @ 0x14083C37C (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x14083C3FC (ResFwpPageOutBackground.c)
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
      if ( v1 == 1 && (dword_14039D7F0 & 0xC00) != 0xC00 )
      {
        v2 = Src;
        if ( Src )
        {
          _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_14039D840;
        if ( qword_14039D840 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_14039D840, 0LL);
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
