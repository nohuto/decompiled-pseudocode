/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01DAA00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01B3868 (_GetRegisteredRawInputDevices.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, int a3)
{
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( a3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87LL);
  }
  if ( !v12 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v12);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return RegisteredRawInputDevices;
}
