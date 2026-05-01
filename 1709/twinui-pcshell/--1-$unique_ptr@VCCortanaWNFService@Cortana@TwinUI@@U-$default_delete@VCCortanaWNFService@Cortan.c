/*
 * XREFs of ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800DAE14
 * Callers:
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800CE88C (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1800DC560 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>::~unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>(
        TwinUI::Cortana::CCortanaWNFService **a1)
{
  TwinUI::Cortana::CCortanaWNFService *v1; // rbx
  TwinUI::Cortana::CCortanaWNFService *v2; // rcx
  __int64 v3; // rdi
  struct _TP_TIMER *v4; // rsi
  __int64 v5; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    *(_QWORD *)v1 = &TwinUI::Cortana::CCortanaWNFService::`vftable';
    TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(v2);
    v3 = *((_QWORD *)v1 + 8);
    if ( v3 )
    {
      std::wstring::~wstring((unsigned __int64 *)(v3 + 24));
      v4 = *(struct _TP_TIMER **)v3;
      if ( *(_QWORD *)v3 )
      {
        SetThreadpoolTimer(*(PTP_TIMER *)v3, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(v4, 0);
        CloseThreadpoolTimer(v4);
      }
      operator delete((void *)v3);
    }
    v5 = *((_QWORD *)v1 + 7);
    if ( v5 )
    {
      *((_QWORD *)v1 + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v1);
  }
}
