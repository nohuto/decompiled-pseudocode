/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C0137B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0137BFC (_GetOwnerTransformedMonitorRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF

  v17 = 0uLL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v11 = ValidateHwnd(a1);
  if ( !v11 )
    goto LABEL_11;
  v14 = ValidateHmonitor(a2, v9, v12, v13);
  if ( !v14 || !a4 )
  {
    UserSetLastError(87LL);
LABEL_11:
    v8 = 0;
    goto LABEL_7;
  }
  GetOwnerTransformedMonitorRect(v11, v14, a3, &v17);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (_OWORD *)W32UserProbeAddress;
  *a4 = v17;
LABEL_7:
  if ( !v16[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v16);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return v8;
}
