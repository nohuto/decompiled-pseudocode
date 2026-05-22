/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18005005C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x180050E44 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A4BC (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A624 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180060B6C (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180060C14 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // r12
  char *v5; // rsi
  MPCButtonHoldHelper *v6; // rcx
  struct MPCGestureHandlerManager *Instance; // rcx
  bool v8; // dl
  char *v9; // r13
  char v10; // r15
  volatile signed __int32 *v11; // rbx
  char v12; // r15
  volatile signed __int32 *v13; // rbx
  struct MPCGestureHandlerManager *v14; // rcx
  struct MPCGestureHandlerManager *v15; // rcx
  char v16; // r15
  volatile signed __int32 *v17; // rbx
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  bool v22; // bl
  float v23; // xmm1_4
  struct MPCGestureHandlerManager *v24; // rcx
  struct MPCGestureHandlerManager *v25; // rcx
  float v26; // xmm0_4
  int v27; // eax
  struct MPCGestureHandlerManager *v28; // rcx
  struct MPCGestureHandlerManager *v29; // rcx
  char IsWorkspaceScrolling; // bl
  struct MPCGestureHandlerManager *v31; // rcx
  float v32; // xmm6_4
  float v33; // xmm6_4
  MPCButtonHoldHelper *v34; // rbx
  MPCButtonHoldHelper *v35; // rax
  void (__fastcall ***v36)(_QWORD, __int64); // rcx
  MPCGestureHandlerManager *v37; // rcx
  char *v38; // [rsp+28h] [rbp-79h] BYREF
  char *v39; // [rsp+30h] [rbp-71h] BYREF
  char *v40; // [rsp+38h] [rbp-69h] BYREF
  char *v41; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v42[3]; // [rsp+48h] [rbp-59h] BYREF
  char v43; // [rsp+60h] [rbp-41h] BYREF
  __int64 v44; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v45; // [rsp+70h] [rbp-31h]
  __int64 v46; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v47; // [rsp+80h] [rbp-21h]
  __int64 v48; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v49; // [rsp+90h] [rbp-11h]
  char v50; // [rsp+108h] [rbp+67h]
  MPCButtonHoldHelper *v51; // [rsp+110h] [rbp+6Fh] BYREF
  MPCButtonHoldHelper **v52; // [rsp+118h] [rbp+77h] BYREF
  char *v53; // [rsp+120h] [rbp+7Fh] BYREF

  v42[2] = -2LL;
  v4 = 0;
  v50 = 0;
  v52 = &v51;
  v5 = (char *)this + 24;
  v6 = (MPCButtonHoldHelper *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v51 = v6;
  if ( v6 )
    (*(void (__fastcall **)(MPCButtonHoldHelper *))(*(_QWORD *)v6 + 8LL))(v6);
  Instance = MPCGestureHandlerManager::GetInstance();
  if ( !(unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(Instance, &v51)
    || (v8 = 0, *((_BYTE *)this + 707)) )
  {
    v8 = 1;
  }
  v9 = (char *)this + 3920;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 490), v8, *((_QWORD *)a2 + 2));
  *((_DWORD *)a2 + 322) = *((_DWORD *)a2 + 195);
  *((_DWORD *)a2 + 323) = *((_DWORD *)a2 + 196);
  *((_DWORD *)a2 + 318) = 0;
  v10 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v44) + 8LL);
  v11 = v45;
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v10 )
  {
    v12 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v46) + 10LL);
    v13 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( !_InterlockedDecrement(v13 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    if ( v12 )
    {
      v52 = (MPCButtonHoldHelper **)v5;
      if ( v5 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
      v14 = MPCGestureHandlerManager::GetInstance();
      if ( (unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(v14, &v52) )
        MPCSixDofProcessor::EndGesture(this);
    }
    if ( *((_BYTE *)this + 713) && (v12 || *(_BYTE *)(*((_QWORD *)this + 494) + 13LL)) )
    {
      v53 = v5;
      if ( v5 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
      v15 = MPCGestureHandlerManager::GetInstance();
      *((_DWORD *)a2 + 318) = (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v15, &v53) != 0 ? 7 : 1;
      goto LABEL_26;
    }
    return;
  }
  if ( !*((_BYTE *)this + 712)
    || !*((_BYTE *)this + 720)
    || *((_DWORD *)this + 179) == 2
    || (v4 = 1, v16 = 1, *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v48) + 12LL)) )
  {
    v16 = 0;
  }
  if ( (v4 & 1) != 0 )
  {
    v17 = v49;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  if ( v16 )
  {
    *((float *)a2 + 319) = (float)(*((float *)this + 1006) + *((float *)this + 1021)) * *((float *)this + 162);
    v18 = (float)(*((float *)this + 1022) + *((float *)this + 1007)) * *((float *)this + 162);
    *((float *)a2 + 320) = v18;
    if ( *((_BYTE *)this + 632) )
      *((float *)a2 + 320) = v18 * -1.0;
    v19 = *((float *)this + 1007) + *((float *)this + 1022);
    v20 = *((float *)this + 1006) + *((float *)this + 1021);
    v21 = sqrtf_0((float)(v20 * v20) + (float)(v19 * v19));
    v22 = v21 > *((float *)this + 163);
    if ( v21 <= *((float *)this + 163) )
    {
      *((float *)this + 1021) = v20;
      *((float *)this + 1022) = v19;
    }
    v23 = (float)(*((float *)this + 1007) * *((float *)this + 1009))
        + (float)(*((float *)this + 1006) * *((float *)this + 1008));
    v51 = (MPCButtonHoldHelper *)&v38;
    v38 = v5;
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v24 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsWorkspaceScrolling(v24, &v38) )
    {
      if ( !v22 )
      {
        *(_QWORD *)((char *)a2 + 1276) = 0LL;
        *((_BYTE *)this + 707) = 1;
LABEL_50:
        v50 = 1;
        goto LABEL_51;
      }
    }
    else if ( !v22 )
    {
      goto LABEL_51;
    }
    if ( v23 >= 0.0 )
    {
      *(_QWORD *)((char *)this + 4084) = 0LL;
      *((_BYTE *)this + 707) = 0;
      goto LABEL_50;
    }
LABEL_51:
    *((_DWORD *)a2 + 318) = 5;
    *((_DWORD *)this + 177) = 0;
    goto LABEL_79;
  }
  if ( !*((_BYTE *)this + 712)
    || !*((_BYTE *)this + 714)
    || *((_BYTE *)this + 707)
    || !*((_BYTE *)this + 720)
    || !*(_BYTE *)(*(_QWORD *)v9 + 8LL)
    || *(_BYTE *)(*(_QWORD *)v9 + 9LL) )
  {
    goto LABEL_65;
  }
  v51 = (MPCButtonHoldHelper *)&v39;
  v39 = v5;
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  v25 = MPCGestureHandlerManager::GetInstance();
  if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v25, &v39) )
  {
LABEL_65:
    v51 = (MPCButtonHoldHelper *)&v40;
    v40 = v5;
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v28 = MPCGestureHandlerManager::GetInstance();
    if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(v28, &v40) && !*((_BYTE *)this + 721) )
      return;
    v51 = (MPCButtonHoldHelper *)&v41;
    v41 = v5;
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v29 = MPCGestureHandlerManager::GetInstance();
    IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling(v29, &v41);
    MPCSixDofProcessor::EndGesture(this);
    if ( !IsWorkspaceScrolling )
      return;
    v51 = (MPCButtonHoldHelper *)v42;
    v42[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v31 = MPCGestureHandlerManager::GetInstance();
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(MPCGestureHandlerManager::GetLastScrollVelocityAvg(v31, v42)) & _xmm);
    v33 = v32 * *((float *)this + 164);
    v51 = (MPCButtonHoldHelper *)operator new(0x28uLL);
    v34 = MPCButtonHoldHelper::MPCButtonHoldHelper(v51, v33);
    if ( v9 != &v43 )
    {
      v35 = v34;
      v34 = 0LL;
      v36 = *(void (__fastcall ****)(_QWORD, __int64))v9;
      *(_QWORD *)v9 = v35;
      if ( !v36 )
        return;
      (**v36)(v36, 1LL);
    }
    if ( !v34 )
      return;
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v34)(v34, 1LL);
LABEL_79:
    if ( !v50 )
      return;
    goto LABEL_80;
  }
  ++*((_DWORD *)this + 177);
  v26 = sqrtf_0(
          (float)((float)(*((float *)this + 998) - *((float *)this + 1004))
                * (float)(*((float *)this + 998) - *((float *)this + 1004)))
        + (float)((float)(*((float *)this + 999) - *((float *)this + 1005))
                * (float)(*((float *)this + 999) - *((float *)this + 1005))));
  v27 = *((_DWORD *)this + 177);
  if ( v26 > *((float *)this + 166) )
    v27 = 0;
  *((_DWORD *)this + 177) = v27;
  if ( v27 >= *((_DWORD *)this + 165) )
  {
    *((_DWORD *)a2 + 318) = 1;
LABEL_26:
    *((_BYTE *)this + 707) = 1;
LABEL_80:
    *((_OWORD *)a2 + 81) = *(_OWORD *)((char *)a2 + 788);
    *((_DWORD *)a2 + 328) = *((_DWORD *)a2 + 202);
    v42[1] = v5;
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v37 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v37);
    *((_BYTE *)this + 721) = 1;
  }
}
