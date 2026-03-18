/*
 * XREFs of ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01A9C54
 * Callers:
 *     ReadTiltCalibrationData @ 0x1C01AA434 (ReadTiltCalibrationData.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A9DAC (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     ValidateCalibrationData @ 0x1C01AA840 (ValidateCalibrationData.c)
 */

__int64 __fastcall ReadCalibrationDataImp(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned __int8 **a4)
{
  NTSTATUS v7; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 *v11; // rax
  unsigned int v12; // eax
  unsigned __int8 *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    ValueName = *a1;
    v7 = RegQueryValueCal(KeyHandle, &ValueName, v8, 0LL, 0, a3);
    if ( v7 == -1073741789 && *a3 - 40 <= 0xFFD7 )
    {
      if ( *a4 )
      {
        Win32FreePool(*a4, v9, v10);
        *a4 = 0LL;
      }
      v11 = (unsigned __int8 *)Win32AllocPool(*a3, 2020635477LL);
      *a4 = v11;
      if ( v11 )
      {
        memset(v11, 0, *a3);
        v12 = *a3;
        v13 = *a4;
        ValueName = *a1;
        v7 = RegQueryValueCal(KeyHandle, &ValueName, v14, v13, v12, a3);
        if ( v7 >= 0 && !(unsigned int)ValidateCalibrationData(*a3, *a4, 3LL) )
          v7 = -1073741668;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    ZwClose(KeyHandle);
    if ( v7 < 0 )
    {
      *a3 = 0;
      if ( *a4 )
      {
        Win32FreePool(*a4, v15, v16);
        *a4 = 0LL;
      }
    }
  }
  return (unsigned int)v7;
}
