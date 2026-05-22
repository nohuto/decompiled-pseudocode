/*
 * XREFs of ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXKQEBG@Z @ 0x18008F908
 * Callers:
 *     _lambda_a8e9d8c2878d8636ab767a000decf001_::operator() @ 0x180093A88 (_lambda_a8e9d8c2878d8636ab767a000decf001_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::TelemetrySpatialInputController_Removed_(
        RawInputProvidersTracing *this,
        int a2,
        unsigned __int16 *a3)
{
  const struct _TlgProvider_t *v3; // rdi
  const wchar_t *v4; // rbx
  __int64 v5; // rax
  const wchar_t *v6; // rdx
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v8; // rdx
  __int64 v9; // rcx
  PCWSTR v10; // rax
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  PCWSTR v13; // rax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  PCWSTR v16; // rax
  const wchar_t *v17; // rdx
  __int64 v18; // rcx
  PCWSTR v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h]
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v24; // [rsp+58h] [rbp-B0h]
  HSTRING v25; // [rsp+60h] [rbp-A8h]
  HSTRING v26; // [rsp+68h] [rbp-A0h]
  HSTRING v27; // [rsp+70h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  const wchar_t *v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B4h] [rbp-54h]
  const wchar_t *v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-48h]
  int v36; // [rsp+C4h] [rbp-44h]
  char *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  const wchar_t *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  const wchar_t *v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h]
  int v44; // [rsp+F4h] [rbp-14h]
  const wchar_t *v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  const wchar_t *v48; // [rsp+108h] [rbp+0h]
  int v49; // [rsp+110h] [rbp+8h]
  int v50; // [rsp+114h] [rbp+Ch]
  int v51; // [rsp+150h] [rbp+48h] BYREF

  v51 = a2;
  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (BYTE *)&v21,
    a3,
    (__int64)a3);
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v29 = &v51;
    v30 = 4LL;
    v4 = &word_1800DF514;
    LODWORD(v5) = 0;
    v6 = &word_1800DF514;
    if ( v21 )
    {
      v6 = v21;
      v5 = -1LL;
      do
        ++v5;
      while ( v21[v5] );
    }
    v31 = v6;
    v32 = 2 * v5 + 2;
    v33 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v8 = &word_1800DF514;
    LODWORD(v9) = 0;
    if ( StringRawBuffer )
    {
      v8 = StringRawBuffer;
      v9 = -1LL;
      do
        ++v9;
      while ( StringRawBuffer[v9] );
    }
    v34 = v8;
    v35 = 2 * v9 + 2;
    v37 = &v23;
    v36 = 0;
    v38 = 16LL;
    v10 = WindowsGetStringRawBuffer(v24, 0LL);
    v11 = &word_1800DF514;
    LODWORD(v12) = 0;
    if ( v10 )
    {
      v11 = v10;
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
    }
    v39 = v11;
    v40 = 2 * v12 + 2;
    v41 = 0;
    v13 = WindowsGetStringRawBuffer(v25, 0LL);
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
    v16 = WindowsGetStringRawBuffer(v26, 0LL);
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
    v19 = WindowsGetStringRawBuffer(v27, 0LL);
    LODWORD(v20) = 0;
    if ( v19 )
    {
      v4 = v19;
      v20 = -1LL;
      do
        ++v20;
      while ( v19[v20] );
    }
    v48 = v4;
    v49 = 2 * v20 + 2;
    v50 = 0;
    TlgWrite(v3, &unk_1800EFB0C, 0LL, 0LL, 0xAu, &pData);
  }
  WindowsDeleteString(v27);
  v27 = 0LL;
  WindowsDeleteString(v26);
  v26 = 0LL;
  WindowsDeleteString(v25);
  v25 = 0LL;
  WindowsDeleteString(v24);
  v24 = 0LL;
  WindowsDeleteString(string);
}
