/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801681EC
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180167D74 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Thunk_UpdateManipulation_90@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B7A0 (-Thunk_UpdateManipulation_90@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
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
  int v11; // ebx
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
  unsigned int v22; // edx
  bool v23; // zf
  CResource *v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  int v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h]
  CManipulation *v35; // [rsp+60h] [rbp-A8h] BYREF
  float v36; // [rsp+68h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  CManipulation **v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  _OWORD *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  char *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  char *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  const GUID *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  char *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  char *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  char *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  char *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  char *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  __int64 v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  float *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  char *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  char *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  char *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  char *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  char *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  char *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  char *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  char *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h]
  char *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  char *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  char *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  int *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  int *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  int *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  int *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  int *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  int *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]

  v2 = (_OWORD *)((char *)this + 236);
  v3 = (__m128)*((unsigned int *)a2 + 3);
  v4 = (float *)((char *)this + 248);
  v5 = (__m128)*((unsigned int *)a2 + 9);
  v6 = (char *)this + 272;
  v7 = (__m128)*((unsigned int *)a2 + 4);
  v8 = (float *)((char *)this + 280);
  v9 = (__m128)*((unsigned int *)a2 + 10);
  v3.m128_f32[0] = v3.m128_f32[0] + *((float *)this + 62);
  v7.m128_f32[0] = v7.m128_f32[0] + *((float *)this + 63);
  v5.m128_f32[0] = v5.m128_f32[0] * *((float *)this + 68);
  v11 = *((_DWORD *)this + 98);
  v9.m128_f32[0] = v9.m128_f32[0] * *((float *)this + 69);
  v36 = *((float *)a2 + 5) + *((float *)this + 64);
  v12 = (char *)this + 364;
  *(float *)&v34 = *((float *)a2 + 11) * *v8;
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
  v15 = v36;
  *(_QWORD *)v4 = _mm_unpacklo_ps(v3, v7).m128_u64[0];
  v4[2] = v15;
  v16 = v34;
  *(_QWORD *)v6 = _mm_unpacklo_ps(v5, v9).m128_u64[0];
  *((_DWORD *)v6 + 2) = v16;
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v21 = *((unsigned __int8 *)this + 404);
    v38 = &v35;
    v42 = (char *)this + 240;
    v44 = (char *)this + 244;
    v48 = (char *)this + 252;
    v50 = (char *)this + 256;
    v52 = (char *)this + 260;
    v54 = (char *)this + 264;
    v56 = (char *)this + 268;
    v64 = (char *)this + 288;
    v66 = (char *)this + 292;
    v68 = (char *)this + 296;
    v70 = (char *)this + 284;
    v72 = (char *)this + 388;
    v74 = (char *)this + 364;
    v76 = (char *)this + 368;
    v78 = (char *)this + 372;
    v80 = (char *)this + 376;
    v82 = (char *)this + 380;
    v84 = (char *)this + 384;
    v28 = *((_DWORD *)this + 98);
    v86 = &v28;
    v35 = this;
    v29 = v21 & 1;
    v88 = &v29;
    v39 = 8LL;
    v40 = v2;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v46 = v18;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v58 = v19;
    v59 = 4LL;
    v60 = v20;
    v61 = 4LL;
    v62 = v8;
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
    v89 = 4LL;
    v22 = *((unsigned __int8 *)this + 232);
    v30 = (v21 >> 1) & 1;
    v91 = 4LL;
    v90 = &v30;
    v92 = &v31;
    v32 = (v22 >> 3) & 1;
    v31 = (v21 >> 2) & 1;
    v94 = &v32;
    v96 = &v33;
    v93 = 4LL;
    v95 = 4LL;
    v33 = (v22 >> 4) & 1;
    v97 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6BBD, v17, v18, 0x20u, &pData);
  }
  v23 = *((_DWORD *)this + 98) == v11;
  v24 = (CManipulation *)((char *)this + 8);
  if ( v23 )
  {
    v26 = 0LL;
    v25 = 0LL;
  }
  else
  {
    v25 = 7LL;
    v26 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
  }
  CResource::NotifyOnChanged((_DWORD *)this + 2, v25, v26);
  CResource::InvalidateAnimationSources(v24, 0LL);
  CResource::InvalidateAnimationSources(v24, 1LL);
  CResource::InvalidateAnimationSources(v24, 2LL);
  CResource::InvalidateAnimationSources(v24, 3LL);
  CResource::InvalidateAnimationSources(v24, 4LL);
  CResource::InvalidateAnimationSources(v24, 5LL);
  CResource::InvalidateAnimationSources(v24, 6LL);
  CResource::InvalidateAnimationSources(v24, 7LL);
  return 0LL;
}
