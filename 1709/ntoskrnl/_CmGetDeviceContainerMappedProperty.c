/*
 * XREFs of _CmGetDeviceContainerMappedProperty @ 0x14054EA48
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x14054E8F0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     _CmIsLocalMachineContainer @ 0x14059CD48 (_CmIsLocalMachineContainer.c)
 *     _CmGetContainerBooleanProperty @ 0x140781330 (_CmGetContainerBooleanProperty.c)
 */

__int64 __fastcall CmGetDeviceContainerMappedProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v12; // r9d
  __int64 v13; // rcx
  bool v14; // cf
  __int64 v15; // rcx
  const DEVPROPKEY *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx

  v10 = -1073741802;
  *a9 = 0;
  if ( a4 )
    return v10;
  v12 = *(_DWORD *)(a5 + 16);
  if ( v12 == 70 )
  {
    v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1 )
      v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data4;
    if ( !v13 )
    {
      *a6 = 17;
      *a9 = 1;
      if ( a8 )
      {
        v14 = (unsigned __int8)CmIsLocalMachineContainer(a1, a2) != 0;
        v10 = 0;
        *a7 = -v14;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      return v10;
    }
  }
  if ( v12 == 83 )
  {
    v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1 )
      v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_HasProblem.fmtid.Data4;
    if ( !v15 )
    {
      v16 = &DEVPKEY_Device_HasProblem;
      return (unsigned int)CmGetContainerBooleanProperty(
                             a1,
                             a2,
                             a3,
                             (_DWORD)v16,
                             (__int64)a6,
                             (__int64)a7,
                             a8,
                             (__int64)a9);
    }
  }
  if ( v12 == 55 )
  {
    v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1 )
      v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
    if ( !v17 )
    {
      v16 = (const DEVPROPKEY *)&DEVPKEY_Device_IsConnected;
      return (unsigned int)CmGetContainerBooleanProperty(
                             a1,
                             a2,
                             a3,
                             (_DWORD)v16,
                             (__int64)a6,
                             (__int64)a7,
                             a8,
                             (__int64)a9);
    }
  }
  if ( v12 == 108 )
  {
    v18 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1 )
      v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data4;
    if ( !v18 )
    {
      v16 = &DEVPKEY_Device_IsRebootRequired;
      return (unsigned int)CmGetContainerBooleanProperty(
                             a1,
                             a2,
                             a3,
                             (_DWORD)v16,
                             (__int64)a6,
                             (__int64)a7,
                             a8,
                             (__int64)a9);
    }
  }
  return v10;
}
