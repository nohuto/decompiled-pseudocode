/*
 * XREFs of FreeHook @ 0x1C00D9150
 * Callers:
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     FreeThreadsWindowHooks @ 0x1C00D8DD0 (FreeThreadsWindowHooks.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D9098 (zzzUnhookWindowsHookEx.c)
 * Callees:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00D91B4 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D9254 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     RemoveHmodDependency @ 0x1C00D9358 (RemoveHmodDependency.c)
 */

__int64 __fastcall FreeHook(struct tagHOOK *a1)
{
  int v1; // eax
  struct tagTHREADINFO *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = *((_DWORD *)a1 + 16);
  if ( (v1 & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 16) = v1 | 0x80;
    v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 9);
    if ( !v3 )
      v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    CheckWHFBits(v3, *((_DWORD *)a1 + 12));
  }
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    UnlinkHook(a1);
    v5 = *((unsigned int *)a1 + 17);
    if ( (int)v5 >= 0 )
      RemoveHmodDependency(v5);
    return HMFreeObject(a1);
  }
  return result;
}
