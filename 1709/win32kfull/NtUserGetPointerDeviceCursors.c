/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C0139010
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsPointerDeviceAccessible @ 0x1C00B15D0 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 *     _GetPointerDeviceCursors @ 0x1C0139170 (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(unsigned __int64 a1, unsigned int *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  PointerDeviceCursors = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  if ( !a1 || !a2 )
    goto LABEL_21;
  if ( !(unsigned int)FindPointerDevice(a1, &v15, 0LL) )
  {
    PointerDeviceCursors = 0;
    goto LABEL_16;
  }
  if ( !(unsigned int)IsPointerDeviceAccessible(v15) )
  {
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(87LL, v7);
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(v8 + 940);
  if ( a3 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (unsigned int *)MmUserProbeAddress;
    if ( *v10 < v9 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v9;
      PointerDeviceCursors = 0;
      UserSetLastError(122LL, v7);
    }
    else
    {
      ProbeForWrite(a3, 8LL * v9, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v15, v9, a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v9;
      }
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v9;
  }
LABEL_16:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12, v11);
  return PointerDeviceCursors;
}
