/*
 * XREFs of ?__StaticInitConfig@TwoFingerGestureRecognizer@@SAXPEAUHKEY__@@@Z @ 0x1800DE144
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1800DE3F4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x1800DBD64 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall TwoFingerGestureRecognizer::__StaticInitConfig(HKEY hKey)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  DWORD cbData; // [rsp+50h] [rbp+20h] BYREF
  DWORD Type; // [rsp+58h] [rbp+28h] BYREF
  __int16 Data; // [rsp+60h] [rbp+30h] BYREF

  v2 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 480.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v2) = Data;
  }
  TwoFingerClickRecognizer::s_twoFingerDistanceThreshold = v2;
  TwoFingerClickRecognizer::s_twoFingerActionTimeThreshold = GestureSession::ReadRegConfigValue(
                                                               hKey,
                                                               L"TwoFingerActionTimeThreshold",
                                                               0x32u,
                                                               0);
  TwoFingerClickRecognizer::s_twoFingerTapAndHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                                   hKey,
                                                                   L"TwoFingerTapAndHoldTimeThreshold",
                                                                   0xC8u,
                                                                   0);
  v3 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 20.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerTapDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v3) = Data;
  }
  TwoFingerClickRecognizer::s_twoFingerTapDistanceThreshold = v3;
  TwoFingerClickRecognizer::s_twoFingerDoubleTapTimeThreshold = GestureSession::ReadRegConfigValue(
                                                                  hKey,
                                                                  L"TwoFingerDoubleTapTimeThreshold",
                                                                  0x190u,
                                                                  0);
  v4 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 60.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerDoubleTapDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData)
      && Type == 4 )
    {
      LOWORD(v4) = Data;
    }
  }
  TwoFingerClickRecognizer::s_twoFingerDoubleTapDistanceThreshold = v4;
  v5 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 480.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerDistanceThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v5) = Data;
  }
  TwoFingerDragRecognizer::s_twoFingerDistanceThreshold = v5;
  v6 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 20.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerDragInitialThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 )
      LOWORD(v6) = Data;
  }
  TwoFingerDragRecognizer::s_initialDragThreshold = v6;
  TwoFingerDragRecognizer::s_twoFingerActionTimeThreshold = GestureSession::ReadRegConfigValue(
                                                              hKey,
                                                              L"TwoFingerActionTimeThreshold",
                                                              0x32u,
                                                              0);
  v7 = (int)(float)(GestureSession::s_PhysicalScaleFactor * 50.0);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"TwoFingerDistanceVariationThreshold", 0LL, &Type, (LPBYTE)&Data, &cbData)
      && Type == 4 )
    {
      LOWORD(v7) = Data;
    }
  }
  TwoFingerDragRecognizer::s_twoFingerDistanceVariationThreshold = v7;
}
