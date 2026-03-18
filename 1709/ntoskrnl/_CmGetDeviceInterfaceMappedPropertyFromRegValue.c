/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x14051C784 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140783974 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1405229BC (_PnpCtxRegQueryValueIndirect.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140528078 (_CmIsDeviceInterfaceEnabled.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  int IsDeviceInterfaceEnabled; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  DEVPROPKEY **v19; // r8
  DEVPROPKEY *v20; // r9
  DEVPROPKEY **v21; // r15
  int v22; // ecx
  __int64 v23; // rax
  __int64 v25; // rax
  int ValueIndirect; // edi
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  _DWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  char v37; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  Handle = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  KeyHandle = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v37 = 0;
  if ( v12 )
  {
    v16 = a7;
    v12 &= -(__int64)(a7 != 0);
    v11 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  v18 = 0;
  v19 = &off_14078CD28;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v19;
    if ( v17 == (*v19)->pid )
      break;
LABEL_6:
    ++v18;
    v19 += 2;
    v21 = 0LL;
    if ( v18 >= 3 )
      goto LABEL_11;
  }
  v11 = *(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4;
  if ( v11 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v21 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                 (_DWORD)a1,
                                 a2,
                                 48,
                                 (_DWORD)v20,
                                 1,
                                 v11,
                                 (__int64)&Handle,
                                 v11);
    if ( IsDeviceInterfaceEnabled >= 0 )
    {
      v8 = a5;
      goto LABEL_15;
    }
    goto LABEL_23;
  }
LABEL_15:
  v22 = *(_DWORD *)(a4 + 16);
  if ( v22 == 2 )
  {
    v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v27 )
    {
      v28 = (int)Handle;
      if ( a3 )
        v28 = a3;
      if ( a1 )
        v29 = *a1;
      else
        LODWORD(v29) = 0;
      v30 = SysCtxRegOpenKey(v29, v28, (unsigned int)L"Device Parameters", 0, 1, (__int64)&v33);
      if ( v30 != -1073741772 && v30 != -1073741444 )
      {
        if ( v30 < 0 )
        {
          IsDeviceInterfaceEnabled = v30;
          goto LABEL_23;
        }
        LODWORD(v32) = v16;
        ValueIndirect = PnpCtxRegQueryValueIndirect(
                          (_DWORD)a1,
                          (_DWORD)v33,
                          (unsigned int)L"FriendlyName",
                          (unsigned int)&v32 + 4,
                          v12,
                          (__int64)&v32,
                          (__int64)&v37);
        ZwClose(v33);
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
        {
          if ( !ValueIndirect || ValueIndirect == -1073741789 )
          {
            *a8 = v32;
            v31 = a5;
            *a5 = 18;
            if ( ValueIndirect || !v16 )
              IsDeviceInterfaceEnabled = -1073741789;
            if ( v37 )
              *v31 = 25;
            goto LABEL_23;
          }
LABEL_63:
          IsDeviceInterfaceEnabled = ValueIndirect;
          goto LABEL_23;
        }
      }
      goto LABEL_57;
    }
  }
  if ( v22 == 3 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( !v23 )
    {
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, v19, &a6);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *(_BYTE *)v12 = -((_BYTE)a6 != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
      goto LABEL_23;
    }
  }
  if ( v22 != 256 )
    goto LABEL_68;
  v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v25 )
  {
LABEL_68:
    IsDeviceInterfaceEnabled = -1073741264;
    goto LABEL_23;
  }
  IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                               (_DWORD)a1,
                               a2,
                               49,
                               (_DWORD)v20,
                               1,
                               0,
                               (__int64)&KeyHandle,
                               0LL);
  if ( IsDeviceInterfaceEnabled >= 0 )
  {
    LODWORD(v32) = v16;
    ValueIndirect = RegRtlQueryValue(KeyHandle, (__int64)&v32);
    ZwClose(KeyHandle);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( !ValueIndirect || ValueIndirect == -1073741789 )
      {
        *a8 = v32;
        *a5 = 18;
        if ( ValueIndirect || !v16 )
          IsDeviceInterfaceEnabled = -1073741789;
        goto LABEL_23;
      }
      goto LABEL_63;
    }
LABEL_57:
    IsDeviceInterfaceEnabled = -1073741275;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
