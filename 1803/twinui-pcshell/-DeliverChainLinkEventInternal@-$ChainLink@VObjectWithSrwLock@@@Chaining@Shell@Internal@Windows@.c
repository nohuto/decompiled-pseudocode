/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1801B6D0C
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801B81D0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?AppendToChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIUnknown@@@Z @ 0x1801BEA5C (-AppendToChainLink@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  char v5; // bp
  RTL_SRWLOCK *v6; // rbx
  __int64 *v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockExclusive(v4);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        v10 = 0LL;
        v6 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
        AcquireSRWLockExclusive(v6);
        if ( *(_BYTE *)(a1 + 57) )
        {
          if ( !v5 )
            break;
        }
        v5 = 1;
        *(_BYTE *)(a1 + 57) = 1;
        if ( !*(_BYTE *)(a1 + 56) )
          goto LABEL_20;
        *(_BYTE *)(a1 + 56) = 0;
        if ( *(_QWORD *)(a1 + 48) )
          goto LABEL_15;
        if ( !*(_QWORD *)(a1 + 32) )
          goto LABEL_20;
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_15:
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v10, (__int64 *)(a1 + 48));
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
          *(_BYTE *)(a1 + 56) = *(_QWORD *)(a1 + 32) != 0LL;
          v8 = 1;
        }
        else
        {
          v7 = Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 48), (__int64 *)(a1 + 32));
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v10, v7);
          v8 = 0;
        }
        v9 = v10;
        if ( !v10 )
        {
LABEL_20:
          *(_BYTE *)(a1 + 57) = 0;
          break;
        }
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, v9, v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      }
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    else if ( a2 == 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL);
    }
  }
}
