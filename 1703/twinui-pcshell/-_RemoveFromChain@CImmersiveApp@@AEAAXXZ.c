/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800571D4
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180055160 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180059D28 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005A470 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___ @ 0x18005C720 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180194FA4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180195084 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rax
  _BYTE *v5; // rcx
  IUnknown *v6; // rdi
  DWORD CurrentThreadId; // eax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  char *v12; // [rsp+78h] [rbp+10h] BYREF
  char *v13; // [rsp+80h] [rbp+18h]

  if ( *((_QWORD *)this + 20) )
  {
    v2 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v2;
    if ( v2 )
    {
      *(_DWORD *)v2 = 0;
      *((_QWORD *)v2 + 1) = 0LL;
      `eh vector constructor iterator'(
        v2 + 16,
        0x18uLL,
        2uLL,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::Payload,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
      v4 = 2LL;
      v5 = v3 + 68;
      do
      {
        *v5 = 0;
        v5 += 8;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v3 = 0LL;
    }
    v13 = v3;
    if ( v3 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal((char *)this + 144, v3);
      *(_DWORD *)v3 = 1;
      v12 = v3;
      v6 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e5f0854e2d49c9821f8031fdfacb73ef___(
                           &v11,
                           &v12);
      CurrentThreadId = GetCurrentThreadId();
      v8 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v6, 0LL);
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v8 >= 0 )
        v3 = 0LL;
    }
    if ( v3 )
    {
      if ( !*(_DWORD *)v3 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(v3);
      `eh vector destructor iterator'(
        v3 + 16,
        0x18uLL,
        2uLL,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
      v10 = *((_QWORD *)v3 + 1);
      if ( v10 )
      {
        *((_QWORD *)v3 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      operator delete(v3);
    }
  }
}
