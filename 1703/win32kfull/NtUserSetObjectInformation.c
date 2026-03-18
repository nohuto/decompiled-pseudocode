/*
 * XREFs of NtUserSetObjectInformation @ 0x1C01DFA70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetUserObjectInformation @ 0x1C01B2C6C (_SetUserObjectInformation.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  __int64 v8; // rdx
  PVOID v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 CurrentProcessWow64Process; // rax
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF

  v4 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  if ( a2 == 7 )
  {
    v12 = 0;
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10, v11);
    ProbeForRead(a3, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
    {
      if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
      {
        v12 = SetUserObjectInformation(Handle, a2, a3, v4);
        SetHandleFlag(Handle, 2LL, 0LL);
      }
      else
      {
        v12 = 0;
        UserSetLastError(8LL);
      }
    }
    else
    {
      v12 = 0;
    }
    v9 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( !v15[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v15);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
