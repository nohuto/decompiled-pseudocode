/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C001B568
 * Callers:
 *     UnmapDesktop @ 0x1C001B2D0 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C0119800 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C001B650 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  int v5; // ebp
  _QWORD *DesktopView; // rdi
  _QWORD *v7; // rdx
  _QWORD *i; // rcx
  _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

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
        v7 = (_QWORD *)(ProcessWin32Process + 664);
        for ( i = *(_QWORD **)(ProcessWin32Process + 664); i && i != DesktopView; i = (_QWORD *)*i )
          v7 = i;
        *v7 = *DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
