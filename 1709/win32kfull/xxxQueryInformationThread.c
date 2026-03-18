/*
 * XREFs of xxxQueryInformationThread @ 0x1C0047A8C
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C0047900 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C0047E30 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00B1124 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     GetTaskName @ 0x1C01B52B8 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  struct _KTHREAD *v7; // r15
  __int64 ThreadWin32Thread; // rsi
  __int64 ProcessWin32Process; // rbx
  NTSTATUS result; // eax
  NTSTATUS v11; // ebp
  PEPROCESS ThreadProcess; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rax
  PEPROCESS v17; // rax
  struct _KPROCESS *v18; // rax
  __int64 v19; // rax
  struct _KPROCESS *v20; // rbx
  bool v21; // bl
  struct _KTHREAD *v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 i; // rbx
  unsigned int v27; // eax
  struct _KTHREAD *v28; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PETHREAD Thread; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v32[32]; // [rsp+50h] [rbp-38h] BYREF

  v5 = a4;
  v28 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v28 = (struct _KTHREAD *)Object;
    if ( v11 < 0 )
      return v11;
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v28);
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, (PVOID *)&Thread, 0LL);
    v7 = Thread;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess(Thread);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread(v7);
  }
  switch ( a2 )
  {
    case 0:
      v13 = a3[3];
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      if ( ThreadWin32Thread )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 432);
        if ( v14 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 32LL) & 4) == 0 )
          {
            v15 = *(__int64 **)(*(_QWORD *)(v14 + 8) + 16LL);
            if ( v15 )
              v16 = *v15;
            else
              v16 = 0LL;
            *(_QWORD *)a3 = v16;
          }
        }
      }
      if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
      {
        v17 = PsGetThreadProcess(v7);
        if ( !(unsigned int)IsProcessDwm(v17) )
        {
          v18 = PsGetThreadProcess(v7);
          if ( !(unsigned int)IsProcessUserService(v18) )
          {
            if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 432) )
            {
              a3[2] = 2;
LABEL_23:
              if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 868) )
                a3[3] |= 1u;
              if ( (a3[3] & 1) != 0
                && !a3[2]
                && *(_QWORD *)(gptiCurrent + 432LL) != *(_QWORD *)(ThreadWin32Thread + 432) )
              {
                LockW32Thread(ThreadWin32Thread, v32);
                if ( *(_QWORD *)(gptiCurrent + 432LL) )
                  v11 = xxxRestoreCsrssThreadDesktop(a3 + 4, 0LL);
                if ( v11 >= 0 )
                  v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 432));
                PopAndFreeW32ThreadLock(v32);
              }
              goto LABEL_27;
            }
            v19 = *(_QWORD *)(ThreadWin32Thread + 400);
            if ( v19 && (*(_DWORD *)(v19 + 776) & 0x80u) != 0 )
            {
              if ( (v13 & 0x800) != 0 )
                goto LABEL_23;
            }
            else
            {
              v20 = PsGetThreadProcess(v7);
              AutoSharedPushLock::AutoSharedPushLock(
                (AutoSharedPushLock *)&v31,
                (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
              v21 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v20;
              if ( v31 )
              {
                GreReleasePushLockShared(v31);
                KeLeaveCriticalRegion();
              }
              if ( !v21 )
                goto LABEL_23;
            }
          }
        }
      }
      a3[2] = 1;
      goto LABEL_23;
    case 1:
      if ( ThreadWin32Thread )
      {
        v27 = *(_DWORD *)(ThreadWin32Thread + 464);
LABEL_64:
        *a3 = v27;
        goto LABEL_27;
      }
LABEL_69:
      v11 = -1073741816;
      goto LABEL_27;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        goto LABEL_27;
      }
      goto LABEL_69;
    case 3:
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      goto LABEL_27;
    case 4:
      if ( !ThreadWin32Thread )
      {
        *a3 = 0;
        goto LABEL_27;
      }
      v27 = IsThreadHung(ThreadWin32Thread, *a3);
      goto LABEL_64;
    case 11:
      v23 = 0LL;
      if ( (unsigned int)v5 < 8 )
      {
        v11 = -1073741811;
      }
      else if ( ProcessWin32Process && (v24 = *(_DWORD *)(ProcessWin32Process + 360)) != 0 )
      {
        v25 = 8LL * (unsigned int)(v24 + 1);
        if ( v25 > v5 )
        {
          *(_QWORD *)a3 = v25;
          v11 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 640) )
          {
            *(_QWORD *)&a3[2 * v23] = PsGetThreadId(*(PETHREAD *)i);
            v23 = (unsigned int)(v23 + 1);
          }
          *(_QWORD *)&a3[2 * v23] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      v22 = v28;
      goto LABEL_28;
  }
  v11 = -1073741821;
LABEL_27:
  v22 = v7;
LABEL_28:
  ObfDereferenceObject(v22);
  return v11;
}
