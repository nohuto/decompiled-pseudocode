/*
 * XREFs of CheckAllowForeground @ 0x1C0090860
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0090754 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 */

__int64 __fastcall CheckAllowForeground(__int64 a1)
{
  int v1; // r12d
  unsigned int v2; // ebx
  void *v3; // r14
  unsigned int v4; // r15d
  int v5; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int *v12; // rax
  int v13; // eax
  PACCESS_TOKEN v14; // rax
  void *v15; // r14
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v17; // rdx
  PEPROCESS Process; // [rsp+78h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+80h] [rbp+58h] BYREF
  __int64 v21; // [rsp+88h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_35;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
      break;
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_35:
      ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
      v17 = 0LL;
      while ( ghCanActivateForegroundPIDs[v17] != ProcessInheritedFromUniqueProcessId )
      {
        if ( ++v17 >= 5 )
          goto LABEL_21;
      }
      return 1;
    }
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v10 = *(_QWORD *)(v7 + 640)) != 0 && (*(_DWORD *)(v10 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_21;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v8 = *(_QWORD *)(v7 + 296);
      if ( v8 && (*(_DWORD *)(v8 + 464) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        v21 = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)v21;
        if ( v1 )
        {
          v1 = 0;
          v14 = PsReferencePrimaryToken(Process);
          v15 = v14;
          if ( v14 )
          {
            if ( SeQueryAuthenticationIdToken(v14, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *(_DWORD *)(v7 + 12) |= 0x80000u;
                v5 = 1;
              }
              else
              {
                v5 = 0;
              }
            }
            ObfDereferenceObject(v15);
          }
          v3 = (void *)v21;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v9 = v4++;
    if ( v9 >= 5 )
      goto LABEL_21;
  }
  v12 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v12) )
    v5 = 1;
  ObfDereferenceObject(Process);
  if ( v5 )
    return 1;
LABEL_21:
  if ( gptiForeground )
  {
    LOBYTE(v13) = 0;
    if ( *(_DWORD *)(gptiForeground + 608LL) <= 0x400u )
      v13 = *(_DWORD *)(gptiForeground + 624LL);
    if ( (v13 & 0x40) != 0 )
      return 1;
  }
  return v2;
}
