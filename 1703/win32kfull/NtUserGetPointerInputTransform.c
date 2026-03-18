/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C01DA1E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetPointerTransformInternal @ 0x1C01BB330 (GetPointerTransformInternal.c)
 *     GetMiPInputTransform @ 0x1C01BCA38 (GetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(unsigned int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int MiPInputTransform; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = a2;
  v8 = EnterSharedCrit(0LL, 1LL);
  v9 = 0;
  if ( a1
    && !HIWORD(a1)
    && (v10 = (unsigned int)(v4 - 1), (unsigned int)v10 <= 0x63)
    && a3
    && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v6, v7, HIWORD(a1));
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
      MiPInputTransform = GetMiPInputTransform(v8, (unsigned __int64 *)a3);
    else
      MiPInputTransform = GetPointerTransformInternal(v8, a1, v4, (unsigned __int64 *)a3);
    v9 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v9;
}
