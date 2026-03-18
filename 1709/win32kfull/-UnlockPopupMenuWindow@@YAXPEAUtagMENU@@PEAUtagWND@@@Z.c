/*
 * XREFs of ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0204B48
 * Callers:
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C0205C6C (UnlockPopupMenu.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockPopupMenuWindow(struct tagMENU *a1, struct tagWND *a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 11);
    if ( v2 )
    {
      if ( a1 != *(struct tagMENU **)(v2 + 208)
        && a1 != *(struct tagMENU **)(v2 + 200)
        && (a2 == (struct tagWND *)v2 || *(char *)(v2 + 59) < 0) )
      {
        HMAssignmentUnlock((char *)a1 + 88);
      }
    }
  }
}
