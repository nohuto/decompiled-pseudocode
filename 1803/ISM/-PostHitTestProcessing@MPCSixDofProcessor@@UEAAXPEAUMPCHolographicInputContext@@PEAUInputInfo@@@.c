/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003CF7C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E2B0 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F974 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x18004F364 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005294C (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054C5C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005506C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  char *v5; // rdi
  bool v6; // al
  bool v7; // bl
  struct MPCHolographicInputManager *Instance; // rax
  int v9; // eax
  struct MPCHolographicInputManager *v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rbx
  struct MPCGestureHandlerManager *v13; // rcx
  char IsInjecting; // al
  MPCSixDofProcessor *v15; // rcx
  MPCGestureHandlerManager *v16; // rcx
  struct MPCGestureHandlerManager *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 *v20; // [rsp+70h] [rbp+30h]

  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  v5 = (char *)this - 24;
  MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)((char *)this - 24), a3);
  v6 = (*((_BYTE *)a3 + 1168) & 2) != 0 && !v5[3241];
  if ( !v5[2296] )
  {
    if ( v6 )
    {
      v5[2201] = 0;
      v5[2296] = 1;
    }
    goto LABEL_9;
  }
  if ( v6 )
  {
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v5[2296] = 0;
  v7 = v5[2201] == 0;
LABEL_10:
  if ( v7 )
    MPCManager::OnMenuPressed(MPCManager::s_instance, *((_QWORD *)this + 3), 5LL);
  if ( *((_BYTE *)a3 + 600) )
  {
    if ( v7 )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      v9 = MPCHolographicInputManager::InjectRightClick(Instance, 1LL, *((unsigned int *)a3 + 158));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v9);
      v10 = MPCHolographicInputManager::GetInstance();
      v11 = MPCHolographicInputManager::InjectRightClick(v10, 0LL, *((unsigned int *)a3 + 158));
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3AB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v11);
    }
    if ( *((_BYTE *)this + 2285) )
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)((char *)this - 24), a3);
      return;
    }
    v20 = &v19;
    v12 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    v19 = v12;
    if ( v12 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v13 = MPCGestureHandlerManager::GetInstance();
    IsInjecting = MPCGestureHandlerManager::IsInjecting(v13, &v19);
    v15 = (MPCSixDofProcessor *)((char *)this - 24);
    if ( IsInjecting )
    {
      MPCSixDofProcessor::PopulateDownLevelInfo(v15, a3);
      v20 = &v19;
      v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    else
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling(v15, a3);
      if ( *((_BYTE *)this + 2285) )
        return;
      MPCSixDofProcessor::PopulateDownLevelInfo((MPCSixDofProcessor *)((char *)this - 24), a3);
      v20 = &v19;
      v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    v16 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v16);
  }
  else
  {
    v20 = &v19;
    v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    if ( v19 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v17 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v17, &v19) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)((char *)this - 24));
  }
}
