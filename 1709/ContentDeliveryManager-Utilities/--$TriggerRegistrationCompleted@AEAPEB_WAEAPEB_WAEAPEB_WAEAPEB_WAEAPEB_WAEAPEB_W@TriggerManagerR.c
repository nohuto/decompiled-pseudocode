/*
 * XREFs of ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18005C1E0
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18005C400 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
        const WCHAR **a1,
        const WCHAR **a2,
        const WCHAR **a3,
        const WCHAR **a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const unsigned __int16 *a7)
{
  const struct _TlgProvider_t *v11; // rax
  const struct _TlgProvider_t *v12; // r10
  const WCHAR *v13; // rdx
  const WCHAR *v14; // r8
  __int64 v15; // rax
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r8
  const WCHAR *v18; // rcx
  const WCHAR *v19; // r8
  const WCHAR *v20; // rcx
  const WCHAR *v21; // r8
  const WCHAR *v22; // r8
  const unsigned __int16 *v23; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  const WCHAR *v26; // [rsp+58h] [rbp-41h]
  int v27; // [rsp+60h] [rbp-39h]
  int v28; // [rsp+64h] [rbp-35h]
  const WCHAR *v29; // [rsp+68h] [rbp-31h]
  int v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+74h] [rbp-25h]
  const WCHAR *v32; // [rsp+78h] [rbp-21h]
  int v33; // [rsp+80h] [rbp-19h]
  int v34; // [rsp+84h] [rbp-15h]
  const WCHAR *v35; // [rsp+88h] [rbp-11h]
  int v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+94h] [rbp-5h]
  const WCHAR *v38; // [rsp+98h] [rbp-1h]
  int v39; // [rsp+A0h] [rbp+7h]
  int v40; // [rsp+A4h] [rbp+Bh]
  const WCHAR *v41; // [rsp+A8h] [rbp+Fh]
  int v42; // [rsp+B0h] [rbp+17h]
  int v43; // [rsp+B4h] [rbp+1Bh]
  const unsigned __int16 *v44; // [rsp+B8h] [rbp+1Fh]
  int v45; // [rsp+C0h] [rbp+27h]
  int v46; // [rsp+C4h] [rbp+2Bh]

  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v12 = v11;
  if ( *(_DWORD *)v11 > 5u )
  {
    LODWORD(v11) = 0;
    if ( (*((_QWORD *)v12 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v12 + 3) & 0x400000000000LL) == *((_QWORD *)v12 + 3) )
    {
      v13 = &Src;
      v14 = &Src;
      LODWORD(v15) = 0;
      if ( *a1 )
      {
        v14 = *a1;
        v15 = -1LL;
        do
          ++v15;
        while ( (*a1)[v15] );
      }
      v16 = *a2;
      v27 = 2 * v15 + 2;
      LODWORD(v15) = 0;
      v26 = v14;
      v17 = &Src;
      v28 = 0;
      if ( v16 )
      {
        v17 = v16;
        v15 = -1LL;
        do
          ++v15;
        while ( v16[v15] );
      }
      v18 = *a3;
      v30 = 2 * v15 + 2;
      LODWORD(v15) = 0;
      v29 = v17;
      v19 = &Src;
      v31 = 0;
      if ( v18 )
      {
        v19 = v18;
        v15 = -1LL;
        do
          ++v15;
        while ( v18[v15] );
      }
      v20 = *a4;
      v33 = 2 * v15 + 2;
      LODWORD(v15) = 0;
      v32 = v19;
      v21 = &Src;
      v34 = 0;
      if ( v20 )
      {
        v21 = v20;
        v15 = -1LL;
        do
          ++v15;
        while ( v20[v15] );
      }
      v35 = v21;
      v36 = 2 * v15 + 2;
      v22 = &Src;
      v37 = 0;
      LODWORD(v15) = 0;
      if ( *a5 )
      {
        v22 = *a5;
        v15 = -1LL;
        do
          ++v15;
        while ( (*a5)[v15] );
      }
      v38 = v22;
      v39 = 2 * v15 + 2;
      v40 = 0;
      LODWORD(v15) = 0;
      if ( *a6 )
      {
        v13 = *a6;
        v15 = -1LL;
        do
          ++v15;
        while ( (*a6)[v15] );
      }
      v42 = 2 * v15 + 2;
      LODWORD(v15) = 0;
      v41 = v13;
      v23 = &word_1800E10E4;
      v43 = 0;
      if ( a7 )
      {
        v23 = a7;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)a7 + v15) );
      }
      v44 = v23;
      v45 = v15 + 1;
      v46 = 0;
      LODWORD(v11) = TlgWrite(v12, &unk_18013DC99, 0LL, 0LL, 9u, &pData);
    }
  }
  return (int)v11;
}
