/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C01139B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1C0113AB0 (_SetWindowStationUser.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, _QWORD *a2, volatile void *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  LOBYTE(v8) = 1;
  if ( (int)ValidateHwinsta(a1, v8, 0LL, &Object) < 0 )
  {
    v13 = 0;
  }
  else
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17[0] = *a2;
    if ( a3 )
      ProbeForRead(a3, a4, 4u);
    v13 = SetWindowStationUser(Object, v17, a3, a4);
    ObfDereferenceObject(Object);
  }
  if ( !v16[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v16);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
