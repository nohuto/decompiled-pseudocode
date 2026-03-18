/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C01341B0
 * Callers:
 *     <none>
 * Callees:
 *     _FindPointerDevice @ 0x1C0020298 (_FindPointerDevice.c)
 *     IsPointerDeviceAccessible @ 0x1C0023730 (IsPointerDeviceAccessible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceCursors @ 0x1C0134324 (_GetPointerDeviceCursors.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPointerDeviceCursors(struct _LIST_ENTRY *a1, unsigned int *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int *v12; // rax
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  PointerDeviceCursors = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( !a1 || !a2 )
    goto LABEL_23;
  if ( !(unsigned int)FindPointerDevice(a1, &v15, 0LL) )
  {
    PointerDeviceCursors = 0;
    goto LABEL_16;
  }
  if ( (unsigned int)IsPointerDeviceAccessible(v15) )
  {
    v11 = *(_DWORD *)(v9 + 1604);
    if ( a3 )
    {
      v12 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v12 = (unsigned int *)W32UserProbeAddress;
      if ( *v12 < v11 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v11;
        PointerDeviceCursors = 0;
        UserSetLastError(122LL);
      }
      else
      {
        ProbeForWrite(a3, 8LL * v11, 8u);
        PointerDeviceCursors = GetPointerDeviceCursors(v15, v11, a3);
        if ( PointerDeviceCursors )
        {
          v8 = W32UserProbeAddress;
          if ( (unsigned __int64)a2 >= W32UserProbeAddress )
            a2 = (unsigned int *)W32UserProbeAddress;
          *a2 = v11;
        }
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (unsigned int *)W32UserProbeAddress;
      *a2 = v11;
    }
  }
  else
  {
LABEL_23:
    PointerDeviceCursors = 0;
    UserSetLastError(87LL);
  }
LABEL_16:
  if ( !v14[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return PointerDeviceCursors;
}
