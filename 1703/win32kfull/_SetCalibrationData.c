/*
 * XREFs of _SetCalibrationData @ 0x1C01B3D04
 * Callers:
 *     NtUserSetCalibrationData @ 0x1C01DEE80 (NtUserSetCalibrationData.c)
 * Callees:
 *     GetPointerDeviceKey @ 0x1C0013BD0 (GetPointerDeviceKey.c)
 *     UpdateTiltCalData @ 0x1C01A2F44 (UpdateTiltCalData.c)
 *     ValidateCalibrationData @ 0x1C01A3088 (ValidateCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01A31D0 (WriteTiltCalibrationData.c)
 */

__int64 __fastcall SetCalibrationData(__int64 a1, ULONG a2, void *a3, int a4)
{
  const WCHAR *v4; // rsi
  unsigned int v5; // edi
  unsigned int updated; // eax
  __int64 v11; // rcx
  int v12; // r8d
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v15; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = 0;
  v17 = 0;
  if ( a3 )
  {
    if ( ValidateCalibrationData(a2, (__int64)a3, a4) )
    {
      switch ( a4 )
      {
        case 1:
          v4 = L"LinearityData";
          break;
        case 2:
          v4 = L"UserLinearityData";
          break;
        case 3:
          v4 = L"Default";
          break;
      }
      updated = UpdateTiltCalData(*(_QWORD *)(a1 + 472), a2, (__int64)a3, a4, &v17);
      v5 = updated;
      if ( v4 && updated )
      {
        v11 = (unsigned int)(a4 - 1);
        if ( (unsigned int)v11 <= 1 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          v15 = *(struct _UNICODE_STRING *)(a1 + 208);
          if ( GetPointerDeviceKey((int)&v15, &KeyHandle, v12) )
          {
            if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a3, a2) >= 0 )
              v5 = 1;
            ZwClose(KeyHandle);
          }
        }
        else if ( a4 == 3 )
        {
          v15 = *(struct _UNICODE_STRING *)(a1 + 208);
          WriteTiltCalibrationData(v11, &v15, v17, a2, a3);
        }
      }
    }
  }
  else
  {
    return (unsigned int)UpdateTiltCalData(*(_QWORD *)(a1 + 472), a2, 0LL, a4, &v17);
  }
  return v5;
}
