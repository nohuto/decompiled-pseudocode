/*
 * XREFs of ?__StaticInitConfig@DragRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800DD9EC
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1800DE3F4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800DBD64 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall DragRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // edi
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 20.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DragInitialThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  DragRecognizer::s_initialDragThreshold = v2;
  DragRecognizer::s_orientationBias = GestureSession::ReadRegConfigValue(hKey, L"DragOrientationBias", 0x19u, 0);
  v3 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 100.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DragDirectionLockThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v3) = Data;
  }
  DragRecognizer::s_directionLockThreshold = v3;
  v4 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 50.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DragDirectionLockMinorThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v4) = Data;
  }
  DragRecognizer::s_directionLockMinorThreshold = v4;
  v5 = (int)GestureSession::s_PhysicalScaleFactor;
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"DragMinimumUpdateThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v5) = Data;
  }
  DragRecognizer::s_minimumUpdateThreshold = v5;
  DragRecognizer::s_jitterDeadZoneThreshold = GestureSession::ReadRegConfigValue(
                                                hKey,
                                                L"DragJitterDeadZoneThreshold",
                                                1u,
                                                0);
}
