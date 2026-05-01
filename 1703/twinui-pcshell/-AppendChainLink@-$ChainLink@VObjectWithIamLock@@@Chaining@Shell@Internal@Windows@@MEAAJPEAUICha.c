/*
 * XREFs of ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18005A660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1800501CC (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x18005A5B0 (-AppendChainLinkInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180194FA4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180195084 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLink(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  char *v6; // r8
  int appended; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-29h] BYREF
  RTL_SRWLOCK v12; // [rsp+40h] [rbp-19h] BYREF
  __int64 v13; // [rsp+48h] [rbp-11h]
  _BYTE v14[52]; // [rsp+50h] [rbp-9h] BYREF
  char v15; // [rsp+84h] [rbp+2Bh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v12.Ptr) = 0;
  v13 = 0LL;
  `eh vector constructor iterator'(
    v14,
    0x18uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::Payload,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  v5 = 2LL;
  v6 = &v15;
  do
  {
    *v6 = 0;
    v6 += 8;
    --v5;
  }
  while ( v5 );
  ObjectWithIamLock::LockExclusive(v4, SRWLock);
  appended = Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
               a1,
               a2,
               (int)&v12);
  v8 = appended;
  if ( appended >= 0 )
  {
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v12);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x100,
      (__int64)"internal\\Shell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)appended);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
  }
  if ( !LODWORD(v12.Ptr) )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v12);
  `eh vector destructor iterator'(
    v14,
    0x18uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
