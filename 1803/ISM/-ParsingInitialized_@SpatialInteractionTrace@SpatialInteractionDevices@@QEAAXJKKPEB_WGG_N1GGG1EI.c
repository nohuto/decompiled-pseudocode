/*
 * XREFs of ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x1800D3250
 * Callers:
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1800D6758 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x18009BC98 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        const wchar_t *a5,
        char a6,
        char a7,
        bool a8,
        bool a9,
        char a10,
        char a11,
        char a12,
        bool a13,
        char a14,
        char a15,
        char a16,
        const struct SpatialInteractionDevices::PoseData *a17,
        const struct SpatialInteractionDevices::PoseData *a18)
{
  const struct SpatialInteractionDevices::PoseData *v18; // rdi
  const struct SpatialInteractionDevices::PoseData *v19; // rbx
  const struct _TlgProvider_t *v20; // rcx
  const WCHAR *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  int *v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  int *v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  int *v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  const WCHAR *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  char *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  char *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  char *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  char *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  char *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  bool *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  bool *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  bool *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  char *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  char *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  char *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  wchar_t *v59; // [rsp+148h] [rbp+40h]
  int v60; // [rsp+150h] [rbp+48h]
  int v61; // [rsp+154h] [rbp+4Ch]
  wchar_t *v62; // [rsp+158h] [rbp+50h]
  int v63; // [rsp+160h] [rbp+58h]
  int v64; // [rsp+164h] [rbp+5Ch]
  wchar_t *v65; // [rsp+168h] [rbp+60h]
  int v66; // [rsp+170h] [rbp+68h]
  int v67; // [rsp+174h] [rbp+6Ch]
  wchar_t *v68; // [rsp+178h] [rbp+70h]
  int v69; // [rsp+180h] [rbp+78h]
  int v70; // [rsp+184h] [rbp+7Ch]
  wchar_t v71[64]; // [rsp+188h] [rbp+80h] BYREF
  wchar_t v72[64]; // [rsp+208h] [rbp+100h] BYREF
  wchar_t v73[64]; // [rsp+288h] [rbp+180h] BYREF
  wchar_t v74[64]; // [rsp+308h] [rbp+200h] BYREF
  int v75; // [rsp+3D0h] [rbp+2C8h] BYREF
  int v76; // [rsp+3D8h] [rbp+2D0h] BYREF
  int v77; // [rsp+3E0h] [rbp+2D8h] BYREF

  v77 = a4;
  v76 = a3;
  v75 = a2;
  v18 = a17;
  v19 = a18;
  if ( *((_BYTE *)a17 + 28) )
    swprintf_s<64>(v71, L"%.3f %.3f %.3f", *(float *)a17, *((float *)a17 + 1), *((float *)a17 + 2));
  else
    _o_wcscpy_s(v71, 64LL, L"No HoldingPose.Position");
  if ( *((_BYTE *)v18 + 29) )
    swprintf_s<64>(
      v72,
      L"%.3f %.3f %.3f %.3f",
      *((float *)v18 + 3),
      *((float *)v18 + 4),
      *((float *)v18 + 5),
      *((float *)v18 + 6));
  else
    _o_wcscpy_s(v72, 64LL, L"No HoldingPose.Orientation");
  if ( *((_BYTE *)v19 + 28) )
    swprintf_s<64>(v73, L"%.3f %.3f %.3f", *(float *)v19, *((float *)v19 + 1), *((float *)v19 + 2));
  else
    _o_wcscpy_s(v73, 64LL, L"No pointerPose.Position");
  if ( *((_BYTE *)v19 + 29) )
    swprintf_s<64>(
      v74,
      L"%.3f %.3f %.3f %.3f",
      *((float *)v19 + 3),
      *((float *)v19 + 4),
      *((float *)v19 + 5),
      *((float *)v19 + 6));
  else
    _o_wcscpy_s(v74, 64LL, L"No pointerPose.Orientation");
  v20 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v20 > 4u
    && (*((_QWORD *)v20 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v20 + 3) & 0x400000000000LL) == *((_QWORD *)v20 + 3) )
  {
    v21 = a5;
    v28 = &v75;
    v22 = -1LL;
    v29 = 4LL;
    v30 = &v76;
    v32 = &v77;
    LODWORD(v23) = 0;
    v31 = 4LL;
    v33 = 4LL;
    if ( a5 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a5[v23] );
    }
    v36 = 0;
    v35 = 2 * v23 + 2;
    v38 = 2LL;
    v37 = &a10;
    v40 = 2LL;
    v39 = &a11;
    if ( !a5 )
      v21 = &sourceString;
    v34 = v21;
    v41 = &a12;
    v42 = 2LL;
    v43 = &a6;
    v45 = &a7;
    v47 = &a13;
    v49 = &a8;
    v51 = &a9;
    v53 = &a15;
    v55 = &a14;
    v57 = &a16;
    v24 = -1LL;
    v44 = 2LL;
    v46 = 2LL;
    v48 = 1LL;
    v50 = 1LL;
    v52 = 1LL;
    v54 = 4LL;
    v56 = 1LL;
    v58 = 4LL;
    do
      ++v24;
    while ( v71[v24] );
    v61 = 0;
    v59 = v71;
    v60 = 2 * v24 + 2;
    v25 = -1LL;
    do
      ++v25;
    while ( v72[v25] );
    v64 = 0;
    v62 = v72;
    v63 = 2 * v25 + 2;
    v26 = -1LL;
    do
      ++v26;
    while ( v73[v26] );
    v67 = 0;
    v66 = 2 * v26 + 2;
    v65 = v73;
    do
      ++v22;
    while ( v74[v22] );
    v70 = 0;
    v68 = v74;
    v69 = 2 * v22 + 2;
    TlgWrite(v20, &unk_180112D0B, 0LL, 0LL, 0x15u, &pData);
  }
}
