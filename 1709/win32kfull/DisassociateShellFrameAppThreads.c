/*
 * XREFs of DisassociateShellFrameAppThreads @ 0x1C00C47D0
 * Callers:
 *     PatchThreadWindows @ 0x1C00C46C0 (PatchThreadWindows.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00C47F8 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

struct _THREADSASSOCIATION *__fastcall DisassociateShellFrameAppThreads(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  struct _THREADSASSOCIATION **v5; // rcx

  while ( 1 )
  {
    result = FindShellFrameAppThreadsAssociation(a1);
    if ( !result )
      break;
    v4 = *(_QWORD *)result;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)result + 8LL) != result
      || (v5 = (struct _THREADSASSOCIATION **)*((_QWORD *)result + 1), *v5 != result) )
    {
      __fastfail(3u);
    }
    *v5 = (struct _THREADSASSOCIATION *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    Win32FreePool(result, v4, v3);
  }
  return result;
}
