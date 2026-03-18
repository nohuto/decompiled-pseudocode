/*
 * XREFs of CleanupIAMAccess @ 0x1C00D5CB0
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxSetShellWindow @ 0x1C00D5AE8 (xxxSetShellWindow.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     FreeDesktop @ 0x1C0123240 (FreeDesktop.c)
 * Callees:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D5D2C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupIAMAccess(struct tagDESKTOP *a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 i; // rbx
  __int64 j; // rdi
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *Blink; // rdx

  Flink = gIAMThreadList.Flink;
  while ( Flink != &gIAMThreadList )
  {
    v7 = Flink;
    Flink = Flink->Flink;
    if ( !a1 || (struct tagDESKTOP *)v7[1].Blink == a1 )
    {
      v8 = v7->Flink;
      if ( v7->Flink->Blink != v7 || (Blink = v7->Blink, Blink->Flink != v7) )
        __fastfail(3u);
      Blink->Flink = v8;
      v8->Blink = Blink;
      Win32FreePool(v7, Blink, a3);
    }
  }
  if ( a1 )
  {
    CleanupShellWindowManagement(a1);
  }
  else
  {
    for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
        CleanupShellWindowManagement((struct tagDESKTOP *)j);
    }
  }
}
