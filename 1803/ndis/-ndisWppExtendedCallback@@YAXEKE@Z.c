/*
 * XREFs of ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C002463C
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C004FC24 (ndisEnableWppTracingCallback.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C00255D0 (__report_rangecheckfailure.c)
 */

void __fastcall ndisWppExtendedCallback(char a1, int a2, char a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  int v5; // r9d

  v3 = 0;
  if ( a1 )
  {
    v5 = 1;
    do
    {
      if ( (v5 & a2) != 0 )
      {
        *((_BYTE *)&ndisWppEnabledLevelPerFlag + v3) = a3;
      }
      else
      {
        if ( v3 >= 0x20uLL )
          _report_rangecheckfailure(&ndisWppEnabledLevelPerFlag, v3);
        *((_BYTE *)&ndisWppEnabledLevelPerFlag + v3) = 0;
      }
      ++v3;
      v5 *= 2;
    }
    while ( v3 < 0x20u );
  }
  else
  {
    do
    {
      v4 = v3;
      if ( v3 >= 0x20uLL )
        _report_rangecheckfailure(&ndisWppEnabledLevelPerFlag, v3);
      ++v3;
      *((_BYTE *)&ndisWppEnabledLevelPerFlag + v4) = 0;
    }
    while ( v3 < 0x20u );
  }
}
