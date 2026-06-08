/*
 * XREFs of SetPerfStateIOHidden @ 0x1C00048A0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrHidden @ 0x1C0004138 (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C0004254 (WriteGenAddrHidden.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v9; // edx

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, (char *)(a2 + 12));
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          3,
          24,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
          a4,
          GenAddrHidden);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
