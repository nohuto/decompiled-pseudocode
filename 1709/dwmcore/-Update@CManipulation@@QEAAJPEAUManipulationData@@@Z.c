/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180170CBC
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18017055C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Thunk_UpdateManipulation_90@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180198CA0 (-Thunk_UpdateManipulation_90@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2)
{
  _OWORD *v2; // r14
  __m128 v3; // xmm5
  float *v4; // r9
  __m128 v5; // xmm4
  char *v6; // r10
  __m128 v7; // xmm3
  float *v8; // rsi
  __m128 v9; // xmm2
  int v11; // edi
  char *v12; // rcx
  __int128 v13; // xmm0
  char *v14; // rdx
  float v15; // eax
  int v16; // eax
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  CManipulation *v23; // r8
  __int64 v24; // rdx
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h]
  CManipulation *v33; // [rsp+60h] [rbp-A8h] BYREF
  float v34; // [rsp+68h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  CManipulation **v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  _OWORD *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  char *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  char *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  const GUID *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  char *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  char *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  char *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  char *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  char *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  __int64 v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  __int64 v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  float *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  char *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  char *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  char *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  char *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  char *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  char *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  char *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  char *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  char *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  char *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  char *v82; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  int *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  int *v86; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  int *v88; // [rsp+238h] [rbp+130h]
  __int64 v89; // [rsp+240h] [rbp+138h]
  int *v90; // [rsp+248h] [rbp+140h]
  __int64 v91; // [rsp+250h] [rbp+148h]
  int *v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  int *v94; // [rsp+268h] [rbp+160h]
  __int64 v95; // [rsp+270h] [rbp+168h]

  v2 = (_OWORD *)((char *)this + 244);
  v3 = (__m128)*((unsigned int *)a2 + 3);
  v4 = (float *)((char *)this + 256);
  v5 = (__m128)*((unsigned int *)a2 + 9);
  v6 = (char *)this + 280;
  v7 = (__m128)*((unsigned int *)a2 + 4);
  v8 = (float *)((char *)this + 288);
  v9 = (__m128)*((unsigned int *)a2 + 10);
  v3.m128_f32[0] = v3.m128_f32[0] + *((float *)this + 64);
  v7.m128_f32[0] = v7.m128_f32[0] + *((float *)this + 65);
  v5.m128_f32[0] = v5.m128_f32[0] * *((float *)this + 70);
  v11 = *((_DWORD *)this + 100);
  v9.m128_f32[0] = v9.m128_f32[0] * *((float *)this + 71);
  v34 = *((float *)a2 + 5) + *((float *)this + 66);
  v12 = (char *)this + 372;
  *(float *)&v32 = *((float *)a2 + 11) * *v8;
  *v2 = *(_OWORD *)a2;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
  v2[4] = *((_OWORD *)a2 + 4);
  v2[5] = *((_OWORD *)a2 + 5);
  v2[6] = *((_OWORD *)a2 + 6);
  v13 = *((_OWORD *)a2 + 7);
  v14 = (char *)a2 + 128;
  *((_OWORD *)v12 - 1) = v13;
  *(_OWORD *)v12 = *(_OWORD *)v14;
  *((_OWORD *)v12 + 1) = *((_OWORD *)v14 + 1);
  *((_QWORD *)v12 + 4) = *((_QWORD *)v14 + 4);
  *((_DWORD *)v12 + 10) = *((_DWORD *)v14 + 10);
  v15 = v34;
  *(_QWORD *)v4 = _mm_unpacklo_ps(v3, v7).m128_u64[0];
  v4[2] = v15;
  v16 = v32;
  *(_QWORD *)v6 = _mm_unpacklo_ps(v5, v9).m128_u64[0];
  *((_DWORD *)v6 + 2) = v16;
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v21 = *((unsigned __int8 *)this + 412);
    v36 = &v33;
    v40 = (char *)this + 248;
    v42 = (char *)this + 252;
    v46 = (char *)this + 260;
    v48 = (char *)this + 264;
    v50 = (char *)this + 268;
    v52 = (char *)this + 272;
    v54 = (char *)this + 276;
    v62 = (char *)this + 296;
    v64 = (char *)this + 300;
    v66 = (char *)this + 304;
    v68 = (char *)this + 292;
    v70 = (char *)this + 396;
    v72 = (char *)this + 372;
    v74 = (char *)this + 376;
    v76 = (char *)this + 380;
    v78 = (char *)this + 384;
    v80 = (char *)this + 388;
    v82 = (char *)this + 392;
    v26 = *((_DWORD *)this + 100);
    v84 = &v26;
    v33 = this;
    v27 = v21 & 1;
    v86 = &v27;
    v37 = 8LL;
    v38 = v2;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v44 = v18;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v56 = v19;
    v57 = 4LL;
    v58 = v20;
    v59 = 4LL;
    v60 = v8;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v28 = (v21 >> 1) & 1;
    v29 = (v21 >> 2) & 1;
    v22 = *((unsigned __int8 *)this + 240);
    v88 = &v28;
    v90 = &v29;
    v30 = (v22 >> 3) & 1;
    v89 = 4LL;
    v92 = &v30;
    v94 = &v31;
    v91 = 4LL;
    v93 = 4LL;
    v31 = (v22 >> 4) & 1;
    v95 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213B66, v17, v18, 0x20u, &pData);
  }
  if ( *((_DWORD *)this + 100) == v11 )
  {
    v23 = 0LL;
    v24 = 0LL;
  }
  else
  {
    v23 = this;
    v24 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 64LL))(this, v24, v23);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  CResource::InvalidateAnimationSources(this);
  return 0LL;
}
