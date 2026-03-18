/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C011DA80
 * Callers:
 *     <none>
 * Callees:
 *     LockWndMenu @ 0x1C007C744 (LockWndMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  unsigned int v2; // edi
  __int64 *v3; // rcx
  __int64 SysDesktopMenu; // rbx

  v2 = 0;
  v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 64LL);
  SysDesktopMenu = *v3;
  if ( !*v3 )
    SysDesktopMenu = xxxLoadSysDesktopMenu(v3, 48LL);
  LockWndMenu(a1, (_QWORD *)(a1 + 200), SysDesktopMenu);
  LOBYTE(v2) = SysDesktopMenu != 0;
  return v2;
}
