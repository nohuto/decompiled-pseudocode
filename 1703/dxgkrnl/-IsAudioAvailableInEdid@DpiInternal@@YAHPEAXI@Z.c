/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01BBD70
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01BFFE0 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     MonitorIsAudioSupportedInEdid @ 0x1C01E3DEC (MonitorIsAudioSupportedInEdid.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2)
{
  __int64 v2; // rbx
  int IsAudioSupportedInEdid; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rax

  v2 = (unsigned int)a2;
  IsAudioSupportedInEdid = MonitorIsAudioSupportedInEdid(this, (unsigned int)a2);
  v7 = IsAudioSupportedInEdid;
  if ( IsAudioSupportedInEdid < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v8[3] = v7;
    v8[4] = this;
    v8[5] = v2;
    WdLogEvent5_WdError(v8);
  }
  return 0LL;
}
