/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C008E704
 * Callers:
 *     UnmapDesktop @ 0x1C008E480 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C0123240 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  int v5; // ebp
  _QWORD *DesktopView; // rdi
  __int64 v7; // r8
  _QWORD *v8; // rdx
  _QWORD *i; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    if ( ProcessWin32Process )
    {
      if ( (unsigned int)PsGetProcessSessionId(PROCESS) == *(_DWORD *)a2 )
      {
        v5 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v5 = 1;
      }
      DesktopView = (_QWORD *)GetDesktopView(ProcessWin32Process, a2);
      if ( DesktopView )
      {
        PsGetProcessSessionId(PROCESS);
        MmUnmapViewOfSection(PROCESS, DesktopView[2]);
        v8 = (_QWORD *)(ProcessWin32Process + 672);
        for ( i = *(_QWORD **)(ProcessWin32Process + 672); i && i != DesktopView; i = (_QWORD *)*i )
          v8 = i;
        *v8 = *DesktopView;
        Win32FreePool(DesktopView, v8, v7);
      }
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
