/*
 * XREFs of ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C0009E78 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00E8E14 (DwmAsyncNotifyAnimationChange.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B473C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B4F2C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B51BC (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetSPIMetrics(struct _UNICODE_STRING *a1, int a2, struct tagMINIMIZEDMETRICS *a3, int a4)
{
  int v7; // esi
  void *v8; // rax
  unsigned int v9; // ecx

  switch ( a2 )
  {
    case ',':
      return xxxSPISetMinMetrics(a1, a3, a4);
    case '"':
      return SPISetIconTitleFont(a1, (struct tagLOGFONTW *)a3, a4);
    case '*':
      return xxxSPISetNCMetrics(a1, a3, a4);
    case '.':
      return SPISetIconMetrics(a1, a3, a4);
  }
  if ( a2 != 73 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v7 = *((_DWORD *)a3 + 1);
  v8 = (void *)ReferenceDwmApiPort();
  DwmAsyncNotifyAnimationChange(v8);
  if ( a4 )
  {
    v9 = SetWindowMetricInt(a1, 0x95u, v7);
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = 0;
  }
  if ( v7 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  return v9;
}
