/*
 * XREFs of ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801697B0
 * Callers:
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18016A210 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18019FA7C (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180169160 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016A458 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007045B, 0x98u);
  }
  else
  {
    v6 = operator new(0x20uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x20uLL);
      v7[2] = 0LL;
      v7[3] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v7 + 2, a3);
      v8 = *(_QWORD **)(a1 + 8);
      if ( *v8 != a1 )
        __fastfail(3u);
      *v7 = a1;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 8) = v7;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x9Bu);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v5;
}
