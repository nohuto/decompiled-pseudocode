/*
 * XREFs of ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801B81D0
 * Callers:
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1801B615C (--1ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1801B66E0 (-AppendChainLink@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801B8DF0 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18012C2A8 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18012C37C (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x18012C814 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1801B6D0C (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ChainLinkNotifier::Notify(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // r8
  RTL_SRWLOCK *v4; // rbx
  unsigned int *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF

  v1 = (__int64 *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(v3 + 16) + 4LL) + v3 + 16);
    AcquireSRWLockExclusive(v4);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( a1 + 16 != a1 + 64 )
    {
      v5 = (unsigned int *)(a1 + 32);
      do
      {
        if ( *((_QWORD *)v5 - 2) )
        {
          Microsoft::WRL::Details::Make<Windows::Internal::Shell::Chaining::ChainLinkEventArgs,enum Windows::Internal::Shell::Chaining::ChainLinkEventType>(
            &v16,
            v5);
          v6 = v16;
          if ( v16 )
          {
            v7 = *v1;
            v17 = *((_QWORD *)v5 - 1);
            v8 = (__int64 (__fastcall ***)(_QWORD))(v7 + 16 + *(int *)(*(_QWORD *)(v7 + 16) + 8LL));
            v18 = (**v8)(v8);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStart<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              (LPCSTR *)&v18,
              &v17,
              (int *)v5);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v5 - 2) + 72LL))(
              *((_QWORD *)v5 - 2),
              *((_QWORD *)v5 - 1),
              v6);
            v9 = *v1;
            v17 = *((_QWORD *)v5 - 1);
            v10 = (__int64 (__fastcall ***)(_QWORD))(v9 + 16 + *(int *)(*(_QWORD *)(v9 + 16) + 8LL));
            v18 = (**v10)(v10);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              (LPCSTR *)&v18,
              &v17,
              (int *)v5);
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              733LL,
              (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
              (const char *)0x8007000ELL);
          }
          v14 = 0LL;
          v13 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(
            (__int64 *)v5 - 2,
            (__int64 *)&v13);
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(
            (__int64 *)v5 - 1,
            (__int64 *)&v13 + 1);
          *v5 = v14;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13 + 1);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
          if ( v6 )
          {
            v16 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v6);
          }
        }
        v5 += 6;
      }
      while ( v5 - 4 != (unsigned int *)(a1 + 64) );
    }
    v11 = a1 + 64;
    v12 = a1 + 80;
    while ( v11 != v12 )
    {
      if ( *(_BYTE *)(v11 + 4) )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::DeliverChainLinkEventInternal(
          *v1,
          *(_DWORD *)v11);
        v16 = 0LL;
        *(_QWORD *)v11 = 0LL;
      }
      v11 += 8LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
}
