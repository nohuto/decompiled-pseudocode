/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18000B014
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x1800AB4F0 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18000A420 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(CChannelContext *this, char *a2, unsigned __int64 a3)
{
  int v3; // edi
  char *v4; // rbx
  __int64 v8; // rdi
  char *v9; // rax

  v3 = 0;
  v4 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v8 = a3 + 1;
    v9 = (char *)operator new(saturated_mul(a3 + 1, 2uLL));
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xECu);
    }
  }
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
