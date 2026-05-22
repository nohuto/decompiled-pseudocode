/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004EB20 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004FC8C (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18005005C (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x180050E44 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x1800580E0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A798 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DD10 (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  char *v5; // rdi
  bool v6; // bl
  struct MPCHolographicInputManager *Instance; // rax
  int v8; // eax
  struct MPCHolographicInputManager *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rbx
  struct MPCGestureHandlerManager *v12; // rcx
  char IsInjecting; // al
  MPCSixDofProcessor *v14; // rcx
  MPCGestureHandlerManager *v15; // rcx
  struct MPCGestureHandlerManager *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 *v20; // [rsp+78h] [rbp+38h]

  if ( !MPCInputProviderBase::IsPrimary(this) )
    return;
  v5 = (char *)this - 24;
  MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)((char *)this - 24), a3);
  if ( *((_BYTE *)this + 680) )
  {
    if ( (*((_DWORD *)a3 + 336) & 2) == 0 )
    {
      v5[704] = 0;
      v6 = v5[706] == 0;
      goto LABEL_8;
    }
  }
  else if ( (*((_DWORD *)a3 + 336) & 2) != 0 )
  {
    v5[706] = 0;
    v5[704] = 1;
  }
  v6 = 0;
LABEL_8:
  if ( v6 )
    MPCManager::OnMenuPressed(MPCManager::s_instance, *((_QWORD *)this + 3), 5LL);
  if ( *((_BYTE *)a3 + 776) )
  {
    if ( v6 )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      v8 = MPCHolographicInputManager::InjectRightClick(
             Instance,
             1LL,
             *((unsigned int *)a3 + 1),
             *((unsigned int *)a3 + 202),
             *((_DWORD *)a3 + 195),
             *((_DWORD *)a3 + 196),
             -2LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x33A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v8);
      v9 = MPCHolographicInputManager::GetInstance();
      v10 = MPCHolographicInputManager::InjectRightClick(
              v9,
              0LL,
              *((unsigned int *)a3 + 1),
              *((unsigned int *)a3 + 202),
              *((_DWORD *)a3 + 195),
              *((_DWORD *)a3 + 196),
              v17);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x343,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          (const char *)(unsigned int)v10);
    }
    if ( *((_BYTE *)this + 697) )
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)((char *)this - 24), a3);
      return;
    }
    v20 = &v19;
    v11 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    v19 = v11;
    if ( v11 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v12 = MPCGestureHandlerManager::GetInstance();
    IsInjecting = MPCGestureHandlerManager::IsInjecting(v12, &v19);
    v14 = (MPCSixDofProcessor *)((char *)this - 24);
    if ( IsInjecting )
    {
      MPCSixDofProcessor::PopulateDownLevelInfo(v14, a3);
      v20 = &v19;
      v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v11 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    else
    {
      MPCSixDofProcessor::UpdateTouchpadDownleveling(v14, a3);
      if ( *((_BYTE *)this + 697) )
        return;
      MPCSixDofProcessor::PopulateDownLevelInfo((MPCSixDofProcessor *)((char *)this - 24), a3);
      v20 = &v19;
      v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
      if ( v11 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    }
    v15 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v15);
  }
  else
  {
    v20 = &v19;
    v19 = (unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24);
    if ( v19 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCSixDofProcessor *)24));
    v16 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v16, &v19) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)((char *)this - 24));
  }
}
