/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000D8A0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004ED0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004F70 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18000D858 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000EE24 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000EE90 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18000F390 (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180011C10 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180011C30 (-NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180011C40 (-Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r14
  char v5; // si
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 i; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdx
  CAnimatedTransitionVisual *v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CAnimatedTransitionVisual *__hidden); // rax
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 (__fastcall *v28)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_OPACITY *); // rax
  int v29; // eax
  bool (__fastcall *v30)(CAnimatedTransitionVisual *__hidden); // rax
  bool updated; // al
  unsigned int v33; // edx
  __int64 (__fastcall *v34)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rax
  int v35; // eax
  __int64 v36; // rdx
  float v37; // xmm0_4
  __int64 v38; // rax
  __int64 (__fastcall *v39)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r9d
  int v45; // r15d
  _QWORD *v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rax
  float v50; // xmm0_4
  __int64 v51; // rcx
  __int64 v52; // rdx
  float v53; // xmm0_4
  float v54; // xmm0_4
  __int64 v55; // rax
  __int64 v56; // rdx
  float v57; // xmm0_4
  __int64 v58; // rax
  __int64 v59; // rdx
  float v60; // xmm0_4
  float v61; // xmm0_4
  __int64 v62; // rax
  __int64 v63; // rax
  float *v64; // rcx
  double v65; // xmm0_8
  unsigned int v66; // [rsp+28h] [rbp-E0h]
  char v67; // [rsp+38h] [rbp-D0h]
  unsigned int v68; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v69; // [rsp+40h] [rbp-C8h] BYREF
  int v70; // [rsp+44h] [rbp-C4h]
  __int64 v71; // [rsp+48h] [rbp-C0h]
  double v72; // [rsp+50h] [rbp-B8h] BYREF
  double v73; // [rsp+58h] [rbp-B0h]
  __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+68h] [rbp-A0h]
  __int64 v76; // [rsp+70h] [rbp-98h]
  __int64 v77; // [rsp+78h] [rbp-90h]
  double v78; // [rsp+80h] [rbp-88h] BYREF
  __int64 v79; // [rsp+88h] [rbp-80h]
  bool *v80; // [rsp+90h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v81; // [rsp+98h] [rbp-70h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-68h]
  __int64 v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  int v86; // [rsp+E8h] [rbp-20h]
  __int64 v87; // [rsp+F0h] [rbp-18h]
  __int64 v88; // [rsp+100h] [rbp-8h]
  __int64 v89; // [rsp+110h] [rbp+8h]
  __int64 v90; // [rsp+120h] [rbp+18h]
  int v91; // [rsp+138h] [rbp+30h]
  _BYTE v92[20]; // [rsp+140h] [rbp+38h] BYREF
  float v93; // [rsp+154h] [rbp+4Ch] BYREF
  float v94; // [rsp+158h] [rbp+50h]
  float v95; // [rsp+15Ch] [rbp+54h]
  int v96; // [rsp+164h] [rbp+5Ch]
  int v97; // [rsp+168h] [rbp+60h]
  int v98; // [rsp+16Ch] [rbp+64h]
  int v99; // [rsp+170h] [rbp+68h]
  int v100; // [rsp+174h] [rbp+6Ch]
  _QWORD v101[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v102[2]; // [rsp+188h] [rbp+80h]
  double v103; // [rsp+198h] [rbp+90h] BYREF
  double v104; // [rsp+1A0h] [rbp+98h]
  double v105; // [rsp+1A8h] [rbp+A0h]
  double v106[4]; // [rsp+1B0h] [rbp+A8h] BYREF

  v80 = a3;
  v4 = a3;
  v81 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v67 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    v66 = 315;
    goto LABEL_53;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
              *((_QWORD *)this + 1),
              v7,
              0LL);
  v8 = started;
  if ( started < 0 )
  {
    v66 = 318;
    goto LABEL_53;
  }
  v9 = 0LL;
  LODWORD(v71) = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_27;
  while ( 1 )
  {
    v10 = (unsigned int)v9;
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
    if ( *(_BYTE *)(v11 + 32) )
    {
      if ( !*(_BYTE *)(v11 + 33) )
        break;
    }
LABEL_25:
    v9 = (unsigned int)(v9 + 1);
    LODWORD(v71) = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 16) )
    {
      v4 = v80;
LABEL_27:
      started = CAnimationEngine::StopAnimations(this);
      v8 = started;
      if ( started < 0 )
      {
        v66 = 521;
        goto LABEL_53;
      }
      if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_31;
    }
  }
  ++*(_DWORD *)(v11 + 8);
  for ( i = 0LL; ; i = (unsigned int)(v70 + 1) )
  {
    v13 = *((_QWORD *)this + 5);
    v70 = i;
    v14 = *(_QWORD *)(v13 + 8 * v10);
    if ( (unsigned int)i >= *(_DWORD *)(v14 + 4) )
    {
      LODWORD(v9) = v71;
      goto LABEL_25;
    }
    v15 = *(_QWORD *)(v14 + 24);
    v16 = (unsigned int)i;
    v75 = (unsigned int)i;
    v17 = *(_QWORD *)(v15 + 8 * i);
    v18 = *(CAnimatedTransitionVisual **)v17;
    v19 = **(_QWORD **)(v17 + 8);
    v20 = **(_QWORD **)(v17 + 40);
    v21 = *(__int64 **)(v17 + 48);
    v76 = **(_QWORD **)(v17 + 32);
    v22 = *v21;
    v23 = *(__int64 **)(v17 + 56);
    v77 = v22;
    v79 = *v23;
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v14);
    v24 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    if ( *(_DWORD *)(v24 + 8) <= 1u )
    {
      v41 = **(_QWORD **)(*(_QWORD *)(v24 + 24) + 8 * v16);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v74) >= 0 && *(float *)&v74 == 0.0 )
      {
        v102[0] = 0LL;
        v101[0] = 0LL;
        v101[1] = 0LL;
        v42 = *((_QWORD *)this + 5);
        *(_QWORD *)((char *)v102 + 4) = 1065353216LL;
        v43 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v42 + 8 * v10) + 24LL) + 8 * v16);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v43 + 168LL))(v43, v101);
      }
    }
    v25 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v18 + 120LL);
    if ( v25 == CAnimatedTransitionVisual::HideGhost )
      CAnimatedTransitionVisual::HideGhost(v18);
    else
      v25(v18);
    if ( v19 )
      break;
LABEL_12:
    if ( v20 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v68);
      v8 = started;
      if ( started < 0 )
      {
        v66 = 422;
        goto LABEL_53;
      }
      if ( v68 == 2 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, &v72, 2LL);
        v8 = started;
        if ( started < 0 )
        {
          v66 = 425;
          goto LABEL_53;
        }
        v36 = *((_QWORD *)this + 5);
        v37 = v72;
        v93 = v37;
        v94 = v73;
        v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
        v96 = v82;
        v38 = *(_QWORD *)v18;
        v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
        v97 = HIDWORD(v83);
        v39 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(v38 + 152);
        if ( v39 == CAnimatedTransitionVisual::Scale2D )
          v40 = CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v92);
        else
          v40 = v39(v18, (const struct TA_TRANSFORM_2D *)v92);
        v8 = v40;
        if ( v40 < 0 )
        {
          v66 = 433;
          goto LABEL_54;
        }
      }
      else if ( v68 == 3 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, &v103, 3LL);
        v8 = started;
        if ( started < 0 )
        {
          v66 = 437;
          goto LABEL_53;
        }
        v52 = *((_QWORD *)this + 5);
        v53 = v103;
        v93 = v53;
        v94 = v104;
        v54 = v105;
        v95 = v54;
        v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
        v98 = v84;
        v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 8 * v10) + 24LL) + 8 * v16) + 64LL);
        v99 = HIDWORD(v85);
        v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 8 * v10) + 24LL) + 8 * v16) + 72LL);
        v55 = *(_QWORD *)v18;
        v100 = v86;
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v55 + 184))(v18, v92);
        v8 = started;
        if ( started < 0 )
        {
          v66 = 447;
          goto LABEL_53;
        }
      }
    }
    v26 = v76;
    if ( !v76 )
      goto LABEL_14;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v76 + 24LL))(v76, &v68);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 457;
      goto LABEL_53;
    }
    if ( v68 == 2 )
    {
      started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v26 + 40LL))(v26, &v72, 2LL);
      v8 = started;
      if ( started >= 0 )
      {
        v56 = *((_QWORD *)this + 5);
        v57 = v72;
        v93 = v57;
        v94 = v73;
        v87 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
        v96 = v87;
        v58 = *(_QWORD *)v18;
        v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
        v97 = HIDWORD(v88);
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v58 + 160))(v18, v92);
        v8 = started;
        if ( started < 0 )
        {
          v66 = 468;
          goto LABEL_53;
        }
        goto LABEL_14;
      }
      v66 = 460;
LABEL_53:
      v44 = started;
      goto LABEL_55;
    }
    if ( v68 != 3 )
      goto LABEL_14;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v26 + 40LL))(v26, &v103, 3LL);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 472;
      goto LABEL_53;
    }
    v59 = *((_QWORD *)this + 5);
    v60 = v103;
    v93 = v60;
    v94 = v104;
    v61 = v105;
    v95 = v61;
    v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
    v98 = v89;
    v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 76LL);
    v99 = HIDWORD(v90);
    v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 + 8 * v10) + 24LL) + 8 * v16) + 84LL);
    v62 = *(_QWORD *)v18;
    v100 = v91;
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v62 + 192))(v18, v92);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 481;
      goto LABEL_53;
    }
LABEL_14:
    v27 = v77;
    if ( !v77 )
      goto LABEL_20;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v77 + 24LL))(v77, &v68);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 491;
      goto LABEL_53;
    }
    started = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v27 + 40LL))(v27, &v78, v68);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 495;
      goto LABEL_53;
    }
    v28 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_OPACITY *))(*(_QWORD *)v18 + 168LL);
    v93 = v78;
    if ( v28 == CAnimatedTransitionVisual::Opacity )
      v29 = CAnimatedTransitionVisual::Opacity(v18, (const struct TA_TRANSFORM_OPACITY *)v92);
    else
      v29 = v28(v18, (const struct TA_TRANSFORM_OPACITY *)v92);
    v8 = v29;
    if ( v29 < 0 )
    {
      v66 = 500;
      goto LABEL_54;
    }
LABEL_20:
    if ( !v79 )
      goto LABEL_21;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v79 + 40LL))(v79, v106, 4LL);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 505;
      goto LABEL_53;
    }
    v63 = 0LL;
    v64 = &v93;
    do
    {
      v65 = v106[v63++];
      *v64++ = v65;
    }
    while ( v63 < 4 );
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 200LL))(v18, v92);
    v8 = started;
    if ( started < 0 )
    {
      v66 = 513;
      goto LABEL_53;
    }
LABEL_21:
    v30 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v18 + 248LL);
    if ( v30 == CAnimatedTransitionVisual::NeedToUpdateScene )
      updated = CAnimatedTransitionVisual::NeedToUpdateScene(v18);
    else
      updated = v30(v18);
    v5 = updated | v67;
    v67 |= updated;
  }
  started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v68);
  v8 = started;
  if ( started < 0 )
  {
    v66 = 374;
    goto LABEL_53;
  }
  v33 = v68;
  if ( v68 != 2 )
  {
    if ( v68 == 3 )
    {
      v45 = 0;
      while ( 1 )
      {
        v46 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v16)
                         + 8LL * v45
                         + 8);
        v47 = *v46;
        if ( *v46 )
        {
          started = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v47 + 200LL))(
                      *v46,
                      0LL,
                      &v69);
          v8 = started;
          if ( started < 0 )
          {
            v66 = 397;
            goto LABEL_53;
          }
          v48 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v75);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 240LL))(v48, v69);
          started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v47 + 40LL))(v47, &v103, 3LL);
          v8 = started;
          if ( started < 0 )
          {
            v66 = 402;
            goto LABEL_53;
          }
          v49 = *((_QWORD *)this + 5);
          v16 = v75;
          v50 = v103;
          v93 = v50;
          v94 = v104;
          v95 = v105;
          v51 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v49 + 8 * v10) + 24LL) + 8 * v75);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 240LL))(v51, v69);
          started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 176LL))(v18, v92);
          v8 = started;
          if ( started < 0 )
          {
            v66 = 410;
            goto LABEL_53;
          }
          v33 = v68;
        }
        else
        {
          v16 = v75;
        }
        if ( ++v45 >= v33 )
          goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, &v72, 2LL);
  v8 = started;
  if ( started < 0 )
  {
    v66 = 377;
    goto LABEL_53;
  }
  v34 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(*(_QWORD *)v18 + 144LL);
  v93 = v72;
  v94 = v73;
  if ( v34 == CAnimatedTransitionVisual::Translate2D )
    v35 = CAnimatedTransitionVisual::Translate2D(v18, (const struct TA_TRANSFORM_2D *)v92);
  else
    v35 = v34(v18, (const struct TA_TRANSFORM_2D *)v92);
  v8 = v35;
  if ( v35 >= 0 )
    goto LABEL_12;
  v66 = 383;
LABEL_54:
  v44 = v8;
LABEL_55:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v66);
LABEL_31:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v81);
  return v8;
}
