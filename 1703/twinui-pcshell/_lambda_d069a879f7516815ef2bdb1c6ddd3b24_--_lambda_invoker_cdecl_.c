/*
 * XREFs of _lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_ @ 0x1800B6BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1800B810C (-IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagP.c)
 */

__int64 __fastcall lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        _QWORD *a4)
{
  char IsPointerDeviceSupportedOnMonitor; // al
  unsigned int v7; // edx

  IsPointerDeviceSupportedOnMonitor = CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(a1);
  v7 = 0;
  if ( IsPointerDeviceSupportedOnMonitor )
    *a4 = a1;
  else
    return 1;
  return v7;
}
