/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18019C79C
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D8EC (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18019B868 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x18019C148 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801CE404 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180207440 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  const struct D2DVector3 *v3; // rbx
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  int v6; // eax
  int v7; // eax
  __m128 v8; // xmm1
  __int64 v9; // xmm0_8
  int v10; // eax
  unsigned __int64 v11; // xmm0_8
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm0_4
  const struct D2DMatrix *v15; // r8
  _QWORD *v16; // r14
  struct IAccelerator *v17; // rax
  struct IAccelerator *v18; // rsi
  CVector3Force *v19; // rax
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r11
  int TracingCookie; // [rsp+38h] [rbp-D0h] BYREF
  float v26[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *p_TracingCookie; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  char *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  char *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  char *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  char *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  char *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  char *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  char *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  char *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  char *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  __int64 *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  char *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  __int64 *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  __int64 *v59; // [rsp+168h] [rbp+60h]
  __int64 v60; // [rsp+170h] [rbp+68h]
  char *v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h]
  int *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  char *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  char *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  char *v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  char *v71; // [rsp+1C8h] [rbp+C0h]
  __int64 v72; // [rsp+1D0h] [rbp+C8h]
  char *v73; // [rsp+1D8h] [rbp+D0h]
  __int64 v74; // [rsp+1E0h] [rbp+D8h]
  char *v75; // [rsp+1E8h] [rbp+E0h]
  __int64 v76; // [rsp+1F0h] [rbp+E8h]
  char *v77; // [rsp+1F8h] [rbp+F0h]
  __int64 v78; // [rsp+200h] [rbp+F8h]
  char *v79; // [rsp+208h] [rbp+100h]
  __int64 v80; // [rsp+210h] [rbp+108h]
  char *v81; // [rsp+218h] [rbp+110h]
  __int64 v82; // [rsp+220h] [rbp+118h]
  char *v83; // [rsp+228h] [rbp+120h]
  __int64 v84; // [rsp+230h] [rbp+128h]
  char *v85; // [rsp+238h] [rbp+130h]
  __int64 v86; // [rsp+240h] [rbp+138h]
  char *v87; // [rsp+248h] [rbp+140h]
  __int64 v88; // [rsp+250h] [rbp+148h]
  char *v89; // [rsp+258h] [rbp+150h]
  __int64 v90; // [rsp+260h] [rbp+158h]
  char *v91; // [rsp+268h] [rbp+160h]
  __int64 v92; // [rsp+270h] [rbp+168h]
  char *v93; // [rsp+278h] [rbp+170h]
  __int64 v94; // [rsp+280h] [rbp+178h]
  char *v95; // [rsp+288h] [rbp+180h]
  __int64 v96; // [rsp+290h] [rbp+188h]
  const void *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v1 = *((_DWORD *)this + 36);
  if ( v1 == 18 )
  {
    v4 = (__m128)*((unsigned int *)this + 73);
    LODWORD(v27) = *((_DWORD *)this + 74);
    v5 = (__m128)*((unsigned int *)this + 78);
    v6 = v27;
    LODWORD(v27) = 0;
    *((_QWORD *)this + 39) = _mm_unpacklo_ps(v5, v4).m128_u64[0];
    v5.m128_u64[0] = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 81), (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 80) = v6;
    v7 = v27;
    *(_QWORD *)((char *)this + 324) = v5.m128_u64[0];
    *((_DWORD *)this + 83) = v7;
    goto LABEL_7;
  }
  if ( v1 == 35 )
  {
LABEL_7:
    v8 = (__m128)*((unsigned int *)this + 82);
    v3 = (CNaturalAnimation *)((char *)this + 324);
    LODWORD(v27) = *((_DWORD *)this + 74);
    v9 = *((_QWORD *)this + 39);
    v10 = v27;
    LODWORD(v27) = 0;
    *((_QWORD *)this + 39) = v9;
    v11 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 81), v8).m128_u64[0];
    *((_DWORD *)this + 80) = v10;
    v12 = v27;
    *(_QWORD *)((char *)this + 324) = v11;
    *((_DWORD *)this + 83) = v12;
    goto LABEL_8;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  v3 = (CNaturalAnimation *)((char *)this + 324);
LABEL_8:
  CNaturalAnimation::GenerateVector3Basis(this);
  v13 = *((float *)this + 73) - *((float *)this + 79);
  v26[0] = *((float *)this + 72) - *((float *)this + 78);
  v14 = *((float *)this + 74) - *((float *)this + 80);
  v26[1] = v13;
  *(float *)&v27 = v14;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v30,
    (const struct D2DVector3 *)v26,
    (CNaturalAnimation *)((char *)this + 412));
  D3DXVec3TransformNormal((struct D2DVector3 *)&v28, v3, v15);
  v16 = operator new(0x20uLL);
  if ( v16 )
  {
    v16[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v16 + 4) = 0;
    *v16 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    v16[1] = &CFrictionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v16 + 6) = -1035468800;
    (*(void (__fastcall **)(_QWORD *, void **))*v16)(v16, &CFrictionAccelerator::`vftable'{for `CMILRefCountBase'});
  }
  v17 = (struct IAccelerator *)operator new(0x20uLL);
  v18 = v17;
  if ( v17 )
  {
    *((_QWORD *)v17 + 1) = &CMILRefCountBase::`vftable';
    *((_DWORD *)v17 + 4) = 0;
    *(_QWORD *)v17 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    *((_QWORD *)v17 + 1) = &CFrictionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v17 + 6) = -1035468800;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
    (**(void (__fastcall ***)(struct IAccelerator *))v18)(v18);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 50) + 32LL))(*((_QWORD *)this + 50));
  v19 = (CVector3Force *)operator new(0x168uLL);
  if ( v19 )
    v19 = CVector3Force::CVector3Force(v19, (struct IAccelerator *)v16, v18, *((struct IAccelerator **)this + 50));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=((char *)this + 392, v19);
  v20 = *((_QWORD *)this + 49);
  *(_QWORD *)(v20 + 316) = v30;
  *(_DWORD *)(v20 + 324) = v31;
  *(_QWORD *)(v20 + 328) = v28;
  *(_DWORD *)(v20 + 336) = v29;
  *(_OWORD *)(v20 + 220) = *(_OWORD *)((char *)this + 412);
  *(_OWORD *)(v20 + 236) = *(_OWORD *)((char *)this + 428);
  *(_OWORD *)(v20 + 252) = *(_OWORD *)((char *)this + 444);
  v21 = *(_OWORD *)((char *)this + 460);
  *(_DWORD *)(v20 + 312) = 0;
  *(_OWORD *)(v20 + 268) = v21;
  v22 = *((_QWORD *)this + 49);
  *(_QWORD *)(v22 + 340) = *((_QWORD *)this + 39);
  v23 = *((_DWORD *)this + 80);
  *(_BYTE *)(v22 + 352) |= 2u;
  *(_DWORD *)(v22 + 348) = v23;
  if ( (*(_DWORD *)(*((_QWORD *)this + 35) + 4LL) & 0x40000000) != 0
    && dword_1802D3FE0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 4uLL) )
  {
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v35 = (char *)this + 324;
    v37 = (char *)this + 328;
    v39 = (char *)this + 332;
    v43 = (char *)this + 292;
    v45 = (char *)this + 296;
    v49 = (char *)this + 316;
    v51 = (char *)this + 320;
    v53 = &v28;
    v55 = (char *)&v28 + 4;
    v57 = &v29;
    v59 = &v30;
    v61 = (char *)&v30 + 4;
    v63 = &v31;
    v67 = (char *)this + 416;
    v69 = (char *)this + 420;
    v71 = (char *)this + 424;
    v73 = (char *)this + 428;
    v75 = (char *)this + 432;
    v77 = (char *)this + 436;
    v79 = (char *)this + 440;
    v81 = (char *)this + 444;
    v83 = (char *)this + 448;
    v85 = (char *)this + 452;
    v34 = v24;
    v36 = v24;
    v38 = v24;
    v40 = v24;
    v41 = (char *)this + 288;
    v42 = v24;
    v44 = v24;
    v46 = v24;
    v47 = (char *)this + 312;
    v48 = v24;
    v50 = v24;
    v52 = v24;
    v54 = v24;
    v56 = v24;
    v58 = v24;
    v60 = v24;
    v62 = v24;
    v64 = v24;
    v65 = (char *)this + 412;
    v66 = v24;
    v68 = v24;
    v70 = v24;
    v72 = v24;
    v74 = v24;
    v76 = v24;
    v78 = v24;
    v80 = v24;
    v82 = v24;
    v84 = v24;
    v86 = v24;
    v88 = v24;
    v87 = (char *)this + 456;
    v89 = (char *)this + 460;
    v91 = (char *)this + 464;
    v93 = (char *)this + 468;
    v95 = (char *)this + 472;
    v90 = v24;
    v92 = v24;
    v94 = v24;
    v96 = v24;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8BB2, 0LL, 0LL, 0x22u, &pData);
  }
  if ( v18 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
}
