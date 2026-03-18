/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801734D4
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18017268C (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x180172EF4 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019582C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801CA41C (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  int v5; // eax
  int v6; // eax
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  int v9; // eax
  __m128 v10; // xmm1
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm0_4
  const struct D2DMatrix *v14; // r8
  _QWORD *v15; // r14
  struct IAccelerator *v16; // rax
  struct IAccelerator *v17; // rsi
  CVector3Force *v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r11
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  int TracingCookie; // [rsp+38h] [rbp-D0h] BYREF
  float v27[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *p_TracingCookie; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  char *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  char *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  char *v40; // [rsp+C8h] [rbp-40h]
  __int64 v41; // [rsp+D0h] [rbp-38h]
  char *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  char *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  char *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  char *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  char *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  char *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  __int64 *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  char *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  __int64 *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  char *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  char *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  char *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  char *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  char *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  char *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  char *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  char *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  char *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  char *v82; // [rsp+218h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+118h]
  char *v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]
  char *v86; // [rsp+238h] [rbp+130h]
  __int64 v87; // [rsp+240h] [rbp+138h]
  char *v88; // [rsp+248h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+148h]
  char *v90; // [rsp+258h] [rbp+150h]
  __int64 v91; // [rsp+260h] [rbp+158h]
  char *v92; // [rsp+268h] [rbp+160h]
  __int64 v93; // [rsp+270h] [rbp+168h]
  char *v94; // [rsp+278h] [rbp+170h]
  __int64 v95; // [rsp+280h] [rbp+178h]
  char *v96; // [rsp+288h] [rbp+180h]
  __int64 v97; // [rsp+290h] [rbp+188h]
  const void *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v1 = *((_DWORD *)this + 34);
  if ( v1 == 18 )
  {
    v3 = (__m128)*((unsigned int *)this + 69);
    LODWORD(v28) = *((_DWORD *)this + 70);
    v4 = (__m128)*((unsigned int *)this + 74);
    v5 = v28;
    LODWORD(v28) = 0;
    *((_QWORD *)this + 37) = _mm_unpacklo_ps(v4, v3).m128_u64[0];
    v4.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 77), (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 76) = v5;
    v6 = v28;
    *(_QWORD *)((char *)this + 308) = v4.m128_u64[0];
    *((_DWORD *)this + 79) = v6;
    goto LABEL_6;
  }
  if ( v1 == 35 )
  {
LABEL_6:
    v7 = (__m128)*((unsigned int *)this + 75);
    LODWORD(v28) = *((_DWORD *)this + 70);
    v8 = (__m128)*((unsigned int *)this + 74);
    v9 = v28;
    LODWORD(v28) = 0;
    v8.m128_u64[0] = _mm_unpacklo_ps(v8, v7).m128_u64[0];
    v10 = (__m128)*((unsigned int *)this + 78);
    *((_QWORD *)this + 37) = v8.m128_u64[0];
    v8.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 77), v10).m128_u64[0];
    *((_DWORD *)this + 76) = v9;
    v11 = v28;
    *(_QWORD *)((char *)this + 308) = v8.m128_u64[0];
    *((_DWORD *)this + 79) = v11;
    goto LABEL_7;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
LABEL_7:
  CNaturalAnimation::GenerateVector3Basis(this);
  v12 = *((float *)this + 69) - *((float *)this + 75);
  v27[0] = *((float *)this + 68) - *((float *)this + 74);
  v13 = *((float *)this + 70) - *((float *)this + 76);
  v27[1] = v12;
  *(float *)&v28 = v13;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v31,
    (const struct D2DVector3 *)v27,
    (CNaturalAnimation *)((char *)this + 396));
  D3DXVec3TransformNormal((struct D2DVector3 *)&v29, (CNaturalAnimation *)((char *)this + 308), v14);
  v15 = operator new(0x20uLL);
  if ( v15 )
  {
    v15[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v15 + 4) = 0;
    *v15 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    v15[1] = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v15 + 6) = -1035468800;
    (*(void (__fastcall **)(_QWORD *, void **))*v15)(v15, &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'});
  }
  v16 = (struct IAccelerator *)operator new(0x20uLL);
  v17 = v16;
  if ( v16 )
  {
    *((_QWORD *)v16 + 1) = &CMILRefCountBase::`vftable';
    *((_DWORD *)v16 + 4) = 0;
    *(_QWORD *)v16 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    *((_QWORD *)v16 + 1) = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v16 + 6) = -1035468800;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v17 )
    (**(void (__fastcall ***)(struct IAccelerator *))v17)(v17);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 32LL))(*((_QWORD *)this + 48));
  v18 = (CVector3Force *)operator new(0x168uLL);
  if ( v18 )
    v18 = CVector3Force::CVector3Force(v18, (struct IAccelerator *)v15, v17, *((struct IAccelerator **)this + 48));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=((char *)this + 376, v18);
  v19 = *((_QWORD *)this + 47);
  *(_QWORD *)(v19 + 316) = v31;
  *(_DWORD *)(v19 + 324) = v32;
  *(_QWORD *)(v19 + 328) = v29;
  *(_DWORD *)(v19 + 336) = v30;
  *(_OWORD *)(v19 + 220) = *(_OWORD *)((char *)this + 396);
  *(_OWORD *)(v19 + 236) = *(_OWORD *)((char *)this + 412);
  *(_OWORD *)(v19 + 252) = *(_OWORD *)((char *)this + 428);
  v20 = *(_OWORD *)((char *)this + 444);
  *(_DWORD *)(v19 + 312) = 0;
  *(_OWORD *)(v19 + 268) = v20;
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 48LL))(*((_QWORD *)this + 48));
  v22 = *((_QWORD *)this + 47);
  *(_QWORD *)(v22 + 340) = *((_QWORD *)this + 37);
  *(_DWORD *)(v22 + 348) = *((_DWORD *)this + 76);
  *(_BYTE *)(v22 + 352) = (v21 != 2 ? 0 : 8) | *(_BYTE *)(v22 + 352) & 0xF3 | 2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0
    && dword_18026D7B0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
  {
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v36 = (char *)this + 308;
    v38 = (char *)this + 312;
    v40 = (char *)this + 316;
    v44 = (char *)this + 276;
    v46 = (char *)this + 280;
    v50 = (char *)this + 300;
    v52 = (char *)this + 304;
    v54 = &v29;
    v56 = (char *)&v29 + 4;
    v58 = &v30;
    v60 = &v31;
    v62 = (char *)&v31 + 4;
    v64 = &v32;
    v68 = (char *)this + 400;
    v70 = (char *)this + 404;
    v72 = (char *)this + 408;
    v74 = (char *)this + 412;
    v76 = (char *)this + 416;
    v78 = (char *)this + 420;
    v80 = (char *)this + 424;
    v82 = (char *)this + 428;
    v84 = (char *)this + 432;
    v86 = (char *)this + 436;
    v35 = v23;
    v37 = v23;
    v39 = v23;
    v41 = v23;
    v42 = (char *)this + 272;
    v43 = v23;
    v45 = v23;
    v47 = v23;
    v48 = (char *)this + 296;
    v49 = v23;
    v51 = v23;
    v53 = v23;
    v55 = v23;
    v57 = v23;
    v59 = v23;
    v61 = v23;
    v63 = v23;
    v65 = v23;
    v66 = (char *)this + 396;
    v67 = v23;
    v69 = v23;
    v71 = v23;
    v73 = v23;
    v75 = v23;
    v77 = v23;
    v79 = v23;
    v81 = v23;
    v83 = v23;
    v85 = v23;
    v87 = v23;
    v89 = v23;
    v88 = (char *)this + 440;
    v90 = (char *)this + 444;
    v92 = (char *)this + 448;
    v94 = (char *)this + 452;
    v96 = (char *)this + 456;
    v91 = v23;
    v93 = v23;
    v95 = v23;
    v97 = v23;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213FBC, v24, v25, 0x22u, &pData);
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v17 + 8LL))(v17);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
}
