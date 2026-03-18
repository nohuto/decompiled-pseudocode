/*
 * XREFs of xxxConsoleControl @ 0x1C0090464
 * Callers:
 *     NtUserConsoleControl @ 0x1C0090350 (NtUserConsoleControl.c)
 * Callees:
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C005AC34 (xxxClientFreeWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C008CBCC (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0090754 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C01F3D7C (xxxbFullscreenSwitch.c)
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
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  void *v17; // r14
  PVOID v18; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v20; // rax
  __int64 CurrentProcess; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v24[9]; // [rsp+60h] [rbp-48h] BYREF

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
      v20 = ValidateHwnd(*(_QWORD *)a2);
      if ( v20 )
      {
        *(_DWORD *)(*(_QWORD *)(v20 + 16) + 852LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 == 16 )
    {
      v5 = ObReferenceObjectByHandle(*(HANDLE *)a2, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
      if ( (v5 & 0x80000000) == 0 )
      {
        v18 = Object;
        if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
        {
          ProcessWin32Process = PsGetProcessWin32Process(v18);
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
        ObfDereferenceObject(v18);
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v11 = ValidateHwnd(*(_QWORD *)a2);
  v13 = v11;
  if ( v11 && (*(_BYTE *)(v11 + 58) & 4) == 0 && *(char *)(v11 + 59) >= 0 && *(int *)(v11 + 248) >= 8 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL) != PsGetCurrentProcessWin32Process(v12) )
      return (unsigned int)-1073741790;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v24[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v24;
    v24[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    if ( (*(_DWORD *)(v13 + 304) & 0x800) == 0 )
    {
      v17 = (void *)DesktopAlloc(*(_QWORD *)(v13 + 24), *(unsigned int *)(v13 + 248), 0LL);
      if ( !v17 )
      {
        v5 = -1073741801;
LABEL_18:
        ThreadUnlock1(v16, v15);
        return v5;
      }
      if ( *(_QWORD *)(v13 + 384) )
      {
        CurrentProcess = PsGetCurrentProcess(v16, v15);
        memmove(v17, *(const void **)(v13 + 384), *(int *)(v13 + 248));
        if ( (*(_DWORD *)(CurrentProcess + 772) & 0x40000008) == 0 )
          xxxClientFreeWindowClassExtraBytes(*(_QWORD *)(v13 + 384));
        *(_QWORD *)(v13 + 384) = v17;
      }
    }
    v16 = *(_DWORD **)(v13 + 384);
    if ( v16 )
    {
      *v16 = *((_DWORD *)a2 + 2);
      v16 = *(_DWORD **)(v13 + 384);
      v16[1] = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(v13 + 304) |= 0x800u;
    goto LABEL_18;
  }
  return v5;
}
