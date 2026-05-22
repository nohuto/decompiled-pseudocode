/*
 * XREFs of ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXKQEBGGGG@Z @ 0x18008F660
 * Callers:
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::TelemetrySpatialInputController_Added_(
        RawInputProvidersTracing *this,
        int a2,
        unsigned __int16 *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  const struct _TlgProvider_t *v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  PCWSTR v13; // rax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  PCWSTR v16; // rax
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  PCWSTR v19; // rax
  const wchar_t *v20; // rdx
  __int64 v21; // rcx
  PCWSTR v22; // rax
  __int64 v23; // rcx
  const wchar_t *v24; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h]
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v27; // [rsp+50h] [rbp-B0h]
  HSTRING v28; // [rsp+58h] [rbp-A8h]
  HSTRING v29; // [rsp+60h] [rbp-A0h]
  HSTRING v30; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  const wchar_t *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  const wchar_t *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  const wchar_t *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  const wchar_t *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  const wchar_t *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  const wchar_t *v51; // [rsp+100h] [rbp+0h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  __int16 *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  unsigned __int16 *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  unsigned __int16 *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+188h] [rbp+88h] BYREF
  __int16 v61; // [rsp+198h] [rbp+98h] BYREF

  v61 = a4;
  v60 = a2;
  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (BYTE *)&v24,
    a3,
    (__int64)a3);
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
  {
    v32 = &v60;
    v33 = 4LL;
    v7 = &word_1800DF514;
    LODWORD(v8) = 0;
    v9 = &word_1800DF514;
    if ( v24 )
    {
      v9 = v24;
      v8 = -1LL;
      do
        ++v8;
      while ( v24[v8] );
    }
    v34 = v9;
    v35 = 2 * v8 + 2;
    v36 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v11 = &word_1800DF514;
    LODWORD(v12) = 0;
    if ( StringRawBuffer )
    {
      v11 = StringRawBuffer;
      v12 = -1LL;
      do
        ++v12;
      while ( StringRawBuffer[v12] );
    }
    v37 = v11;
    v38 = 2 * v12 + 2;
    v40 = &v26;
    v39 = 0;
    v41 = 16LL;
    v13 = WindowsGetStringRawBuffer(v27, 0LL);
    v14 = &word_1800DF514;
    LODWORD(v15) = 0;
    if ( v13 )
    {
      v14 = v13;
      v15 = -1LL;
      do
        ++v15;
      while ( v13[v15] );
    }
    v42 = v14;
    v43 = 2 * v15 + 2;
    v44 = 0;
    v16 = WindowsGetStringRawBuffer(v28, 0LL);
    v17 = &word_1800DF514;
    LODWORD(v18) = 0;
    if ( v16 )
    {
      v17 = v16;
      v18 = -1LL;
      do
        ++v18;
      while ( v16[v18] );
    }
    v45 = v17;
    v46 = 2 * v18 + 2;
    v47 = 0;
    v19 = WindowsGetStringRawBuffer(v29, 0LL);
    v20 = &word_1800DF514;
    LODWORD(v21) = 0;
    if ( v19 )
    {
      v20 = v19;
      v21 = -1LL;
      do
        ++v21;
      while ( v19[v21] );
    }
    v48 = v20;
    v49 = 2 * v21 + 2;
    v50 = 0;
    v22 = WindowsGetStringRawBuffer(v30, 0LL);
    LODWORD(v23) = 0;
    if ( v22 )
    {
      v7 = v22;
      v23 = -1LL;
      do
        ++v23;
      while ( v22[v23] );
    }
    v51 = v7;
    v52 = 2 * v23 + 2;
    v54 = &v61;
    v56 = &a5;
    v58 = &a6;
    v53 = 0;
    v55 = 2LL;
    v57 = 2LL;
    v59 = 2LL;
    TlgWrite(v6, &unk_1800EF95F, 0LL, 0LL, 0xDu, &pData);
  }
  WindowsDeleteString(v30);
  v30 = 0LL;
  WindowsDeleteString(v29);
  v29 = 0LL;
  WindowsDeleteString(v28);
  v28 = 0LL;
  WindowsDeleteString(v27);
  v27 = 0LL;
  WindowsDeleteString(string);
}
