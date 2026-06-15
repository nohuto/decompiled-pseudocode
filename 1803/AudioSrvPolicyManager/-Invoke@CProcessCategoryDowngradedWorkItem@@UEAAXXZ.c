/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180028E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800124CC (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800156A0 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001CF54 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessCategoryDowngradedWorkItem::Invoke(CProcessCategoryDowngradedWorkItem *this)
{
  __int64 v1; // rax
  CApplication *v3; // rdi
  CProcess *v4; // rcx
  volatile signed __int32 *v5; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(CApplication **)(v1 + 280);
  v4 = (CProcess *)v1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
      *(_DWORD *)(v1 + 216));
    v4 = (CProcess *)*((_QWORD *)this + 1);
  }
  if ( *((_DWORD *)v4 + 130) == 3 )
  {
    *((_DWORD *)v4 + 130) = 0;
    *((_DWORD *)v4 + 131) = 0;
    *((_DWORD *)v4 + 132) = 4;
    v4 = (CProcess *)*((_QWORD *)this + 1);
  }
  CProcess::DeleteInactivityTimer(v4);
  if ( v3 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v3);
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, v3, 209, 0);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 32LL))(v5);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  }
}
