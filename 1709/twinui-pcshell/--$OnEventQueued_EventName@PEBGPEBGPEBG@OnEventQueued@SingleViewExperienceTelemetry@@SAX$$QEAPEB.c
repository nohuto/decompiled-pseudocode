/*
 * XREFs of ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x1801D3ECC
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D1504 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnEventQueued::OnEventQueued_EventName<unsigned short const *,unsigned short const *,unsigned short const *>(
        const WCHAR **a1,
        const WCHAR **a2,
        const WCHAR **a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rsi
  const WCHAR *v8; // r10
  const WCHAR *v9; // r11
  __int64 v10; // rcx
  int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  const WCHAR *v15; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+6Ch] [rbp-2Ch]
  const WCHAR *v24; // [rsp+70h] [rbp-28h]
  int v25; // [rsp+78h] [rbp-20h]
  int v26; // [rsp+7Ch] [rbp-1Ch]

  v6 = SingleViewExperienceLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = &word_18021F3A8;
    v9 = &word_18021F3A8;
    LODWORD(v10) = 0;
    if ( *a1 )
    {
      v9 = *a1;
      v10 = -1LL;
      do
        ++v10;
      while ( (*a1)[v10] );
    }
    v11 = 2 * v10 + 2;
    v18 = v9;
    v12 = *a2;
    v13 = &word_18021F3A8;
    v19 = v11;
    LODWORD(v14) = 0;
    v20 = 0;
    if ( v12 )
    {
      v13 = v12;
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
    }
    v15 = *a3;
    v22 = 2 * v14 + 2;
    LODWORD(v14) = 0;
    v21 = v13;
    v23 = 0;
    if ( v15 )
    {
      v8 = v15;
      v14 = -1LL;
      do
        ++v14;
      while ( v15[v14] );
    }
    v24 = v8;
    v25 = 2 * v14 + 2;
    v26 = 0;
    LODWORD(v6) = TlgWrite(v7, &unk_18026928E, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
