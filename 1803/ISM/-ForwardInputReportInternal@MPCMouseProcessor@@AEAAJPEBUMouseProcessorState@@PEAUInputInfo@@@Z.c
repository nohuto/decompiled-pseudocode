/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097220 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180049A70 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004EF44 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180050038 (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x180050440 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005294C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180097CAC (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1800AE570 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  const struct MouseProcessorState *v4; // r12
  char v6; // si
  int v7; // eax
  MPCHolographicInputManager *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 (__fastcall ***FocusedTarget)(struct IInputTarget *, GUID *, __int64 *); // rax
  __int64 v13; // rax
  __int64 v14; // rax
  MPCHolographicInputManager *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  struct IMPCInputTarget *v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  MPCConstantManager *v23; // rax
  bool v24; // bl
  MPCHolographicInputManager *v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // r12d
  struct IInputTarget *v30; // rbx
  unsigned int *v31; // rsi
  __int64 v32; // rax
  struct IInputTarget *v33; // rcx
  char v35; // cl
  struct IInputTarget *v36; // rcx
  struct IInputTarget *v37; // [rsp+30h] [rbp-50h] BYREF
  const struct MouseProcessorState *v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h]
  unsigned __int64 v40[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v39 = -2LL;
  v4 = a2;
  v38 = a2;
  v6 = 0;
  LODWORD(v37) = 0;
  if ( (*((_WORD *)a3 + 262) & 0xC00) != 0 )
    v7 = *((__int16 *)a3 + 263);
  else
    v7 = 0;
  *((_DWORD *)this + 840) = v7;
  MPCHolographicInputManager::GetInstance();
  FocusedTarget = (__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))MPCHolographicInputManager::GetFocusedTarget(
                                                                                        v8,
                                                                                        v9,
                                                                                        v10,
                                                                                        v11);
  if ( MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget) )
  {
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v13 + 2009) )
    {
      MPCHolographicInputManager::GetInstance();
      if ( *(_BYTE *)(v14 + 2010) )
      {
        *((_DWORD *)a3 + 431) = 1;
      }
      else
      {
        MPCHolographicInputManager::GetInstance();
        v19 = MPCHolographicInputManager::GetFocusedTarget(v15, v16, v17, v18);
        *((_DWORD *)a3 + 124) = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v19 + 64LL))(v19);
        MPCMouseProcessor::DownLevelInput(this, v4, a3, *((_DWORD *)a3 + 133), *((_DWORD *)a3 + 134), 0);
      }
      *((_BYTE *)this + 3416) = 0;
LABEL_48:
      *((_DWORD *)this + 841) = *((_DWORD *)v4 + 4);
      return 0LL;
    }
  }
  v20 = (unsigned __int64)this + 40;
  if ( !MPCInputProviderBase::IsPrimary((unsigned __int64)this + 40) )
  {
    v24 = 1;
    if ( (*((_BYTE *)this + 3368) & 0x70) == 0 )
    {
      std::string::string(v40, "ActivationDelta", v22);
      v6 = 1;
      LODWORD(v37) = 1;
      MPCConstantManager::GetInstance();
      if ( *((_DWORD *)this + 839) <= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                                      v23,
                                                      (struct IMPCInputProviderBase *)(v20 & -(__int64)(this != 0LL)),
                                                      (__int64)v40) )
        v24 = 0;
    }
    if ( (v6 & 1) != 0 )
      std::string::~string(v40, v21);
    if ( v24 )
    {
      MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
      *((_BYTE *)this + 3416) = 0;
      *((_DWORD *)this + 859) = 1;
    }
    goto LABEL_48;
  }
  v37 = 0LL;
  MPCHolographicInputManager::GetInstance();
  v26 = MPCHolographicInputManager::Process3DInput(
          v25,
          a3,
          (struct IMPCInputProviderBase *)(v20 & -(__int64)(this != 0LL)),
          &v37);
  v27 = v26;
  if ( v26 >= 0 )
  {
    if ( (*((_DWORD *)this + 842) & 0x10) != 0 )
      MPCGestureCancelTracker::TrackPosition(
        (MPCMouseProcessor *)((char *)this + 3456),
        (MPCMouseProcessor *)((char *)this + 3384));
    if ( (*((_DWORD *)v4 + 4) & 0x10) != 0 || (*((_DWORD *)this + 841) & 0x10) == 0 )
    {
      if ( (*((_DWORD *)v4 + 4) & 0x10) == 0 || (*((_DWORD *)this + 841) & 0x10) != 0 )
        goto LABEL_38;
      v29 = 1;
      *((_QWORD *)this + 432) = *((_QWORD *)this + 423);
      *((_DWORD *)this + 866) = *((_DWORD *)this + 848);
      *((_WORD *)this + 1736) = 256;
      *((_DWORD *)this + 867) = 1011666125;
      *((_DWORD *)this + 869) = GetTickCount();
    }
    else
    {
      v29 = 0;
    }
    if ( *((_BYTE *)this + 3473) && *((_BYTE *)this + 3472) )
    {
      v29 = 2;
      *((_WORD *)this + 1736) = 0;
      *((_DWORD *)this + 869) = 0;
    }
    v30 = v37;
    v31 = (unsigned int *)*((_QWORD *)this + 8);
    MPCHolographicInputManager::GetInstance();
    v26 = MPCHolographicInputManager::InjectInteractionState(v32, v29, *v31, (__int64)a3 + 600, v30);
    v27 = v26;
    if ( v26 < 0 )
    {
      v28 = 272LL;
      goto LABEL_34;
    }
    v4 = v38;
LABEL_38:
    v35 = *((_BYTE *)a3 + 600);
    *((_BYTE *)this + 3416) = v35 != 0;
    if ( v35 )
    {
      *((_DWORD *)a3 + 16) = (int)*((float *)a3 + 151);
      *((_DWORD *)a3 + 17) = (int)*((float *)a3 + 152);
      *((_BYTE *)a3 + 500) = 0;
      *((_BYTE *)a3 + 600) = 0;
      *((_DWORD *)a3 + 124) = *((_DWORD *)a3 + 158);
      *((_BYTE *)a3 + 1730) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        v4,
        a3,
        (int)*((float *)a3 + 151),
        (int)*((float *)a3 + 152),
        *((_BYTE *)a3 + 896) != 0);
    }
    else if ( *((_BYTE *)this + 3417) && !*((_QWORD *)this + 284) )
    {
      *((_DWORD *)a3 + 124) = *((_DWORD *)this + 855);
      *((_BYTE *)a3 + 1730) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        v4,
        a3,
        *((_DWORD *)this + 856),
        *((_DWORD *)this + 857),
        *((_DWORD *)this + 858) != 0);
    }
    if ( (*((_DWORD *)v4 + 4) & 0x20) == 0 && (*((_DWORD *)this + 841) & 0x20) != 0 )
      MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *((_QWORD *)this + 8), 3u);
    v36 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    goto LABEL_48;
  }
  v28 = 244LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v26);
  v33 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return v27;
}
