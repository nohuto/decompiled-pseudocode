/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C0055CD4
 * Callers:
 *     FreeThreadsWindowHooks @ 0x1C0054220 (FreeThreadsWindowHooks.c)
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkHook(struct tagHOOK *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r9
  struct tagHOOK **i; // rcx
  struct tagHOOK *v8; // rax
  struct tagHOOK *v9; // rax

  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v4 = *((_DWORD *)a1 + 12) + 1;
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 440LL) + 32LL;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( !v2 )
      return;
    v3 = *((_DWORD *)a1 + 12) + 1;
    *((_QWORD *)a1 + 9) = 0LL;
    v4 = v3;
    v5 = v2 + 880;
  }
  v6 = 8 * v4;
  for ( i = (struct tagHOOK **)(v6 + v5); ; i = (struct tagHOOK **)((char *)v8 + 40) )
  {
    v8 = *i;
    if ( *i == a1 )
      break;
    if ( !v8 )
      goto LABEL_12;
  }
  if ( v8 )
    goto LABEL_7;
LABEL_12:
  for ( i = (struct tagHOOK **)(v6 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 32LL);
        ;
        i = (struct tagHOOK **)((char *)v9 + 40) )
  {
    v9 = *i;
    if ( *i == a1 || !v9 )
      break;
  }
LABEL_7:
  *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  if ( *((_QWORD *)a1 + 10) )
    UnlockObjectAssignment();
}
