/*
 * XREFs of ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x180093B80
 * Callers:
 *     _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x180092D88 (_lambda_245d84deaf182427ab842afa126b70f8_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
        const WCHAR **a1,
        const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  const WCHAR *v6; // r8
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const WCHAR *v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  const unsigned __int16 *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    LODWORD(v4) = 0;
    if ( (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
    {
      v6 = &Src;
      LODWORD(v7) = 0;
      if ( *a1 )
      {
        v6 = *a1;
        v7 = -1LL;
        do
          ++v7;
        while ( (*a1)[v7] );
      }
      v11 = v6;
      v12 = 2 * v7 + 2;
      LODWORD(v7) = 0;
      v13 = 0;
      v8 = &word_1800E10E4;
      if ( a2 )
      {
        v8 = a2;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)a2 + v7) );
      }
      v14 = v8;
      v15 = v7 + 1;
      v16 = 0;
      LODWORD(v4) = TlgWrite(v5, &unk_18013F0FB, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v4;
}
