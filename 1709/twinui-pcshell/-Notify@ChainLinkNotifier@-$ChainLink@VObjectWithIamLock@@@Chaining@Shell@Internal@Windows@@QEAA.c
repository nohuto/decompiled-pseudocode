/*
 * XREFs of ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18005C718
 * Callers:
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1800559F0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x180059998 (--1-$CAutoMemPtr@VChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Win.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18005CFF0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D6AC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x18005E950 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___--Run.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005E2C0 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005E3AC (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 *     ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x18006048C (--0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *i; // rbx
  __int64 v13; // r15
  char j; // r12
  RTL_SRWLOCK *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  if ( a1[1] )
  {
    v2 = a1 + 8;
    if ( a1 + 2 != a1 + 8 )
    {
      v3 = a1 + 3;
      do
      {
        if ( *(v3 - 1) )
        {
          v4 = 0LL;
          v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v5
            && (v4 = Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs(
                       v5,
                       *((unsigned int *)v3 + 2))) != 0 )
          {
            v6 = a1[1];
            v23 = *v3;
            v7 = (__int64 (__fastcall ***)(_QWORD))(v6 + 16 + *(int *)(*(_QWORD *)(v6 + 16) + 8LL));
            v24 = (**v7)(v7);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStart<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v24,
              &v23,
              v3 + 1);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*(v3 - 1) + 72LL))(*(v3 - 1), *v3, v4);
            v8 = a1[1];
            v23 = *v3;
            v9 = (__int64 (__fastcall ***)(_QWORD))(v8 + 16 + *(int *)(*(_QWORD *)(v8 + 16) + 8LL));
            v24 = (**v9)(v9);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v24,
              &v23,
              v3 + 1);
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x2DD,
              (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
              (const char *)0x8007000ELL);
          }
          v10 = *(v3 - 1);
          *(v3 - 1) = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v11 = *v3;
          *v3 = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          *((_DWORD *)v3 + 2) = 0;
          if ( v4 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v4);
        }
        v3 += 3;
      }
      while ( v3 - 1 != v2 );
    }
    for ( i = a1 + 8; i != a1 + 10; ++i )
    {
      if ( *((_BYTE *)i + 4) )
      {
        v13 = a1[1];
        if ( *(int *)i >= 0 )
        {
          if ( *(int *)i <= 1 )
          {
            for ( j = 0; ; j = v23 )
            {
              v15 = CApplicationManagerUtility::g_pIAMGlobals;
              v16 = 0LL;
              AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
              if ( *(_BYTE *)(v13 + 57) )
              {
                if ( !j )
                  break;
              }
              LOBYTE(v23) = 1;
              *(_BYTE *)(v13 + 57) = 1;
              if ( !*(_BYTE *)(v13 + 56) )
                goto LABEL_43;
              *(_BYTE *)(v13 + 56) = 0;
              if ( *(_QWORD *)(v13 + 48) )
              {
                v16 = *(_QWORD *)(v13 + 48);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
                v20 = *(_QWORD *)(v13 + 48);
                if ( v20 )
                {
                  *(_QWORD *)(v13 + 48) = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                }
                v19 = 1;
                *(_BYTE *)(v13 + 56) = *(_QWORD *)(v13 + 32) != 0LL;
              }
              else
              {
                if ( !*(_QWORD *)(v13 + 32) )
                  goto LABEL_43;
                v17 = *(_QWORD *)(v13 + 32);
                if ( *(_QWORD *)(v13 + 48) != v17 )
                {
                  if ( v17 )
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*(_QWORD *)(v13 + 32));
                  v18 = *(_QWORD *)(v13 + 48);
                  *(_QWORD *)(v13 + 48) = v17;
                  if ( v18 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                }
                if ( *(_QWORD *)(v13 + 48) )
                {
                  v16 = *(_QWORD *)(v13 + 48);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
                }
                v19 = 0;
              }
              if ( !v16 )
              {
LABEL_43:
                *(_BYTE *)(v13 + 57) = 0;
                break;
              }
              if ( v15 )
                ReleaseSRWLockExclusive(v15);
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v16, v19);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            if ( v15 )
              ReleaseSRWLockExclusive(v15);
          }
          else if ( *(_DWORD *)i == 2 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 80LL))(a1[1], 0LL, 2LL);
          }
        }
        v23 = 0LL;
        *i = 0LL;
      }
    }
    v21 = a1[1];
    if ( v21 )
    {
      a1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
}
