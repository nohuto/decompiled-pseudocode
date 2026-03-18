/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404E0178
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1404E12C0 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14073F7A4 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1404E0DF8 (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404E175C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1404E7DF0 (_CmIsDeviceInterfaceEnabled.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        void *a3,
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
  int ValueIndirect; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  HANDLE v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  _DWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v35; // [rsp+58h] [rbp-8h] BYREF
  char v37; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  v35 = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  Handle = 0LL;
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
  v19 = &off_14074A558;
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
    IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey((_DWORD)a1, a2, 48, (_DWORD)v20, 1, v11, (__int64)&v35, v11);
    if ( IsDeviceInterfaceEnabled >= 0 )
    {
      v8 = a5;
      goto LABEL_15;
    }
    goto LABEL_27;
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
      v28 = v35;
      if ( a3 )
        v28 = a3;
      if ( a1 )
        v29 = *a1;
      else
        v29 = 0LL;
      v30 = SysCtxRegOpenKey(v29, (__int64)v28, (__int64)L"Device Parameters", 0, 1u, (__int64)&v33);
      if ( v30 != -1073741772 && v30 != -1073741444 )
      {
        if ( v30 < 0 )
        {
          IsDeviceInterfaceEnabled = v30;
          goto LABEL_27;
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
            goto LABEL_27;
          }
LABEL_62:
          IsDeviceInterfaceEnabled = ValueIndirect;
          goto LABEL_27;
        }
      }
      goto LABEL_53;
    }
  }
  if ( v22 == 3 )
  {
    v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( !v26 )
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
      goto LABEL_27;
    }
  }
  if ( v22 != 256 )
    goto LABEL_67;
  v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v23 )
  {
LABEL_67:
    IsDeviceInterfaceEnabled = -1073741264;
    goto LABEL_27;
  }
  IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey((_DWORD)a1, a2, 49, (_DWORD)v20, 1, 0, (__int64)&Handle, 0LL);
  if ( IsDeviceInterfaceEnabled >= 0 )
  {
    LODWORD(v32) = v16;
    ValueIndirect = RegRtlQueryValue(Handle, L"DeviceInstance", (_DWORD *)&v32 + 1, (void *)v12, (unsigned int *)&v32);
    ZwClose(Handle);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( !ValueIndirect || ValueIndirect == -1073741789 )
      {
        *a8 = v32;
        *a5 = 18;
        if ( ValueIndirect || !v16 )
          IsDeviceInterfaceEnabled = -1073741789;
        goto LABEL_27;
      }
      goto LABEL_62;
    }
LABEL_53:
    IsDeviceInterfaceEnabled = -1073741275;
  }
LABEL_27:
  if ( v35 )
    ZwClose(v35);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
