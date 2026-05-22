/*
 * XREFs of ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180044470
 * Callers:
 *     ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x1800442C0 (-OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 */

__int64 GestureSession::RefreshScreenSize(void)
{
  HDC DC; // rax
  HDC v1; // rbx
  int v3; // edi
  int v4; // ebx
  float v5; // xmm0_4
  float v6; // xmm6_4
  DWORD cbData; // [rsp+80h] [rbp+20h] BYREF
  DWORD Type; // [rsp+88h] [rbp+28h] BYREF
  int Data; // [rsp+90h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+98h] [rbp+38h] BYREF

  DC = GetDC(0LL);
  v1 = DC;
  if ( !DC )
    return 2147500037LL;
  GestureSession::s_horizontalResolution = GetDeviceCaps(DC, 8);
  GestureSession::s_verticalResolution = GetDeviceCaps(v1, 10);
  ReleaseDC(0LL, v1);
  hKey = 0LL;
  GestureSession::s_horizontalSize = 5000;
  GestureSession::s_verticalSize = 8300;
  GestureSession::s_PhysicalScaleFactor = 1.0;
  GestureSession::s_LogicalScaleFactor = 1.0;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\TOUCH\\DISPLAYPROPERTIES", 0, 1u, &hKey) || !hKey )
    goto LABEL_16;
  cbData = 4;
  v3 = 0;
  v4 = 0;
  if ( !RegQueryValueExW(hKey, L"DisplayWidth10um", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && cbData == 4 )
    v3 = Data;
  cbData = 4;
  if ( !RegQueryValueExW(hKey, L"DisplayHeight10um", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && cbData == 4 )
    v4 = Data;
  RegCloseKey(hKey);
  if ( v3 && v4 )
  {
    GestureSession::s_horizontalSize = v3;
    GestureSession::s_verticalSize = v4;
  }
  else
  {
LABEL_16:
    v3 = GestureSession::s_horizontalSize;
    v4 = GestureSession::s_verticalSize;
  }
  if ( GestureSession::s_horizontalResolution != 480 || GestureSession::s_verticalResolution != 800 )
  {
    if ( GestureSession::s_horizontalResolution <= GestureSession::s_verticalResolution )
      v5 = (float)GestureSession::s_verticalResolution / 800.0;
    else
      v5 = (float)GestureSession::s_horizontalResolution / 480.0;
    GestureSession::s_LogicalScaleFactor = v5;
  }
  if ( v3 != 5000
    || v4 != 8300
    || GestureSession::s_horizontalResolution != 480
    || GestureSession::s_verticalResolution != 800 )
  {
    v6 = sqrtf_0((float)(GestureSession::s_horizontalResolution * GestureSession::s_horizontalResolution
                       + GestureSession::s_verticalResolution * GestureSession::s_verticalResolution));
    GestureSession::s_PhysicalScaleFactor = (float)(v6
                                                  / sqrtf_0(
                                                      (float)((float)((float)v3 / 100.0) * (float)((float)v3 / 100.0))
                                                    + (float)((float)((float)v4 / 100.0) * (float)((float)v4 / 100.0))))
                                          / 9.6282997;
  }
  return 0LL;
}
