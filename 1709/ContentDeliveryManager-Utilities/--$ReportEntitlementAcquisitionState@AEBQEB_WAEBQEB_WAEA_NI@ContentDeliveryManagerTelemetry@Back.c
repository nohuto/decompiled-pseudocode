/*
 * XREFs of ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI@Z @ 0x1800739F4
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x180072450 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$8 @ 0x1800B9B1A (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$8.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$9 @ 0x1800B9B7A (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$9.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
        const WCHAR **a1,
        const WCHAR **a2,
        __int64 a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const WCHAR *v10; // rdx
  const WCHAR *v11; // r8
  __int64 v12; // rax
  const WCHAR *v13; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+60h] [rbp+Fh]
  int v18; // [rsp+64h] [rbp+13h]
  const WCHAR *v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+70h] [rbp+1Fh]
  int v21; // [rsp+74h] [rbp+23h]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  __int64 v24; // [rsp+88h] [rbp+37h]
  __int64 v25; // [rsp+90h] [rbp+3Fh]

  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    LODWORD(v8) = 0;
    if ( (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x400000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v10 = &Src;
      v11 = &Src;
      LODWORD(v12) = 0;
      if ( *a1 )
      {
        v11 = *a1;
        v12 = -1LL;
        do
          ++v12;
        while ( (*a1)[v12] );
      }
      v13 = *a2;
      v17 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v16 = v11;
      v18 = 0;
      if ( v13 )
      {
        v10 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( v13[v12] );
      }
      v19 = v10;
      v20 = 2 * v12 + 2;
      v21 = 0;
      v22 = a3;
      v23 = 1LL;
      v24 = a4;
      v25 = 4LL;
      LODWORD(v8) = TlgWrite(v9, &unk_18013ED91, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v8;
}
