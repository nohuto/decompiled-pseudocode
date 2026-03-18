/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01D6BF0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, int *a3)
{
  void *v4; // r14
  void *v5; // rbx
  int v6; // edi
  int *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  PVOID v19; // rcx
  PVOID v21; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v5 = (void *)a1;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v21 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v11) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS, v13) )
  {
    v10 = -1073741790;
    goto LABEL_19;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v21) < 0 || (v14 = PsGetProcessWin32Process(v21)) == 0 )
  {
LABEL_2:
    v10 = -1073741811;
    goto LABEL_19;
  }
  v15 = *(_QWORD *)(v14 + 824);
  v16 = *(_QWORD *)(ProcessWin32Process + 824);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v16 <= (unsigned int)v15 )
    {
      if ( (_DWORD)v16 != (_DWORD)v15
        || (v17 = HIDWORD(v16), v18 = HIDWORD(v15), (_DWORD)v17 != (_DWORD)v18)
        && (_DWORD)v17 != -1
        && (_DWORD)v18 != -1 )
      {
        v6 = 0;
      }
    }
  }
  v7 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v7 = (int *)W32UserProbeAddress;
  *v7 = *v7;
  *a3 = v6;
  v10 = 0;
LABEL_19:
  if ( Object )
    ObfDereferenceObject(Object);
  v19 = v21;
  if ( v21 )
    ObfDereferenceObject(v21);
  UserSessionSwitchLeaveCrit(v19, v7, v8, v9);
  return v10;
}
