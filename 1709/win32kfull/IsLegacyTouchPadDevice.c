/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C00DE940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00DBFBC (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C00DC188 (GetDeviceObjectPointer.c)
 *     GetContainerId @ 0x1C00DE234 (GetContainerId.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01A7378 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01A758C (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01A770C (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1)
{
  unsigned int v1; // ebx
  int v3; // r15d
  BOOL v4; // ebp
  __int64 v5; // r8
  BOOLEAN IsResourceAcquiredExclusiveLite; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _DEVICE_OBJECT *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v17; // [rsp+38h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = gPlatformRole == 2 || gPlatformRole == 8;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_();
  if ( (int)GetDeviceObjectPointer((struct _UNICODE_STRING *)a1 + 13, 0, v5, &Handle, &v17, (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    v10 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v10, v19, &Object) >= 0 )
    {
      v3 = IsHIDMouse(a1, v10);
      v11 = 0;
      if ( v3 )
        v11 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v17, v10);
      if ( !(_DWORD)Object )
      {
        if ( !v4 )
        {
LABEL_12:
          ZwClose(Handle);
          ObfDereferenceObject(v17);
          ObfDereferenceObject(v10);
          if ( !IsResourceAcquiredExclusiveLite )
            LeaveDeviceInfoListCrit_(v13, v12, v14);
          return v1;
        }
        if ( !v3 || v11 )
        {
          EtwTraceLegacyTouchPadDetected();
          *((_WORD *)a1 + 366) |= 1u;
          v1 = 1;
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        goto LABEL_27;
      v1 = IsMouseDeviceOnWhiteList(v10, v3);
      if ( !v1 )
        goto LABEL_12;
      EtwTraceTouchPadWhiteListDeviceDetected();
      *((_WORD *)a1 + 366) |= 1u;
    }
    if ( !v1 )
      goto LABEL_12;
LABEL_27:
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(v10);
    goto LABEL_12;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v8, v7, v9);
  return 0LL;
}
