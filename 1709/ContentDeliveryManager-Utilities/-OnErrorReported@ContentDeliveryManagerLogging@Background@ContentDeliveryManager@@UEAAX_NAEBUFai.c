/*
 * XREFs of ?OnErrorReported@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@UEAAX_NAEBUFailureInfo@wil@@@Z @ 0x180022AD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerLogging::OnErrorReported(
        ContentDeliveryManager::Background::ContentDeliveryManagerLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  const struct _TlgProvider_t *v4; // r10
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // rcx
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // rdx
  const WCHAR *v11; // rcx
  const WCHAR *v12; // r9
  const WCHAR *v13; // rdx
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const WCHAR *v18; // rcx
  const WCHAR *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  const WCHAR *v22; // rcx
  const unsigned __int16 *v23; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  char *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B4h] [rbp-54h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  const WCHAR *v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+D0h] [rbp-38h]
  int v46; // [rsp+D4h] [rbp-34h]
  int *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v49; // [rsp+E8h] [rbp-20h]
  int v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+F4h] [rbp-14h]
  int *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v54; // [rsp+108h] [rbp+0h]
  int v55; // [rsp+110h] [rbp+8h]
  int v56; // [rsp+114h] [rbp+Ch]
  const WCHAR *v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+120h] [rbp+18h]
  int v59; // [rsp+124h] [rbp+1Ch]
  int *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v62; // [rsp+138h] [rbp+30h]
  int v63; // [rsp+140h] [rbp+38h]
  int v64; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v65; // [rsp+148h] [rbp+40h]
  int v66; // [rsp+150h] [rbp+48h]
  int v67; // [rsp+154h] [rbp+4Ch]
  int *v68; // [rsp+158h] [rbp+50h]
  __int64 v69; // [rsp+160h] [rbp+58h]
  int *v70; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  const unsigned __int16 *v72; // [rsp+178h] [rbp+70h]
  int v73; // [rsp+180h] [rbp+78h]
  int v74; // [rsp+184h] [rbp+7Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v5 = &word_1800E10E4;
    v6 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
    v24 = *((_DWORD *)a3 + 1);
    v33 = 4LL;
    v32 = &v24;
    LODWORD(v7) = 0;
    v8 = &word_1800E10E4;
    if ( v6 )
    {
      v8 = v6;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v6 + v7) );
    }
    v9 = (const unsigned __int16 *)*((_QWORD *)a3 + 15);
    v35 = v7 + 1;
    v37 = (char *)a3 + 56;
    LODWORD(v7) = 0;
    v34 = v8;
    v10 = &word_1800E10E4;
    v36 = 0;
    v38 = 4LL;
    if ( v9 )
    {
      v10 = v9;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v9 + v7) );
    }
    v11 = (const WCHAR *)*((_QWORD *)a3 + 2);
    v12 = &Src;
    v39 = v10;
    v40 = v7 + 1;
    v13 = &Src;
    v25 = *(_DWORD *)a3;
    v42 = &v25;
    LODWORD(v7) = 0;
    v41 = 0;
    v43 = 4LL;
    if ( v11 )
    {
      v13 = v11;
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
    v45 = 2 * v7 + 2;
    v26 = *((_DWORD *)a3 + 6);
    v47 = &v26;
    LODWORD(v7) = 0;
    v44 = v13;
    v15 = &word_1800E10E4;
    v46 = 0;
    v48 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v14 + v7) );
    }
    v16 = (const unsigned __int16 *)*((_QWORD *)a3 + 10);
    v50 = v7 + 1;
    v27 = *((_DWORD *)a3 + 18);
    v52 = &v27;
    LODWORD(v7) = 0;
    v49 = v15;
    v17 = &word_1800E10E4;
    v51 = 0;
    v53 = 4LL;
    if ( v16 )
    {
      v17 = v16;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v16 + v7) );
    }
    v18 = (const WCHAR *)*((_QWORD *)a3 + 11);
    v55 = v7 + 1;
    LODWORD(v7) = 0;
    v54 = v17;
    v19 = &Src;
    v56 = 0;
    if ( v18 )
    {
      v19 = v18;
      v7 = -1LL;
      do
        ++v7;
      while ( v18[v7] );
    }
    v20 = (const unsigned __int16 *)*((_QWORD *)a3 + 13);
    v58 = 2 * v7 + 2;
    v28 = *((_DWORD *)a3 + 24);
    v60 = &v28;
    LODWORD(v7) = 0;
    v57 = v19;
    v21 = &word_1800E10E4;
    v59 = 0;
    v61 = 4LL;
    if ( v20 )
    {
      v21 = v20;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v20 + v7) );
    }
    v22 = (const WCHAR *)*((_QWORD *)a3 + 14);
    v63 = v7 + 1;
    LODWORD(v7) = 0;
    v62 = v21;
    v64 = 0;
    if ( v22 )
    {
      v12 = v22;
      v7 = -1LL;
      do
        ++v7;
      while ( v22[v7] );
    }
    v23 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
    v66 = 2 * v7 + 2;
    v29 = *((_DWORD *)a3 + 2);
    v68 = &v29;
    v30 = *((_DWORD *)a3 + 15);
    v70 = &v30;
    LODWORD(v7) = 0;
    v65 = v12;
    v67 = 0;
    v69 = 4LL;
    v71 = 4LL;
    if ( v23 )
    {
      v5 = v23;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v23 + v7) );
    }
    v72 = v5;
    v73 = v7 + 1;
    v74 = 0;
    TlgWrite(v4, &unk_18013B403, 0LL, 0LL, 0x13u, &pData);
  }
}
