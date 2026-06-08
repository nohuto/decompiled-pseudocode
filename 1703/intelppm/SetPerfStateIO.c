/*
 * XREFs of SetPerfStateIO @ 0x1C0003930
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001374 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013CC (WriteGenAddr.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int GenAddr; // eax
  int v7; // edx

  v5 = 0;
  WriteGenAddr((_BYTE *)a1, a2);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      GenAddr = ReadGenAddr(a1 + 12);
      if ( GenAddr != (_DWORD)a3 )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          3,
          23,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
          a3,
          GenAddr);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
