/*
 * XREFs of ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18005A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1800501CC (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005AB94 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005ACCC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::HandleChainLinkEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rbx
  PSRWLOCK SRWLock[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(a1, a2);
      }
      else if ( v12 == 2 )
      {
        v9 = 0LL;
        v13 = 0LL;
        ObjectWithIamLock::LockExclusive((unsigned int)(v12 - 1), SRWLock);
        if ( *(_QWORD *)(a1 + 24) )
        {
          v9 = *(_QWORD *)(a1 + 24);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v13 = v9;
        }
        ++*(_DWORD *)(a1 + 32);
        if ( SRWLock[0] )
          ReleaseSRWLockExclusive(SRWLock[0]);
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2, a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    else
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(a1, a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCD,
      (__int64)"internal\\Shell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
