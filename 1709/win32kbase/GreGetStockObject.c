/*
 * XREFs of GreGetStockObject @ 0x1C0048B90
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 *     bInitICM @ 0x1C01DF194 (bInitICM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0048C48 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C00F2800 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v9; // eax
  void *result; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( *(_QWORD *)(ThreadWin32Thread + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(ThreadWin32Thread);
    if ( *(_DWORD *)(v7 + 340) )
    {
      LOBYTE(v2) = *(_DWORD *)(v7 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6);
      if ( CurrentProcessWin32Process )
        v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
  }
  if ( (unsigned int)v1 > 0x11 || (v9 = 205824, !_bittest(&v9, v1)) )
  {
LABEL_11:
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v1];
  }
  if ( (v2 & 0xF) != 0 || (result = gahStockObjects96[v1]) == 0LL )
  {
    if ( (_DWORD)v1 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_11;
  }
  return result;
}
