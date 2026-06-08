/*
 * XREFs of SetPerfStateIOHidden @ 0x1C0009400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0001F1C (WPP_RECORDER_SF_DD.c)
 *     ReadGenAddrHidden @ 0x1C0008FD0 (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C00090C8 (WriteGenAddrHidden.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, a2 + 12);
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        v11 = GenAddrHidden;
        v10 = a4;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x18u,
          (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
          v10,
          v11);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
