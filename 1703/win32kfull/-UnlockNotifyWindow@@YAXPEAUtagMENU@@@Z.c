/*
 * XREFs of ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01ED5BC
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01ED5BC (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 * Callees:
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01ED5BC (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 */

void __fastcall UnlockNotifyWindow(struct tagMENU *a1)
{
  int v1; // ebx
  struct tagMENU **v3; // rdi

  v1 = *((_DWORD *)a1 + 17);
  if ( v1 )
  {
    v3 = (struct tagMENU **)(*((_QWORD *)a1 + 12) + 16LL);
    do
    {
      --v1;
      if ( *v3 )
        UnlockNotifyWindow(*v3);
      v3 += 19;
    }
    while ( v1 );
  }
  HMAssignmentUnlock((char *)a1 + 88);
}
