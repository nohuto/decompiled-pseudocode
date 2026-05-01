/*
 * XREFs of ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D560
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18005D150 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x18006048C (--0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v5 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *(_QWORD *)(a1 + 24) == a2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( *(_QWORD *)(a1 + 32) )
    {
      v5 = *(_QWORD *)(a1 + 32);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    ++*(_DWORD *)(a1 + 40);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v5 )
    {
      v8 = 0LL;
      v9 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9
        && (v10 = Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs(v9, 2LL), (v8 = v10) != 0) )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, a1, v10);
      }
      else
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x22E,
          (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v8);
    }
    v6 = 0;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v6 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  return v6;
}
