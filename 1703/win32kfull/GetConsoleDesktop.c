/*
 * XREFs of GetConsoleDesktop @ 0x1C01C3480
 * Callers:
 *     _GetThreadDesktop @ 0x1C00E9F24 (_GetThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01C359C (_OpenThreadDesktop.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1C01D6E50 (NtUserCheckWindowThreadDesktop.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1C01C3380 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall GetConsoleDesktop(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  PVOID v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  void *v13; // [rsp+28h] [rbp-10h] BYREF

  if ( GetConsoleHostProcess(a1, &v13) < 0 || !v13 )
    return 3221225485LL;
  result = LockProcessByClientId(v13, (PEPROCESS *)&Object);
  if ( (int)result >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v9 = Object;
    *a4 = ProcessWin32Process;
    ObfDereferenceObject(v9);
    v10 = *a4;
    if ( *a4 && (v11 = *(_QWORD *)(v10 + 296)) != 0 )
    {
      *a2 = *(_QWORD *)(v11 + 512);
      if ( a3 )
        *a3 = *(_QWORD *)(*(_QWORD *)(v10 + 296) + 408LL);
      return 0LL;
    }
    else
    {
      return 3221225480LL;
    }
  }
  return result;
}
