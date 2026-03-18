/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D5D2C
 * Callers:
 *     CleanupIAMAccess @ 0x1C00D5CB0 (CleanupIAMAccess.c)
 * Callees:
 *     SetShellWndManagementWindow @ 0x1C00D6330 (SetShellWndManagementWindow.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  struct tagDESKTOP *v2; // rdi
  struct tagDESKTOP *v3; // rsi
  __int64 v4; // rax
  struct tagDESKTOP **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( *((_QWORD *)a1 + 36) )
  {
    *((_QWORD *)a1 + 36) = 0LL;
    HMAssignmentUnlock((char *)a1 + 296);
    HMAssignmentUnlock((char *)a1 + 304);
    v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 39);
    if ( v2 )
    {
      while ( v2 != (struct tagDESKTOP *)((char *)a1 + 312) )
      {
        v3 = v2;
        v2 = *(struct tagDESKTOP **)v2;
        v4 = *(_QWORD *)v3;
        if ( *(struct tagDESKTOP **)(*(_QWORD *)v3 + 8LL) != v3
          || (v5 = (struct tagDESKTOP **)*((_QWORD *)v3 + 1), *v5 != v3) )
        {
          __fastfail(3u);
        }
        *v5 = (struct tagDESKTOP *)v4;
        *(_QWORD *)(v4 + 8) = v5;
        HMAssignmentUnlock((char *)v3 + 16);
        Win32FreePool(v3, v6, v7);
      }
    }
    SetShellWndManagementWindow(a1, 0LL);
  }
}
