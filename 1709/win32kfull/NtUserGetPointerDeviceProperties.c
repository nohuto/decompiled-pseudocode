/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C00B3A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsPointerDeviceAccessible @ 0x1C00B15D0 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rax
  const void *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-68h]
  int v23; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v24[16]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]
  unsigned int v26; // [rsp+B0h] [rbp+8h]

  v22 = 0LL;
  v21[0] = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87LL, v7);
    goto LABEL_28;
  }
  if ( (unsigned int)FindPointerDevice(a1, v21, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v21[0]) )
    {
      v10 = *(_DWORD *)(v9 + 296);
      if ( !a3 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v10;
        goto LABEL_26;
      }
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (unsigned int *)MmUserProbeAddress;
      v26 = *v11;
      if ( *v11 < v10 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v10;
        v6 = 0;
        UserSetLastError(122LL, v8);
        goto LABEL_26;
      }
      v12 = v26 - *(_DWORD *)(v21[0] + 944);
      v13 = 28LL * v26;
      v25 = v13;
      if ( v13 <= 0xFFFFFFFF )
      {
        if ( v12 )
        {
          if ( (unsigned int)v13 >= 0x2710000 )
            goto LABEL_21;
          v23 = 28 * v10;
          v14 = 28 * v10;
          ProbeForWrite(a3, 28 * v10, 8u);
          if ( 28 * v10 - 1 > 0x270FFFF )
          {
            v6 = 0;
            UserSetLastError(1359LL, v15);
            goto LABEL_26;
          }
          v16 = Win32AllocPoolZInit(v14, 1668313941LL);
          v17 = (const void *)v16;
          v22 = v16;
          if ( !v16 )
          {
LABEL_21:
            v6 = 0;
            UserSetLastError(8LL, v8);
            goto LABEL_26;
          }
          v6 = RIMGetPointerDeviceProperties(v21[0], v10, v16, v12);
          if ( v6 )
          {
            memmove((void *)a3, v17, v14);
            v8 = MmUserProbeAddress;
            if ( (unsigned __int64)a2 >= MmUserProbeAddress )
              a2 = (unsigned int *)MmUserProbeAddress;
            *a2 = v10;
            goto LABEL_26;
          }
        }
      }
    }
    v6 = 0;
    UserSetLastError(87LL, v8);
  }
  else
  {
    v6 = 0;
  }
LABEL_26:
  if ( v22 )
    Win32FreePool(v22, v8, v9);
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v19, v18);
  return v6;
}
