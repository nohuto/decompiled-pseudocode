/*
 * XREFs of ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005ACCC
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18005A7A0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1800501CC (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005A470 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180194FA4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180195084 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  char *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-29h] BYREF
  RTL_SRWLOCK v10; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+48h] [rbp-11h]
  _BYTE v12[52]; // [rsp+50h] [rbp-9h] BYREF
  char v13; // [rsp+84h] [rbp+2Bh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v10.Ptr) = 0;
  v11 = 0LL;
  `eh vector constructor iterator'(
    v12,
    0x18uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::Payload,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  v4 = 2LL;
  v5 = &v13;
  do
  {
    *v5 = 0;
    v5 += 8;
    --v4;
  }
  while ( v4 );
  ObjectWithIamLock::LockExclusive((__int64)v5, SRWLock);
  if ( !a2 || *(_QWORD *)(a1 + 24) == a2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(a1, (__int64)&v10);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v10);
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"internal\\Shell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
  }
  if ( !LODWORD(v10.Ptr) )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v10);
  `eh vector destructor iterator'(
    v12,
    0x18uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
