/*
 * XREFs of UserCommitSharedMemory @ 0x1C0006BE0
 * Callers:
 *     <none>
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0006E20 (CommitReadOnlyMemory.c)
 */

__int64 __fastcall UserCommitSharedMemory(__int64 a1, _QWORD *a2, ULONG_PTR *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  NTSTATUS v7; // r8d
  char *v9; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 712) )
  {
    v9 = (char *)gpvSharedBase - *(_QWORD *)(PsGetCurrentProcessWin32Process() + 712);
    BaseAddress = (PVOID)(*a2 - (_QWORD)v9);
    v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a3, 0x1000u, 2u);
    if ( v7 >= 0 )
      *a2 = (char *)BaseAddress + (_QWORD)v9;
  }
  else
  {
    v7 = CommitReadOnlyMemory(ghSectionShared, a3, (unsigned int)(*(_DWORD *)a2 - (_DWORD)gpvSharedBase), &v11);
    if ( v7 >= 0 )
      *a2 += v11;
  }
  return (unsigned int)v7;
}
