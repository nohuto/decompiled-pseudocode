/*
 * XREFs of ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x1800AB4F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18000B014 (-TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_TelemetrySetApplicationId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *a4,
        char *a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r8

  if ( a6 < 8 )
  {
    CComposition::FailFastOnMalformedPacket(this, 2350814536LL, 0LL, this);
    __debugbreak();
  }
  v6 = *(_QWORD *)a5 >> 1;
  if ( (*(_QWORD *)a5 & 1) != 0 || !*(_QWORD *)a5 || v6 > 0x64 || a6 != *(_QWORD *)a5 + 8LL + (-(*(_DWORD *)a5 + 8) & 3) )
  {
    CComposition::FailFastOnMalformedPacket(this, 2350814536LL, 0LL, this);
    JUMPOUT(0x1800AB55ELL);
  }
  CChannelContext::TelemetrySetApplicationId(a2, a5 + 8, v6);
  return 0LL;
}
