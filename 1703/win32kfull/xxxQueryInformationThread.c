/*
 * XREFs of xxxQueryInformationThread @ 0x1C001694C
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C00167C0 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C0016D08 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0017ED0 (xxxSetCsrssThreadDesktop.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50 (xxxRestoreCsrssThreadDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     GreIsProcessSystemCritical @ 0x1C013F254 (GreIsProcessSystemCritical.c)
 *     GetTaskName @ 0x1C01B2230 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  struct _KTHREAD *v7; // r14
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessWin32Process; // r15
  NTSTATUS v10; // esi
  NTSTATUS result; // eax
  PEPROCESS ThreadProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 i; // rdi
  unsigned int v20; // eax
  struct _KTHREAD *v21; // rcx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rax
  PEPROCESS v26; // rax
  struct _KPROCESS *v27; // rax
  __int64 v28; // rax
  PEPROCESS v29; // rax
  struct _KTHREAD *v30; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v32; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v33[24]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a4;
  v30 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 != 11 )
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v32, 0LL);
    v7 = (struct _KTHREAD *)v32;
    v10 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess((PETHREAD)v32);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread(v7, v13, v14, v15);
LABEL_8:
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1:
          if ( ThreadWin32Thread )
          {
            v20 = *(_DWORD *)(ThreadWin32Thread + 440);
            goto LABEL_28;
          }
          break;
        case 2:
          if ( ThreadWin32Thread )
          {
            GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
            goto LABEL_29;
          }
          break;
        case 3:
          *(_QWORD *)a3 = 0LL;
          *((_QWORD *)a3 + 1) = 0LL;
          goto LABEL_29;
        case 4:
          if ( !ThreadWin32Thread )
          {
            *a3 = 0;
            goto LABEL_29;
          }
          v20 = IsThreadHung(ThreadWin32Thread, *a3);
LABEL_28:
          *a3 = v20;
          goto LABEL_29;
        case 11:
          v16 = 0LL;
          if ( (unsigned int)v5 >= 8 )
          {
            if ( ProcessWin32Process && (v17 = *(_DWORD *)(ProcessWin32Process + 352)) != 0 )
            {
              v18 = 8LL * (unsigned int)(v17 + 1);
              if ( v18 <= v5 )
              {
                for ( i = *(_QWORD *)(ProcessWin32Process + 288); i; i = *(_QWORD *)(i + 584) )
                {
                  *(_QWORD *)&a3[2 * v16] = PsGetThreadId(*(PETHREAD *)i);
                  v16 = (unsigned int)(v16 + 1);
                }
                *(_QWORD *)&a3[2 * v16] = 0LL;
              }
              else
              {
                *(_QWORD *)a3 = v18;
                v10 = -1073741801;
              }
            }
            else
            {
              *(_QWORD *)a3 = 0LL;
            }
          }
          else
          {
            v10 = -1073741811;
          }
          v21 = v30;
          goto LABEL_30;
        default:
          v10 = -1073741821;
LABEL_29:
          v21 = v7;
LABEL_30:
          ObfDereferenceObject(v21);
          return v10;
      }
      v10 = -1073741816;
      goto LABEL_29;
    }
    v22 = a3[3];
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    if ( ThreadWin32Thread )
    {
      v23 = *(_QWORD *)(ThreadWin32Thread + 408);
      if ( v23 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v23 + 40) + 32LL) & 4) == 0 )
        {
          v24 = *(__int64 **)(*(_QWORD *)(v23 + 8) + 16LL);
          if ( v24 )
            v25 = *v24;
          else
            v25 = 0LL;
          *(_QWORD *)a3 = v25;
        }
      }
    }
    if ( PsGetThreadProcessId(v7) == (HANDLE)gpidLogon )
      goto LABEL_56;
    if ( PsGetThreadProcessId(v7) == (HANDLE)gpidLogonUI )
      goto LABEL_56;
    v26 = PsGetThreadProcess(v7);
    if ( (unsigned int)IsProcessDwm(v26) )
      goto LABEL_56;
    v27 = PsGetThreadProcess(v7);
    if ( (unsigned int)IsProcessUserService(v27) )
      goto LABEL_56;
    if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 408) )
    {
      v28 = *(_QWORD *)(ThreadWin32Thread + 376);
      if ( v28 && (*(_DWORD *)(v28 + 768) & 0x80u) != 0 )
      {
        if ( (v22 & 0x800) != 0 )
          goto LABEL_57;
        goto LABEL_56;
      }
      v29 = PsGetThreadProcess(v7);
      if ( (unsigned int)GreIsProcessSystemCritical(v29) )
LABEL_56:
        a3[2] = 1;
    }
    else
    {
      a3[2] = 2;
    }
LABEL_57:
    if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 780) )
      a3[3] |= 1u;
    if ( (a3[3] & 1) != 0 && !a3[2] && *(_QWORD *)(gptiCurrent + 408LL) != *(_QWORD *)(ThreadWin32Thread + 408) )
    {
      LockW32Thread(ThreadWin32Thread, v33);
      if ( *(_QWORD *)(gptiCurrent + 408LL) )
        v10 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
      if ( v10 >= 0 )
        v10 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 408));
      PopAndFreeW32ThreadLock(v33);
    }
    goto LABEL_29;
  }
  v10 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Object, 0LL);
  v30 = Object;
  if ( v10 >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v30);
    goto LABEL_8;
  }
  return v10;
}
