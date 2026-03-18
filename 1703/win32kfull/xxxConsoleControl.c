/*
 * XREFs of xxxConsoleControl @ 0x1C001B784
 * Callers:
 *     NtUserConsoleControl @ 0x1C001B670 (NtUserConsoleControl.c)
 * Callees:
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0017DDC (xxxClientFreeWindowClassExtraBytes.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001BA94 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C001BEF8 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C01E7D70 (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  void *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID v22; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v24; // rax
  __int64 CurrentProcess; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+60h] [rbp-48h] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 == 8 )
      return (unsigned int)xxxUserNotifyConsoleApplication(a2);
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 == 24 )
    {
      xxxbFullscreenSwitch(*(unsigned int *)a2, *((_QWORD *)a2 + 1));
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
      xxxSetConsoleCaretInfo(a2);
    return a3 != 24 ? 0xC000000D : 0;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v24 = ValidateHwnd(*(_QWORD *)a2);
      if ( v24 )
      {
        *(_DWORD *)(*(_QWORD *)(v24 + 16) + 764LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741811;
    v5 = ObReferenceObjectByHandle(*(HANDLE *)a2, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    if ( (v5 & 0x80000000) == 0 )
    {
      v22 = Object;
      if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      {
        ProcessWin32Process = PsGetProcessWin32Process(v22);
        if ( ProcessWin32Process )
        {
          if ( *((_DWORD *)a2 + 2) )
            *(_DWORD *)(ProcessWin32Process + 12) |= 0x4080000u;
          else
            *(_DWORD *)(ProcessWin32Process + 12) &= 0xFBF7FFFF;
        }
        else
        {
          v5 = -1073741816;
        }
      }
      else
      {
        v5 = -1073741811;
      }
      ObfDereferenceObject(v22);
    }
    return v5;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v11 = ValidateHwnd(*(_QWORD *)a2);
  v14 = v11;
  if ( v11 && (*(_BYTE *)(v11 + 58) & 4) == 0 && *(char *)(v11 + 59) >= 0 && *(int *)(v11 + 248) >= 8 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL) != PsGetCurrentProcessWin32Process(v13, v12) )
      return (unsigned int)-1073741790;
    if ( (*(_DWORD *)(v14 + 304) & 0x800) == 0 )
    {
      v16 = (void *)DesktopAlloc(*(_QWORD *)(v14 + 24), *(unsigned int *)(v14 + 248), 0LL);
      if ( !v16 )
        return (unsigned int)-1073741801;
      if ( *(_QWORD *)(v14 + 384) )
      {
        CurrentProcess = PsGetCurrentProcess(v15);
        memmove(v16, *(const void **)(v14 + 384), *(int *)(v14 + 248));
        if ( (*(_DWORD *)(CurrentProcess + 772) & 0x40000008) == 0 )
        {
          v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v28;
          v28[1] = v14;
          ++*(_DWORD *)(v14 + 8);
          xxxClientFreeWindowClassExtraBytes(*(_QWORD *)(v14 + 384), v17, v18, v19);
          v14 = ThreadUnlock1(v21, v20);
          if ( !v14 )
          {
            RtlFreeHeap(*(PVOID *)(MEMORY[0x18] + 128LL), 0, v16);
            return (unsigned int)-1073741811;
          }
        }
        *(_QWORD *)(v14 + 384) = v16;
      }
    }
    **(_DWORD **)(v14 + 384) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(*(_QWORD *)(v14 + 384) + 4LL) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v14 + 304) |= 0x800u;
  }
  return v5;
}
