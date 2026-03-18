/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01D9ED0
 * Callers:
 *     <none>
 * Callees:
 *     _FindPointerDevice @ 0x1C0020298 (_FindPointerDevice.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPhysicalDeviceRect(struct _LIST_ENTRY *a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // xmm1
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a1 && a2 && (unsigned int)FindPointerDevice(a1, &v12, 0LL) )
  {
    if ( *(_DWORD *)(v12 + 24) == 7 )
      v8 = *(_OWORD *)(v12 + 204);
    else
      v8 = *(_OWORD *)(v12 + 140);
    v9 = W32UserProbeAddress;
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (_OWORD *)W32UserProbeAddress;
    *v10 = *v10;
    *a2 = v8;
  }
  else
  {
    v4 = 0;
    UserSetLastError(87LL);
  }
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v9, v5, v6, v7);
  return v4;
}
