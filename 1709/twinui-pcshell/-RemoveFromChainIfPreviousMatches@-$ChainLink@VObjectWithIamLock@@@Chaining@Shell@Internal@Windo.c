/*
 * XREFs of ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D6AC
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18005D150 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18005C718 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005CE04 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801E3068 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801E3140 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  char *v5; // rcx
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h]
  _BYTE v12[52]; // [rsp+40h] [rbp-68h] BYREF
  char v13; // [rsp+74h] [rbp-34h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  LODWORD(v10) = 0;
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
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !a2 || *(_QWORD *)(a1 + 32) == a2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(a1, (__int64)&v10);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v10);
    v7 = 0;
  }
  else
  {
    v7 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
  if ( !(_DWORD)v10 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(&v10);
  `eh vector destructor iterator'(
    v12,
    0x18uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
