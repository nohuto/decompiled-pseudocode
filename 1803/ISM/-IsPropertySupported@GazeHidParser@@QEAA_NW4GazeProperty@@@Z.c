/*
 * XREFs of ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800AE8B0
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x180076180 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GazeHidParser::IsPropertySupported(__int64 a1, int a2)
{
  __int64 *v2; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  int v5; // r9d
  __int64 *v6; // r10

  v2 = *(__int64 **)(a1 + 72);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *((_DWORD *)v4 + 7);
    v6 = v4;
    if ( v5 >= a2 )
      v4 = (__int64 *)*v4;
    else
      v4 = (__int64 *)v4[2];
    if ( v5 >= a2 )
      v3 = v6;
  }
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 7) )
    v3 = v2;
  return v3 != v2;
}
