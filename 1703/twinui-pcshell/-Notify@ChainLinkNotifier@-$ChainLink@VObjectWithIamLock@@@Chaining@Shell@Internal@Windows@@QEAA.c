/*
 * XREFs of ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28
 * Callers:
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180053610 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800571D4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x18005732C (--1-$CAutoMemPtr@VChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Win.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18005A660 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005ACCC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x18005CAE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___--Run.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1800501CC (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x18005BEE8 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005BF40 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005C02C (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(
        PSRWLOCK a1)
{
  PSRWLOCK v1; // r15
  PSRWLOCK v2; // rbx
  PSRWLOCK v3; // rdi
  PSRWLOCK v4; // rsi
  _QWORD *Ptr; // rdx
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  _QWORD *v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx
  PVOID v9; // rcx
  PSRWLOCK i; // rbx
  _BYTE *v11; // r14
  char v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rcx
  PVOID v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+40h] BYREF
  PVOID v22; // [rsp+88h] [rbp+48h] BYREF
  __int64 v23; // [rsp+90h] [rbp+50h] BYREF

  v1 = a1;
  if ( a1[1].Ptr )
  {
    v2 = a1 + 8;
    if ( &a1[2] != &a1[8] )
    {
      v3 = a1 + 3;
      do
      {
        if ( v3[-1].Ptr )
        {
          Microsoft::WRL::Details::Make<Windows::Internal::Shell::Chaining::ChainLinkEventArgs,enum Windows::Internal::Shell::Chaining::ChainLinkEventType>(
            &SRWLock,
            &v3[1]);
          v4 = SRWLock;
          if ( SRWLock )
          {
            Ptr = v1[1].Ptr;
            v22 = v3->Ptr;
            v6 = (__int64 (__fastcall ***)(_QWORD))((char *)Ptr + *(int *)(Ptr[1] + 8LL) + 8);
            v23 = (**v6)(v6);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStart<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v23,
              &v22,
              &v3[1]);
            (*(void (__fastcall **)(PVOID, PVOID, PSRWLOCK))(*(_QWORD *)v3[-1].Ptr + 72LL))(v3[-1].Ptr, v3->Ptr, v4);
            v7 = v1[1].Ptr;
            v22 = v3->Ptr;
            v8 = (__int64 (__fastcall ***)(_QWORD))((char *)v7 + *(int *)(v7[1] + 8LL) + 8);
            v23 = (**v8)(v8);
            Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::ChainLinkEventStop<char const *,Windows::Internal::Shell::Chaining::IChainLink *,enum Windows::Internal::Shell::Chaining::ChainLinkEventType &>(
              &v23,
              &v22,
              &v3[1]);
          }
          else
          {
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x2DD,
              (__int64)"internal\\Shell\\inc\\chaininghelpers.h",
              (const char *)0x8007000ELL);
          }
          v9 = v3[-1].Ptr;
          v3[-1].Ptr = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
          a1 = (PSRWLOCK)v3->Ptr;
          v3->Ptr = 0LL;
          if ( a1 )
            (*((void (__fastcall **)(PSRWLOCK))a1->Ptr + 2))(a1);
          LODWORD(v3[1].Ptr) = 0;
          if ( v4 )
          {
            SRWLock = 0LL;
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v4);
          }
        }
        v3 += 3;
      }
      while ( &v3[-1] != v2 );
    }
    for ( i = v1 + 8; i != &v1[10]; ++i )
    {
      if ( BYTE4(i->Ptr) )
      {
        v11 = v1[1].Ptr;
        if ( SLODWORD(i->Ptr) >= 0 )
        {
          if ( SLODWORD(i->Ptr) <= 1 )
          {
            v12 = 0;
            while ( 1 )
            {
              v13 = 0LL;
              ObjectWithIamLock::LockExclusive((__int64)a1, &SRWLock);
              if ( v11[49] )
              {
                if ( !v12 )
                  break;
              }
              v12 = 1;
              v11[49] = 1;
              if ( !v11[48] )
                goto LABEL_40;
              v14 = *((_QWORD *)v11 + 5);
              v11[48] = 0;
              if ( v14 )
              {
                v13 = v14;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
                v18 = *((_QWORD *)v11 + 5);
                if ( v18 )
                {
                  *((_QWORD *)v11 + 5) = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                }
                v17 = 1;
                v11[48] = *((_QWORD *)v11 + 3) != 0LL;
              }
              else
              {
                if ( !*((_QWORD *)v11 + 3) )
                  goto LABEL_40;
                v15 = *((_QWORD *)v11 + 3);
                if ( v15 )
                {
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*((_QWORD *)v11 + 3));
                  v16 = *((_QWORD *)v11 + 5);
                  *((_QWORD *)v11 + 5) = v15;
                  if ( v16 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                }
                if ( *((_QWORD *)v11 + 5) )
                {
                  v13 = *((_QWORD *)v11 + 5);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
                }
                v17 = 0;
              }
              if ( !v13 )
              {
LABEL_40:
                v11[49] = 0;
                break;
              }
              if ( SRWLock )
                ReleaseSRWLockExclusive(SRWLock);
              (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 80LL))(v11, v13, v17);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
            a1 = SRWLock;
            if ( SRWLock )
              ReleaseSRWLockExclusive(SRWLock);
          }
          else if ( LODWORD(i->Ptr) == 2 )
          {
            (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)v11 + 80LL))(v1[1].Ptr, 0LL, 2LL);
          }
        }
        v22 = 0LL;
        i->Ptr = 0LL;
      }
    }
    v19 = v1[1].Ptr;
    if ( v19 )
    {
      v1[1].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
}
