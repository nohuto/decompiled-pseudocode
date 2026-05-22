/*
 * XREFs of ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800A4DAC
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A7E80 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800AA510 (--$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        const wchar_t *a2,
        int a3,
        int a4,
        char a5,
        bool a6,
        bool a7,
        const wchar_t *a8,
        const struct _GUID *a9,
        char a10,
        const float (*a11)[3],
        const float (*a12)[4],
        const float (*a13)[3],
        const float (*a14)[4])
{
  const float *v14; // rdi
  const float *v16; // rbx
  const float *v17; // r14
  const float *v18; // rsi
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  const WCHAR *v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  const wchar_t *v27; // [rsp+78h] [rbp-90h]
  int v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+84h] [rbp-84h]
  int *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  int *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  char *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  bool *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  bool *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  const WCHAR *v40; // [rsp+D8h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E4h] [rbp-24h]
  const struct _GUID *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  char *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  _WORD *v47; // [rsp+108h] [rbp+0h]
  int v48; // [rsp+110h] [rbp+8h]
  int v49; // [rsp+114h] [rbp+Ch]
  _WORD *v50; // [rsp+118h] [rbp+10h]
  int v51; // [rsp+120h] [rbp+18h]
  int v52; // [rsp+124h] [rbp+1Ch]
  _WORD v53[128]; // [rsp+128h] [rbp+20h] BYREF
  _WORD v54[128]; // [rsp+228h] [rbp+120h] BYREF
  int v55; // [rsp+398h] [rbp+290h] BYREF
  int v56; // [rsp+3A0h] [rbp+298h] BYREF

  v56 = a4;
  v55 = a3;
  v14 = (const float *)a11;
  v16 = (const float *)a12;
  v17 = (const float *)a13;
  v18 = (const float *)a14;
  _o_setlocale(4LL);
  _o_setlocale(4LL);
  swprintf_s<128>(v53, L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)", *v14, v14[1], v14[2], *v16, v16[1], v16[2], v16[3]);
  swprintf_s<128>(v54, L"(%.3e;%.3e;%.3e) (%.3e;%.3e;%.3e;%.3e)", *v17, v17[1], v17[2], *v18, v18[1], v18[2], v18[3]);
  v19 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
  if ( *(_DWORD *)v19 > 5u && (*(_BYTE *)(v19 + 16) & 2) != 0 && (*(_QWORD *)(v19 + 24) & 2LL) == *(_QWORD *)(v19 + 24) )
  {
    v20 = -1LL;
    LODWORD(v21) = 0;
    if ( a2 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a2[v21] );
    }
    v29 = 0;
    v28 = 2 * v21 + 2;
    v31 = 4LL;
    v30 = &v55;
    v33 = 4LL;
    v32 = &v56;
    if ( !a2 )
      a2 = &sourceString;
    v27 = a2;
    v34 = &a5;
    LODWORD(v22) = 0;
    v35 = 4LL;
    v36 = &a6;
    v38 = &a7;
    v23 = a8;
    v37 = 1LL;
    v39 = 1LL;
    v24 = a8 == 0LL;
    if ( a8 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a8[v22] );
      v24 = a8 == 0LL;
    }
    if ( v24 )
      v23 = &sourceString;
    v42 = 0;
    v40 = v23;
    v41 = 2 * v22 + 2;
    v43 = a9;
    v45 = &a10;
    v25 = -1LL;
    v44 = 16LL;
    v46 = 4LL;
    do
      ++v25;
    while ( v53[v25] );
    v49 = 0;
    v48 = 2 * v25 + 2;
    v47 = v53;
    do
      ++v20;
    while ( v54[v20] );
    v52 = 0;
    v50 = v54;
    v51 = 2 * v20 + 2;
    TlgWrite((TraceLoggingHProvider)v19, &unk_180110319, 0LL, 0LL, 0xDu, &pData);
  }
  _o_setlocale(4LL);
}
