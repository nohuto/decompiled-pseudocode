/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180003EA0
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180003E70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  const struct _TlgProvider_t *v2; // r9
  const unsigned __int16 *v3; // r10
  const unsigned __int16 *v4; // rcx
  __int64 v5; // rax
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // r8
  __int16 *v9; // rcx
  __int16 *v10; // r11
  __int16 *v11; // r8
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // r8
  const GUID *v16; // rcx
  const GUID *v17; // r8
  const unsigned __int16 *v18; // rcx
  __int16 *v19; // rcx
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v28; // [rsp+88h] [rbp-80h]
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+94h] [rbp-74h]
  char *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v33; // [rsp+A8h] [rbp-60h]
  int v34; // [rsp+B0h] [rbp-58h]
  int v35; // [rsp+B4h] [rbp-54h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  __int16 *v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-38h]
  int v40; // [rsp+D4h] [rbp-34h]
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+F0h] [rbp-18h]
  int v45; // [rsp+F4h] [rbp-14h]
  int *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v48; // [rsp+108h] [rbp+0h]
  int v49; // [rsp+110h] [rbp+8h]
  int v50; // [rsp+114h] [rbp+Ch]
  const GUID *v51; // [rsp+118h] [rbp+10h]
  int v52; // [rsp+120h] [rbp+18h]
  int v53; // [rsp+124h] [rbp+1Ch]
  int *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v56; // [rsp+138h] [rbp+30h]
  int v57; // [rsp+140h] [rbp+38h]
  int v58; // [rsp+144h] [rbp+3Ch]
  __int16 *v59; // [rsp+148h] [rbp+40h]
  int v60; // [rsp+150h] [rbp+48h]
  int v61; // [rsp+154h] [rbp+4Ch]

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 5u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = &word_18002D096;
    v4 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v20 = *((_DWORD *)a2 + 1);
    v27 = 4LL;
    v26 = &v20;
    LODWORD(v5) = 0;
    v6 = &word_18002D096;
    if ( v4 )
    {
      v6 = v4;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v4 + v5) );
    }
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v29 = v5 + 1;
    v31 = (char *)a2 + 56;
    LODWORD(v5) = 0;
    v28 = v6;
    v8 = &word_18002D096;
    v30 = 0;
    v32 = 4LL;
    if ( v7 )
    {
      v8 = v7;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v7 + v5) );
    }
    v9 = (__int16 *)*((_QWORD *)a2 + 2);
    v10 = &word_18002D708;
    v33 = v8;
    v34 = v5 + 1;
    v11 = &word_18002D708;
    v21 = *(_DWORD *)a2;
    v36 = &v21;
    LODWORD(v5) = 0;
    v35 = 0;
    v37 = 4LL;
    if ( v9 )
    {
      v11 = v9;
      v5 = -1LL;
      do
        ++v5;
      while ( v9[v5] );
    }
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v39 = 2 * v5 + 2;
    v22 = *((_DWORD *)a2 + 6);
    v41 = &v22;
    LODWORD(v5) = 0;
    v38 = v11;
    v13 = &word_18002D096;
    v40 = 0;
    v42 = 4LL;
    if ( v12 )
    {
      v13 = v12;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v12 + v5) );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v44 = v5 + 1;
    v23 = *((_DWORD *)a2 + 18);
    v46 = &v23;
    LODWORD(v5) = 0;
    v43 = v13;
    v15 = &word_18002D096;
    v45 = 0;
    v47 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v14 + v5) );
    }
    v16 = (const GUID *)*((_QWORD *)a2 + 11);
    v49 = v5 + 1;
    LODWORD(v5) = 0;
    v48 = v15;
    v17 = (const GUID *)&word_18002D708;
    v50 = 0;
    if ( v16 )
    {
      v17 = v16;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_WORD *)&v16->Data1 + v5) );
    }
    v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v52 = 2 * v5 + 2;
    v24 = *((_DWORD *)a2 + 24);
    v54 = &v24;
    LODWORD(v5) = 0;
    v51 = v17;
    v53 = 0;
    v55 = 4LL;
    if ( v18 )
    {
      v3 = v18;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v18 + v5) );
    }
    v19 = (__int16 *)*((_QWORD *)a2 + 14);
    v57 = v5 + 1;
    LODWORD(v5) = 0;
    v56 = v3;
    v58 = 0;
    if ( v19 )
    {
      v10 = v19;
      v5 = -1LL;
      do
        ++v5;
      while ( v19[v5] );
    }
    v59 = v10;
    v60 = 2 * v5 + 2;
    v61 = 0;
    TlgWrite(v2, &unk_180032196, v17, (LPCGUID)v2, 0x10u, &pData);
  }
}
