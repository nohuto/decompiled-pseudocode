/*
 * XREFs of ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x18009361C
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___ @ 0x180093744 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc11095.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        const WCHAR **a1,
        const WCHAR *a2,
        const unsigned __int16 *a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const WCHAR *v8; // rdx
  const WCHAR *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  const unsigned __int16 *v12; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+58h] [rbp-40h]
  int v17; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+68h] [rbp-30h]
  int v20; // [rsp+6Ch] [rbp-2Ch]
  const unsigned __int16 *v21; // [rsp+70h] [rbp-28h]
  int v22; // [rsp+78h] [rbp-20h]
  int v23; // [rsp+7Ch] [rbp-1Ch]

  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = &Src;
    v9 = &Src;
    LODWORD(v10) = 0;
    if ( *a1 )
    {
      v9 = *a1;
      v10 = -1LL;
      do
        ++v10;
      while ( (*a1)[v10] );
    }
    v15 = v9;
    v16 = 2 * v10 + 2;
    LODWORD(v11) = 0;
    v17 = 0;
    if ( a2 )
    {
      v8 = a2;
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    v18 = v8;
    v19 = 2 * v11 + 2;
    LODWORD(v11) = 0;
    v20 = 0;
    v12 = &word_1800E10E4;
    if ( a3 )
    {
      v12 = a3;
      v11 = -1LL;
      do
        ++v11;
      while ( *((_BYTE *)a3 + v11) );
    }
    v21 = v12;
    v22 = v11 + 1;
    v23 = 0;
    LODWORD(v6) = TlgWrite(v7, &unk_18013F144, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
