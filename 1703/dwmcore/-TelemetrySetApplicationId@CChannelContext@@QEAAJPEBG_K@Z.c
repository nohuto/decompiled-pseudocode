/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18007E070
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x18005C664 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800C41E4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(
        CChannelContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int16 *v4; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // rax

  v3 = 0;
  v4 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v8 = a3 + 1;
    v9 = (unsigned __int16 *)operator new(saturated_mul(a3 + 1, 2uLL));
    v4 = v9;
    if ( v9 )
    {
      v3 = StringCchCopyNW(v9, v8, a2, a3);
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 6) = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC3u);
    }
  }
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
