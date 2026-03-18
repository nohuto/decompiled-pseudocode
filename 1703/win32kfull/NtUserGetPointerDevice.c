/*
 * XREFs of NtUserGetPointerDevice @ 0x1C0135E30
 * Callers:
 *     <none>
 * Callees:
 *     _FindPointerDevice @ 0x1C0020298 (_FindPointerDevice.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C0023504 (_GetPointerDeviceInfoProperties.c)
 *     IsPointerDeviceAccessible @ 0x1C0023730 (IsPointerDeviceAccessible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPointerDevice(struct _LIST_ENTRY *a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( !a1 || !a2 )
    goto LABEL_11;
  if ( !(unsigned int)FindPointerDevice(a1, &v10, 0LL) )
  {
    v4 = 0;
    goto LABEL_7;
  }
  if ( (unsigned int)IsPointerDeviceAccessible(v10) )
  {
    ProbeForWrite(a2, 0x438uLL, 4u);
    if ( (int)GetPointerDeviceInfoProperties((__int64)a2, v10) < 0 )
    {
      UserSetLastError(122LL);
      v4 = 0;
    }
  }
  else
  {
LABEL_11:
    v4 = 0;
    UserSetLastError(87LL);
  }
LABEL_7:
  if ( !v11 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v11);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
