/*
 * XREFs of SetPerfStateIOHidden @ 0x1C0002BC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0001470 (WPP_RECORDER_SF_DD.c)
 *     ReadGenAddrHidden @ 0x1C00036DC (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C00037D4 (WriteGenAddrHidden.c)
 */

__int64 __fastcall SetPerfStateIOHidden(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v6 = a1;
  v7 = 0;
  WriteGenAddrHidden(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(v6, a2 + 12);
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        v11 = GenAddrHidden;
        v10 = a4;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x18u,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v10,
          v11);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
