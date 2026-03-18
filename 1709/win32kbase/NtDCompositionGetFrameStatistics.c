/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C0037720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C00348C0 (-GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0034974 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0036E40 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _OWORD *a2)
{
  signed int FrameStatistics; // ebx
  DirectComposition::CConnection *DefaultConnection; // r14
  unsigned int v6; // edx
  __int128 v8; // [rsp+20h] [rbp-48h]
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  FrameStatistics = a1 == 0 ? 0xC000000D : 0;
  if ( a1 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      FrameStatistics = -1073741790;
    if ( FrameStatistics >= 0 )
    {
      FrameStatistics = DirectComposition::CConnection::GetFrameStatistics(
                          DefaultConnection,
                          (union _LARGE_INTEGER *)v9);
      v8 = DirectComposition::CConnection::s_capabilityInfo;
      DirectComposition::CConnection::Release(DefaultConnection, v6);
      if ( FrameStatistics >= 0 )
      {
        if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = v9[0];
        *(_OWORD *)(a1 + 16) = v9[1];
        *(_QWORD *)(a1 + 32) = v10;
        if ( a2 )
        {
          if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a2 = v8;
        }
      }
    }
  }
  return (unsigned int)FrameStatistics;
}
