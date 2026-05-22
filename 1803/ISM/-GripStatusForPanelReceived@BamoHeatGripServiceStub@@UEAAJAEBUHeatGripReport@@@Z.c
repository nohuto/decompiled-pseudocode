/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x180038B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180038E14 (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 */

__int64 __fastcall BamoHeatGripServiceStub::GripStatusForPanelReceived(
        BamoHeatGripServiceStub *this,
        const struct HeatGripReport *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL);
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
    v4 = v5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  v6 = BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
         (BamoHeatGripServiceStub *)((char *)this + 8),
         a2);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      JUMPOUT(0x180038BBELL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  return v6;
}
