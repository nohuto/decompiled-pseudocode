/*
 * XREFs of ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x18007E4A8
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x18007CC18 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$12 @ 0x1800C6BC8 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800C6C49 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
        const WCHAR **a1,
        const WCHAR **a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5)
{
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  const WCHAR *v11; // rdx
  const WCHAR *v12; // r8
  __int64 v13; // rax
  const WCHAR *v14; // rcx
  const WCHAR *v15; // r8
  const WCHAR *v16; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-31h] BYREF
  const WCHAR *v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+60h] [rbp-9h]
  int v21; // [rsp+64h] [rbp-5h]
  const WCHAR *v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+74h] [rbp+Bh]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  __int64 v28; // [rsp+90h] [rbp+27h]
  const WCHAR *v29; // [rsp+98h] [rbp+2Fh]
  int v30; // [rsp+A0h] [rbp+37h]
  int v31; // [rsp+A4h] [rbp+3Bh]

  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(v9) = 0;
    if ( (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v11 = &Src;
      v12 = &Src;
      LODWORD(v13) = 0;
      if ( *a1 )
      {
        v12 = *a1;
        v13 = -1LL;
        do
          ++v13;
        while ( (*a1)[v13] );
      }
      v14 = *a2;
      v20 = 2 * v13 + 2;
      LODWORD(v13) = 0;
      v19 = v12;
      v15 = &Src;
      v21 = 0;
      if ( v14 )
      {
        v15 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( v14[v13] );
      }
      v22 = v15;
      v23 = 2 * v13 + 2;
      v24 = 0;
      v25 = a3;
      v26 = 1LL;
      v16 = *a5;
      LODWORD(v13) = 0;
      v27 = a4;
      v28 = 4LL;
      if ( v16 )
      {
        v11 = v16;
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
      }
      v29 = v11;
      v30 = 2 * v13 + 2;
      v31 = 0;
      LODWORD(v9) = TlgWrite(v10, &unk_180158AB1, 0LL, 0LL, 7u, &pData);
    }
  }
  return (int)v9;
}
