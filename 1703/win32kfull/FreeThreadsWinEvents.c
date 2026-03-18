/*
 * XREFs of FreeThreadsWinEvents @ 0x1C00D8C90
 * Callers:
 *     <none>
 * Callees:
 *     DestroyNotify @ 0x1C00D8D34 (DestroyNotify.c)
 *     DestroyEventHook @ 0x1C00D8F70 (DestroyEventHook.c)
 */

__int64 __fastcall FreeThreadsWinEvents(struct tagNOTIFY *a1)
{
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v3; // rcx
  unsigned int v4; // esi
  struct tagNOTIFY **v5; // rbx
  struct tagNOTIFY *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = gpPendingNotifies;
  v4 = CurrentThreadId;
  if ( gpPendingNotifies )
  {
    do
    {
      v5 = (struct tagNOTIFY **)*v3;
      if ( *((_DWORD *)v3 + 10) == v4 && !v3[7]
        || (v6 = v3[7], v6 == a1)
        || *((struct tagNOTIFY **)v3[1] + 2) == a1 && !v6 )
      {
        if ( ((_DWORD)v3[6] & 4) == 0 )
          DestroyNotify(v3);
      }
      v3 = v5;
    }
    while ( v5 );
  }
  result = gpWinEventHooks;
  v8 = gpWinEventHooks;
  if ( gpWinEventHooks )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( *(struct tagNOTIFY **)(v8 + 16) == a1 )
        result = DestroyEventHook();
      v8 = v9;
    }
    while ( v9 );
  }
  return result;
}
