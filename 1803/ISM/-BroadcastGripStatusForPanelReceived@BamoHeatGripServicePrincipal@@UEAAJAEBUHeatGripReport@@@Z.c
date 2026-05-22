/*
 * XREFs of ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800388E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180038E14 (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 */

__int64 __fastcall BamoHeatGripServicePrincipal::BroadcastGripStatusForPanelReceived(
        BamoHeatGripServicePrincipal *this,
        const struct HeatGripReport *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edi
  __int64 i; // rdi
  unsigned int v8; // eax
  const char *v9; // r9
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
    v4 = v5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 5); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_BYTE *)(i + 32) )
      {
        v8 = BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
               (BamoImpl::BamoHeatGripServiceStubImpl *)i,
               a2);
        if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -2018375675 )
        {
          v11 = wil::verify_hresult<long>(v8);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x16C1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
            (const char *)v11);
          JUMPOUT(0x180038A04LL);
        }
      }
    }
    v6 = 0;
  }
  else
  {
    v6 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1618,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)0x87B20814LL);
  }
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  return v6;
}
