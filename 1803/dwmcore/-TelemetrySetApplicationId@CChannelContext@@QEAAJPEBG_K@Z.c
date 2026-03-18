/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x1800210A4
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x18002DFF4 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180020E08 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xF1u);
    }
  }
  operator delete(v4);
  return (unsigned int)v3;
}
