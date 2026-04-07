/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180012634
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800405E0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800076F0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007790 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180012258 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800122C4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800125EC (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180012DD4 (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180037A80 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180037AA0 (-NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180037AB0 (-Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 *     ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180037B20 (-GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r14
  char v5; // si
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  CAnimatedTransitionVisual *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CAnimatedTransitionVisual *__hidden); // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  float *v28; // rcx
  double v29; // xmm0_8
  __int64 (__fastcall *v30)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rax
  int v31; // eax
  __int64 v32; // r14
  __int64 v33; // r14
  __int64 (__fastcall *v34)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_OPACITY *); // rax
  int v35; // eax
  bool (__fastcall *v36)(CAnimatedTransitionVisual *__hidden); // rax
  bool updated; // al
  __int64 v39; // rax
  float *v40; // rcx
  double v41; // xmm0_8
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 (__fastcall *v44)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rax
  int v45; // eax
  CAnimatedTransitionVisual *v46; // rcx
  __int64 (__fastcall *v47)(CAnimatedTransitionVisual *__hidden, float *); // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // r9d
  int v52; // r14d
  _QWORD *v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rax
  float v57; // xmm0_4
  __int64 v58; // rcx
  __int64 v59; // rdx
  float v60; // xmm0_4
  float v61; // xmm0_4
  __int64 v62; // rax
  __int64 v63; // rax
  float *v64; // rcx
  double v65; // xmm0_8
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  float v69; // xmm0_4
  float v70; // xmm0_4
  __int64 v71; // rax
  __int64 v72; // rax
  float *v73; // rcx
  double v74; // xmm0_8
  unsigned int v75; // [rsp+28h] [rbp-E0h]
  char v76; // [rsp+38h] [rbp-D0h]
  unsigned int v77; // [rsp+3Ch] [rbp-CCh] BYREF
  float v78; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v79; // [rsp+44h] [rbp-C4h] BYREF
  int v80; // [rsp+48h] [rbp-C0h]
  int v81; // [rsp+4Ch] [rbp-BCh]
  __int64 v82; // [rsp+50h] [rbp-B8h]
  double v83[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h]
  __int64 v85; // [rsp+70h] [rbp-98h]
  double v86; // [rsp+78h] [rbp-90h] BYREF
  __int64 v87; // [rsp+80h] [rbp-88h]
  bool *v88; // [rsp+88h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v89; // [rsp+90h] [rbp-78h] BYREF
  __int64 v90; // [rsp+98h] [rbp-70h]
  __int64 v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B8h] [rbp-50h]
  __int64 v93; // [rsp+C8h] [rbp-40h]
  int v94; // [rsp+E0h] [rbp-28h]
  __int64 v95; // [rsp+E8h] [rbp-20h]
  __int64 v96; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+108h] [rbp+0h]
  __int64 v98; // [rsp+118h] [rbp+10h]
  int v99; // [rsp+130h] [rbp+28h]
  _BYTE v100[20]; // [rsp+138h] [rbp+30h] BYREF
  float v101; // [rsp+14Ch] [rbp+44h] BYREF
  float v102; // [rsp+150h] [rbp+48h]
  float v103; // [rsp+154h] [rbp+4Ch]
  int v104; // [rsp+15Ch] [rbp+54h]
  int v105; // [rsp+160h] [rbp+58h]
  int v106; // [rsp+164h] [rbp+5Ch]
  int v107; // [rsp+168h] [rbp+60h]
  int v108; // [rsp+16Ch] [rbp+64h]
  _QWORD v109[2]; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v110[2]; // [rsp+180h] [rbp+78h]
  double v111; // [rsp+190h] [rbp+88h] BYREF
  double v112; // [rsp+198h] [rbp+90h]
  double v113; // [rsp+1A0h] [rbp+98h]
  double v114[4]; // [rsp+1A8h] [rbp+A0h] BYREF

  v88 = a3;
  v4 = a3;
  v89 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v76 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    v75 = 314;
    goto LABEL_58;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
              *((_QWORD *)this + 1),
              v7,
              0LL);
  v8 = started;
  if ( started < 0 )
  {
    v75 = 317;
    goto LABEL_58;
  }
  v9 = 0LL;
  v81 = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_35;
  while ( 1 )
  {
    v10 = (unsigned int)v9;
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
    if ( *(_BYTE *)(v11 + 32) )
    {
      if ( !*(_BYTE *)(v11 + 33) )
        break;
    }
LABEL_33:
    v9 = (unsigned int)(v9 + 1);
    v81 = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 16) )
    {
      v4 = v88;
LABEL_35:
      started = CAnimationEngine::StopAnimations(this);
      v8 = started;
      if ( started < 0 )
      {
        v75 = 520;
        goto LABEL_58;
      }
      if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_39;
    }
  }
  ++*(_DWORD *)(v11 + 8);
  for ( i = 0LL; ; i = (unsigned int)(v80 + 1) )
  {
    v13 = *((_QWORD *)this + 5);
    v80 = i;
    v14 = *(_QWORD *)(v13 + 8 * v10);
    if ( (unsigned int)i >= *(_DWORD *)(v14 + 4) )
    {
      LODWORD(v9) = v81;
      goto LABEL_33;
    }
    v15 = *(_QWORD *)(v14 + 24);
    v16 = (unsigned int)i;
    v82 = (unsigned int)i;
    v17 = *(_QWORD *)(v15 + 8 * i);
    v18 = *(CAnimatedTransitionVisual **)v17;
    v19 = **(_QWORD **)(v17 + 8);
    v20 = **(_QWORD **)(v17 + 40);
    v21 = *(__int64 **)(v17 + 48);
    v84 = **(_QWORD **)(v17 + 32);
    v22 = *v21;
    v23 = *(__int64 **)(v17 + 56);
    v85 = v22;
    v87 = *v23;
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v14);
    v24 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    if ( *(_DWORD *)(v24 + 8) <= 1u )
    {
      v46 = **(CAnimatedTransitionVisual ***)(*(_QWORD *)(v24 + 24) + 8 * v16);
      v47 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, float *))(*(_QWORD *)v46 + 48LL);
      v48 = v47 == CAnimatedTransitionVisual::GetBeginAlpha
          ? CAnimatedTransitionVisual::GetBeginAlpha(v46, &v78)
          : v47(v46, &v78);
      if ( v48 >= 0 && v78 == 0.0 )
      {
        v110[0] = 0LL;
        v109[0] = 0LL;
        v109[1] = 0LL;
        v49 = *((_QWORD *)this + 5);
        *(_QWORD *)((char *)v110 + 4) = 1065353216LL;
        v50 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v49 + 8 * v10) + 24LL) + 8 * v16);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v50 + 168LL))(v50, v109);
      }
    }
    v25 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v18 + 120LL);
    if ( v25 == CAnimatedTransitionVisual::HideGhost )
      CAnimatedTransitionVisual::HideGhost(v18);
    else
      v25(v18);
    if ( v19 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v77);
      v8 = started;
      if ( started < 0 )
      {
        v75 = 373;
        goto LABEL_58;
      }
      v26 = v77;
      if ( v77 == 2 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, v83, 2LL);
        v8 = started;
        if ( started < 0 )
        {
          v75 = 376;
          goto LABEL_58;
        }
        v27 = 0LL;
        v28 = &v101;
        do
        {
          v29 = v83[v27++];
          *v28++ = v29;
        }
        while ( v27 < 2 );
        v30 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(*(_QWORD *)v18 + 144LL);
        if ( v30 == CAnimatedTransitionVisual::Translate2D )
          v31 = CAnimatedTransitionVisual::Translate2D(v18, (const struct TA_TRANSFORM_2D *)v100);
        else
          v31 = v30(v18, (const struct TA_TRANSFORM_2D *)v100);
        v8 = v31;
        if ( v31 < 0 )
        {
          v75 = 382;
          goto LABEL_60;
        }
      }
      else if ( v77 == 3 )
      {
        v52 = 0;
        do
        {
          v53 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v16)
                           + 8LL * v52
                           + 8);
          v54 = *v53;
          if ( *v53 )
          {
            started = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v54 + 200LL))(
                        *v53,
                        0LL,
                        &v79);
            v8 = started;
            if ( started < 0 )
            {
              v75 = 396;
              goto LABEL_58;
            }
            v55 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v82);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 240LL))(v55, v79);
            started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v54 + 40LL))(v54, &v111, 3LL);
            v8 = started;
            if ( started < 0 )
            {
              v75 = 401;
              goto LABEL_58;
            }
            v56 = *((_QWORD *)this + 5);
            v16 = v82;
            v57 = v111;
            v101 = v57;
            v102 = v112;
            v103 = v113;
            v58 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v56 + 8 * v10) + 24LL) + 8 * v82);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v58 + 240LL))(v58, v79);
            started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 176LL))(
                        v18,
                        v100);
            v8 = started;
            if ( started < 0 )
            {
              v75 = 409;
              goto LABEL_58;
            }
            v26 = v77;
          }
          else
          {
            v16 = v82;
          }
        }
        while ( ++v52 < v26 );
      }
    }
    if ( v20 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v77);
      v8 = started;
      if ( started < 0 )
      {
        v75 = 421;
        goto LABEL_58;
      }
      if ( v77 != 2 )
      {
        if ( v77 == 3 )
        {
          started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, &v111, 3LL);
          v8 = started;
          if ( started < 0 )
          {
            v75 = 436;
            goto LABEL_58;
          }
          v59 = *((_QWORD *)this + 5);
          v60 = v111;
          v101 = v60;
          v102 = v112;
          v61 = v113;
          v103 = v61;
          v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
          v106 = v92;
          v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
          v107 = HIDWORD(v93);
          v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 72LL);
          v62 = *(_QWORD *)v18;
          v108 = v94;
          started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v62 + 184))(v18, v100);
          v8 = started;
          if ( started < 0 )
          {
            v75 = 446;
            goto LABEL_58;
          }
        }
        goto LABEL_21;
      }
      started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, v83, 2LL);
      v8 = started;
      if ( started < 0 )
      {
        v75 = 424;
        goto LABEL_58;
      }
      v39 = 0LL;
      v40 = &v101;
      do
      {
        v41 = v83[v39++];
        *v40++ = v41;
      }
      while ( v39 < 2 );
      v42 = *((_QWORD *)this + 5);
      v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
      v104 = v90;
      v43 = *(_QWORD *)v18;
      v91 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
      v105 = HIDWORD(v91);
      v44 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(v43 + 152);
      v45 = v44 == CAnimatedTransitionVisual::Scale2D
          ? CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v100)
          : v44(v18, (const struct TA_TRANSFORM_2D *)v100);
      v8 = v45;
      if ( v45 < 0 )
        break;
    }
LABEL_21:
    v32 = v84;
    if ( !v84 )
      goto LABEL_22;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84 + 24LL))(v84, &v77);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 456;
      goto LABEL_58;
    }
    if ( v77 == 2 )
    {
      started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v32 + 40LL))(v32, v83, 2LL);
      v8 = started;
      if ( started >= 0 )
      {
        v63 = 0LL;
        v64 = &v101;
        do
        {
          v65 = v83[v63++];
          *v64++ = v65;
        }
        while ( v63 < 2 );
        v66 = *((_QWORD *)this + 5);
        v95 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
        v104 = v95;
        v67 = *(_QWORD *)v18;
        v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
        v105 = HIDWORD(v96);
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v67 + 160))(v18, v100);
        v8 = started;
        if ( started < 0 )
        {
          v75 = 467;
          goto LABEL_58;
        }
        goto LABEL_22;
      }
      v75 = 459;
LABEL_58:
      v51 = started;
      goto LABEL_61;
    }
    if ( v77 != 3 )
      goto LABEL_22;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v32 + 40LL))(v32, &v111, 3LL);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 471;
      goto LABEL_58;
    }
    v68 = *((_QWORD *)this + 5);
    v69 = v111;
    v101 = v69;
    v102 = v112;
    v70 = v113;
    v103 = v70;
    v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
    v106 = v97;
    v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
    v107 = HIDWORD(v98);
    v99 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8 * v10) + 24LL) + 8 * v16) + 84LL);
    v71 = *(_QWORD *)v18;
    v108 = v99;
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v71 + 192))(v18, v100);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 480;
      goto LABEL_58;
    }
LABEL_22:
    v33 = v85;
    if ( !v85 )
      goto LABEL_28;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v85 + 24LL))(v85, &v77);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 490;
      goto LABEL_58;
    }
    started = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, &v86, v77);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 494;
      goto LABEL_58;
    }
    v34 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_OPACITY *))(*(_QWORD *)v18 + 168LL);
    v101 = v86;
    if ( v34 == CAnimatedTransitionVisual::Opacity )
      v35 = CAnimatedTransitionVisual::Opacity(v18, (const struct TA_TRANSFORM_OPACITY *)v100);
    else
      v35 = v34(v18, (const struct TA_TRANSFORM_OPACITY *)v100);
    v8 = v35;
    if ( v35 < 0 )
    {
      v75 = 499;
      goto LABEL_60;
    }
LABEL_28:
    if ( !v87 )
      goto LABEL_29;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v87 + 40LL))(v87, v114, 4LL);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 504;
      goto LABEL_58;
    }
    v72 = 0LL;
    v73 = &v101;
    do
    {
      v74 = v114[v72++];
      *v73++ = v74;
    }
    while ( v72 < 4 );
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 200LL))(v18, v100);
    v8 = started;
    if ( started < 0 )
    {
      v75 = 512;
      goto LABEL_58;
    }
LABEL_29:
    v36 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v18 + 248LL);
    if ( v36 == CAnimatedTransitionVisual::NeedToUpdateScene )
      updated = CAnimatedTransitionVisual::NeedToUpdateScene(v18);
    else
      updated = v36(v18);
    v5 = updated | v76;
    v76 |= updated;
  }
  v75 = 432;
LABEL_60:
  v51 = v8;
LABEL_61:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, v75);
LABEL_39:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v89);
  return v8;
}
