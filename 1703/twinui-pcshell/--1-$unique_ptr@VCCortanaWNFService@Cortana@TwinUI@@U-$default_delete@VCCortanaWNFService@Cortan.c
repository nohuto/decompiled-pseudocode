/*
 * XREFs of ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800C8954
 * Callers:
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0CBC (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1800C98F0 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>::~unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>(
        TwinUI::Cortana::CCortanaWNFService **a1)
{
  TwinUI::Cortana::CCortanaWNFService *v1; // rbx
  TwinUI::Cortana::CCortanaWNFService *v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  struct _TP_TIMER *v5; // rsi
  __int64 v6; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    *(_QWORD *)v1 = &TwinUI::Cortana::CCortanaWNFService::`vftable';
    TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(v2);
    v3 = *((_QWORD *)v1 + 8);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 48);
      if ( v4 >= 8 )
        std::_Deallocate(*(char **)(v3 + 24), v4 + 1, 2uLL);
      v5 = *(struct _TP_TIMER **)v3;
      if ( *(_QWORD *)v3 )
      {
        SetThreadpoolTimer(*(PTP_TIMER *)v3, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(v5, 0);
        CloseThreadpoolTimer(v5);
      }
      operator delete((void *)v3);
    }
    v6 = *((_QWORD *)v1 + 7);
    if ( v6 )
    {
      *((_QWORD *)v1 + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    operator delete(v1);
  }
}
