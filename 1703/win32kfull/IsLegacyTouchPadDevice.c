/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C011BD90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0013F4C (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0014118 (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C019B6C4 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C019B8D8 (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C019BA58 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 *     GetContainerId @ 0x1C01A71AC (GetContainerId.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1)
{
  unsigned int v2; // esi
  int v3; // r14d
  __int64 v4; // rcx
  BOOLEAN IsResourceAcquiredExclusiveLite; // bp
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rcx
  struct _DEVICE_OBJECT *v10; // rdi
  int v11; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  PVOID v13; // [rsp+38h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v4);
  v7 = gPlatformRole;
  if ( gPlatformRole != 2 && gPlatformRole != 8 )
    goto LABEL_5;
  if ( (int)GetDeviceObjectPointer((struct _UNICODE_STRING *)a1 + 13, 0, v6, &Handle, &v13, (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    v10 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v10, v15, &Object) < 0 )
      goto LABEL_19;
    v3 = IsHIDMouse(a1, v10);
    v11 = 0;
    if ( v3 )
      v11 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v13, v10);
    if ( (_DWORD)Object || v3 && !v11 )
    {
LABEL_19:
      v2 = IsMouseDeviceOnWhiteList(v10, v3);
      if ( !v2 )
      {
LABEL_23:
        ZwClose(Handle);
        ObfDereferenceObject(v13);
        ObfDereferenceObject(v10);
LABEL_5:
        if ( !IsResourceAcquiredExclusiveLite )
          LeaveDeviceInfoListCrit_(v7);
        return v2;
      }
      EtwTraceTouchPadWhiteListDeviceDetected();
    }
    else
    {
      EtwTraceLegacyTouchPadDetected();
      v2 = 1;
    }
    *((_WORD *)a1 + 366) |= 1u;
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(v10);
    goto LABEL_23;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v9);
  return 0LL;
}
