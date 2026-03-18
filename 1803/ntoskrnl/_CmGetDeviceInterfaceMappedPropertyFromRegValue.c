/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140586188
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x14050A7E0 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1407EE3E4 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405037F0 (_CmIsDeviceInterfaceEnabled.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140508774 (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14050ACE8 (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // r12
  int IsDeviceInterfaceEnabled; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  DEVPROPKEY **v19; // r8
  DEVPROPKEY *v20; // r9
  DEVPROPKEY **v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v26; // rax
  int Value; // edi
  __int64 v28; // rax
  HANDLE v29; // rdx
  int v30; // eax
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v32; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  Handle = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  KeyHandle = 0LL;
  v32 = 0LL;
  v31 = 0LL;
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
  v19 = &off_1407F92C0;
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
  v11 = (_DWORD *)(*(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1);
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = (_DWORD *)(*(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4);
  if ( v11 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v21 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_15;
  v22 = CmOpenDeviceInterfaceRegKey(a1, (__int64)a2, 0x30u, (__int64)v20, 1, (char)v11, (__int64)&Handle, v11);
  v11 = 0LL;
  IsDeviceInterfaceEnabled = v22;
  if ( v22 >= 0 )
  {
    v8 = a5;
LABEL_15:
    v23 = *(_DWORD *)(a4 + 16);
    if ( v23 != 2 )
    {
      if ( v23 == 3 )
      {
        v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
          v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
        if ( !v24 )
        {
          *a8 = 1;
          *v8 = 17;
          if ( v16 )
          {
            IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, (__int64)v19, (__int64)&a6);
            if ( IsDeviceInterfaceEnabled >= 0 )
              *(_BYTE *)v12 = -((_BYTE)a6 != 0);
          }
          else
          {
            IsDeviceInterfaceEnabled = -1073741789;
          }
          goto LABEL_23;
        }
LABEL_66:
        IsDeviceInterfaceEnabled = -1073741264;
        goto LABEL_23;
      }
      if ( v23 != 256 )
        goto LABEL_66;
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v26 )
        goto LABEL_66;
      IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                   a1,
                                   (__int64)a2,
                                   0x31u,
                                   (__int64)v20,
                                   1,
                                   (char)v11,
                                   (__int64)&KeyHandle,
                                   v11);
      if ( IsDeviceInterfaceEnabled < 0 )
        goto LABEL_23;
      LODWORD(v31) = v16;
      Value = RegRtlQueryValue(KeyHandle, L"DeviceInstance", (_DWORD *)&v31 + 1, (void *)v12, (unsigned int *)&v31);
      ZwClose(KeyHandle);
      if ( Value != -1073741772 && Value != -1073741444 )
      {
        if ( !Value || Value == -1073741789 )
        {
          *a8 = v31;
          *a5 = 18;
          if ( Value || !v16 )
            IsDeviceInterfaceEnabled = -1073741789;
          goto LABEL_23;
        }
LABEL_61:
        IsDeviceInterfaceEnabled = Value;
        goto LABEL_23;
      }
LABEL_56:
      IsDeviceInterfaceEnabled = -1073741275;
      goto LABEL_23;
    }
    v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( v28 )
      goto LABEL_66;
    v29 = Handle;
    if ( a3 )
      v29 = a3;
    if ( a1 )
      v11 = *(_DWORD **)(a1 + 224);
    v30 = SysCtxRegOpenKey((__int64)v11, (__int64)v29, (__int64)L"Device Parameters", 0, 1u, (__int64)&v32);
    if ( v30 == -1073741772 || v30 == -1073741444 )
      goto LABEL_56;
    if ( v30 < 0 )
    {
      IsDeviceInterfaceEnabled = v30;
      goto LABEL_23;
    }
    LODWORD(v31) = v16;
    Value = PnpCtxRegQueryValueIndirect(a1, (__int64)v32);
    ZwClose(v32);
    if ( Value == -1073741772 || Value == -1073741444 )
      goto LABEL_56;
    if ( Value && Value != -1073741789 )
      goto LABEL_61;
    *a8 = v31;
    *a5 = 18;
    if ( Value || !v16 )
      IsDeviceInterfaceEnabled = -1073741789;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
