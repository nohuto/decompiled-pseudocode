/*
 * XREFs of DrvDbSetDeviceIdMappedProperty @ 0x14074417C
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404E8890 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140745158 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        const wchar_t *a6,
        int a7)
{
  int v7; // r11d
  HANDLE v9; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 **i; // r9
  __int64 *v17; // r10
  __int64 v18; // r8
  __int64 **v20; // rbp
  unsigned int v21; // esi
  int v22; // eax
  __int64 v23; // rax
  const wchar_t *v24; // r8
  unsigned int v25; // eax
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v9 = 0LL;
  Handle = 0LL;
  if ( v7 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
      v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  v15 = 0LL;
  for ( i = &off_14028EB40; ; i += 5 )
  {
    v17 = *i;
    if ( *((_DWORD *)*i + 4) == v7 )
    {
      v18 = *v17 - *(_QWORD *)a4;
      if ( *v17 == *(_QWORD *)a4 )
        v18 = v17[1] - *(_QWORD *)(a4 + 8);
      if ( !v18 )
        break;
    }
    v15 = (unsigned int)(v15 + 1);
    if ( (_DWORD)v15 )
      return (unsigned int)-1073741802;
  }
  v20 = &(&off_14028EB40)[5 * v15];
  if ( !v20 )
    return (unsigned int)-1073741802;
  v21 = a5;
  if ( a5 != *((_DWORD *)v20 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( a3 || (v22 = DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, 3, 0, &Handle, 0LL), v9 = Handle, v14 = v22, v22 >= 0) )
  {
    if ( *(_DWORD *)(a4 + 16) != 3 )
      goto LABEL_34;
    v23 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v23 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v23 )
    {
LABEL_34:
      if ( a3 )
        v9 = a3;
      v25 = DrvDbSetRegValueMappedProperty(v9, v9, v20, v21, a6, a7);
    }
    else
    {
      if ( v21 == 8210 )
      {
        v24 = a6;
        if ( !a6 || !a7 )
        {
LABEL_27:
          v14 = -1073741811;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v21 )
          goto LABEL_27;
        v24 = a6;
        if ( a6 || a7 )
          goto LABEL_27;
      }
      if ( a3 )
        v9 = a3;
      v25 = DrvDbSetDeviceIdDriverInfMatches((__int64)v9, v9, v24, (__int64)i);
    }
    v9 = Handle;
    v14 = v25;
  }
LABEL_38:
  if ( v9 )
    ZwClose(v9);
  return v14;
}
