/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0116C28
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0099668 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1, __int64 a2, __int64 a3)
{
  int i; // edi
  struct tagCURSOR *v5; // rax
  __int64 v6; // r9

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v5 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v5 )
        DestroyCursor(v5, 0LL, a3, v6);
    }
    Win32FreePool(*((_QWORD *)a1 + 12), a2, a3);
  }
  return 1LL;
}
