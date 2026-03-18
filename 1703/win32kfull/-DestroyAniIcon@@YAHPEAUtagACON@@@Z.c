/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C010CEF0
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00450D4 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  int i; // edi
  struct tagCURSOR *v3; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v3 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v3 )
        DestroyCursor(v3, 0LL);
    }
    Win32FreePool(*((_QWORD *)a1 + 12));
  }
  return 1LL;
}
