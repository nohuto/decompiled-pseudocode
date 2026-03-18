/*
 * XREFs of UserCommitSharedMemory @ 0x1C00756E0
 * Callers:
 *     <none>
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0075910 (CommitReadOnlyMemory.c)
 */

__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, ULONG_PTR *a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  NTSTATUS v11; // r8d
  char *v13; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 704) )
  {
    v13 = (char *)gpvSharedBase - *(_QWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10) + 704);
    BaseAddress = (PVOID)(*a2 - (_QWORD)v13);
    v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a3, 0x1000u, 2u);
    if ( v11 >= 0 )
      *a2 = (char *)BaseAddress + (_QWORD)v13;
  }
  else
  {
    v11 = CommitReadOnlyMemory(ghSectionShared, a3, (unsigned int)(*(_DWORD *)a2 - (_DWORD)gpvSharedBase), &v15);
    if ( v11 >= 0 )
      *a2 += v15;
  }
  return (unsigned int)v11;
}
