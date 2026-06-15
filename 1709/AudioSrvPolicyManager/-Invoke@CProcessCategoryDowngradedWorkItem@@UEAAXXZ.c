/*
 * XREFs of ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18001F880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000D550 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000FCDC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessCategoryDowngradedWorkItem::Invoke(CProcessCategoryDowngradedWorkItem *this)
{
  __int64 v1; // rax
  CApplication *v3; // rdi
  _DWORD *v4; // rax
  volatile signed __int32 *v5; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(CApplication **)(v1 + 272);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
      *(_DWORD *)(v1 + 216));
  }
  v4 = (_DWORD *)(*((_QWORD *)this + 1) + 512LL);
  if ( *v4 == 3 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 4;
  }
  CProcess::DeleteInactivityTimer(*((CProcess **)this + 1));
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
