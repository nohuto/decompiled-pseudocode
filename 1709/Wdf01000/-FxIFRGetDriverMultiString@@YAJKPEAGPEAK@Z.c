/*
 * XREFs of ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C00705C4
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0070784 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0037530 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 */

__int64 __fastcall FxIFRGetDriverMultiString(
        unsigned int ValueLength,
        wchar_t *Value,
        unsigned int *ValueLengthQueried)
{
  int v6; // ebx
  unsigned int v7; // edx
  unsigned int type; // [rsp+40h] [rbp-C0h] BYREF
  FxAutoRegKey hWdf; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING path; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING driverListToReplay; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  wchar_t driverListToReplay_buffer[32]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t path_buffer[56]; // [rsp+E0h] [rbp-20h] BYREF

  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  path.Buffer = path_buffer;
  wcscpy(driverListToReplay_buffer, L"WdfIfrCaptureServiceList");
  driverListToReplay.Buffer = driverListToReplay_buffer;
  ObjectAttributes.Length = 48;
  hWdf.m_Key = 0LL;
  *(_DWORD *)&path.Length = 7209068;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_DWORD *)&driverListToReplay.Length = 3276848;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &path;
  v6 = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = FxRegKey::_QueryValue(0LL, hWdf.m_Key, &driverListToReplay, ValueLength, Value, ValueLengthQueried, &type);
    if ( v6 >= 0 )
    {
      if ( type != 7
        || (v7 = *ValueLengthQueried >> 1, (*ValueLengthQueried & 1) != 0)
        || v7 < 2
        || Value[v7 - 1]
        || Value[v7 - 2] )
      {
        v6 = -1073741788;
      }
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  return (unsigned int)v6;
}
