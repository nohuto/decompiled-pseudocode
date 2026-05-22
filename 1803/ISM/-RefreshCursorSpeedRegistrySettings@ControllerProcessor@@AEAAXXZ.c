/*
 * XREFs of ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180035EC8
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     _lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_ @ 0x1800328E0 (_lambda_b12fa00c1928b9bf49ed577602750a33_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::RefreshCursorSpeedRegistrySettings(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  unsigned int v3; // ecx
  float v4; // xmm0_4
  float v5; // xmm0_4
  DWORD pcbData; // [rsp+50h] [rbp+10h] BYREF
  int pvData; // [rsp+58h] [rbp+18h] BYREF

  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
             L"CursorUpdateInterval",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v3 = pvData;
  pcbData = 4;
  if ( ValueW )
    v3 = 5;
  *((_QWORD *)this + 896) = 10000LL * v3;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         L"IRRemoteNavigationDelta",
         0x10u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v4 = FLOAT_1_0;
  }
  else
  {
    v4 = (float)pvData * 0.1;
  }
  *((float *)this + 1790) = v4;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         L"CursorSensitivity",
         0x10u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v5 = FLOAT_10_0;
  }
  else
  {
    v5 = (float)pvData * 0.1;
  }
  *((float *)this + 1791) = v5;
}
