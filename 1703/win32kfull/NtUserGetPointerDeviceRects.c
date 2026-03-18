/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C0104830
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  _OWORD *v11; // rcx
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0uLL;
  v14 = 0uLL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v13, &v14) )
  {
    v9 = W32UserProbeAddress;
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (_OWORD *)W32UserProbeAddress;
    *v10 = *v10;
    v11 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v11 = (_OWORD *)W32UserProbeAddress;
    *v11 = *v11;
    *a2 = v13;
    *a3 = v14;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL);
  }
  if ( !v15 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v15);
  }
  UserSessionSwitchLeaveCrit(v11, v9, v7, v8);
  return v6;
}
