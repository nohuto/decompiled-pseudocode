/*
 * XREFs of ?HandleChainLinkEvent@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x1801B7920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801B6A24 (-ClearNextIfMatch@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801B8DF0 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::HandleChainLinkEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ClearNextIfMatch(a1, a2);
      }
      else if ( v11 == 2 )
      {
        v12 = 0LL;
        v9 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
        AcquireSRWLockExclusive(v9);
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v12, (__int64 *)(a1 + 32));
        ++*(_DWORD *)(a1 + 40);
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        if ( v12 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 72LL))(v12, a2, a3);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
    }
    else
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::RemoveFromChainIfPreviousMatches(a1, a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
