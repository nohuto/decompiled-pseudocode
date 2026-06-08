/*
 * XREFs of SetPerfStateIO @ 0x1C0008FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0001E8C (WPP_RECORDER_SF_DD.c)
 *     ReadGenAddr @ 0x1C0008AC4 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008B1C (WriteGenAddr.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int GenAddr; // eax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v5 = 0;
  WriteGenAddr((_BYTE *)a1, a2);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      GenAddr = ReadGenAddr(a1 + 12);
      if ( GenAddr != (_DWORD)a3 )
      {
        v9 = GenAddr;
        v8 = a3;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x17u,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
          v8,
          v9);
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
