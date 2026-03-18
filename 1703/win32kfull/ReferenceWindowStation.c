/*
 * XREFs of ReferenceWindowStation @ 0x1C00AF920
 * Callers:
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PVOID v9; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v11; // rsi
  __int64 ProcessWin32Process; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  NTSTATUS result; // eax
  __int64 v16; // rax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  ThreadProcess = PsGetThreadProcess(a1);
  v11 = 0LL;
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    v11 = *ThreadWin32Thread;
  if ( ProcessWin32Process )
  {
    if ( !a5
      || !v11
      || (v14 = *(_QWORD *)(v11 + 408)) == 0
      || *(_QWORD *)(ProcessWin32Process + 632) == *(_QWORD *)(v14 + 40) )
    {
      v9 = *(PVOID *)(ProcessWin32Process + 632);
      if ( v9 )
      {
        if ( RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 648), a3) )
        {
LABEL_10:
          *a4 = v9;
          return 0;
        }
        UserSetLastError(5LL);
        return -1073741790;
      }
    }
    if ( v11 )
    {
      v16 = *(_QWORD *)(v11 + 408);
      if ( v16 )
      {
        v9 = *(PVOID *)(v16 + 40);
        if ( !(unsigned int)AccessCheckObject(v9, a3, 0LL, WinStaMapping) )
          return -1073741790;
      }
    }
    if ( v9 )
      goto LABEL_10;
  }
  if ( !a2 )
    return -1073741275;
  result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
  v9 = Object;
  if ( result >= 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_10;
  }
  return result;
}
