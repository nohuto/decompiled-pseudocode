/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C00203A0
 * Callers:
 *     <none>
 * Callees:
 *     _GetPointerDeviceProperties @ 0x1C001CA9C (_GetPointerDeviceProperties.c)
 *     _FindPointerDevice @ 0x1C0020298 (_FindPointerDevice.c)
 *     IsPointerDeviceAccessible @ 0x1C0023730 (IsPointerDeviceAccessible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetPointerDeviceProperties(struct _LIST_ENTRY *a1, unsigned int *a2, volatile void *a3)
{
  int PointerDeviceProperties; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  unsigned int *v12; // rax
  unsigned int v13; // r13d
  struct tagPOINTER_DEVICE_PROPERTY *v14; // rax
  struct tagPOINTER_DEVICE_PROPERTY *v15; // r15
  struct tagHID_POINTER_DEVICE_INFO *v17; // [rsp+28h] [rbp-80h] BYREF
  int v18; // [rsp+38h] [rbp-70h]
  struct tagPOINTER_DEVICE_PROPERTY *v19; // [rsp+48h] [rbp-60h]
  _BYTE v20[8]; // [rsp+50h] [rbp-58h] BYREF
  size_t Size; // [rsp+58h] [rbp-50h]
  unsigned int v22; // [rsp+64h] [rbp-44h]
  unsigned int v23; // [rsp+B0h] [rbp+8h]

  v19 = 0LL;
  v18 = 0;
  v17 = 0LL;
  PointerDeviceProperties = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( !a1 || !a2 )
  {
    PointerDeviceProperties = 0;
    UserSetLastError(87LL);
    goto LABEL_28;
  }
  if ( (unsigned int)FindPointerDevice(a1, &v17, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v17) )
    {
      v11 = *(_DWORD *)(v9 + 312);
      if ( !a3 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v11;
        goto LABEL_26;
      }
      v12 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v12 = (unsigned int *)W32UserProbeAddress;
      v23 = *v12;
      if ( *v12 < v11 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v11;
        PointerDeviceProperties = 0;
        UserSetLastError(122LL);
        goto LABEL_26;
      }
      v13 = v23 - *((_DWORD *)v17 + 402);
      v22 = v13;
      Size = 28LL * v23;
      if ( Size <= 0xFFFFFFFF )
      {
        if ( v13 )
        {
          if ( 28 * v23 >= 0x2710000 )
            goto LABEL_21;
          v18 = 28 * v11;
          Size = 28 * v11;
          ProbeForWrite(a3, Size, 8u);
          if ( 28 * v11 - 1 > 0x270FFFF )
          {
            PointerDeviceProperties = 0;
            UserSetLastError(1359LL);
            goto LABEL_26;
          }
          v14 = (struct tagPOINTER_DEVICE_PROPERTY *)Win32AllocPoolZInit(28 * v11, 1668313941LL);
          v15 = v14;
          v19 = v14;
          if ( !v14 )
          {
LABEL_21:
            PointerDeviceProperties = 0;
            UserSetLastError(8LL);
            goto LABEL_26;
          }
          PointerDeviceProperties = GetPointerDeviceProperties(v17, v11, v14, v13);
          if ( PointerDeviceProperties )
          {
            memmove((void *)a3, v15, Size);
            v8 = W32UserProbeAddress;
            if ( (unsigned __int64)a2 >= W32UserProbeAddress )
              a2 = (unsigned int *)W32UserProbeAddress;
            *a2 = v11;
            goto LABEL_26;
          }
        }
      }
    }
    PointerDeviceProperties = 0;
    UserSetLastError(87LL);
  }
  else
  {
    PointerDeviceProperties = 0;
  }
LABEL_26:
  if ( v19 )
    Win32FreePool(v19);
LABEL_28:
  if ( !v20[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v20);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return PointerDeviceProperties;
}
