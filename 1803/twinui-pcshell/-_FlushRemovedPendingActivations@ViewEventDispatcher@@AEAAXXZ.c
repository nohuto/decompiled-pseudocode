/*
 * XREFs of ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x180031860
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___::Run @ 0x180092FE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___--Run.c)
 *     ?v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801D1190 (-v_ShutdownServices@ViewEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180092668 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x180092690 (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180094F00 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewEventDispatcher::_FlushRemovedPendingActivations(ViewEventDispatcher *this)
{
  RTL_SRWLOCK *v1; // rbx
  char *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  HSTRING v5; // rcx
  _QWORD v6[6]; // [rsp+28h] [rbp-30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 296);
  v2 = (char *)this + 568;
  while ( 1 )
  {
    AcquireSRWLockExclusive(v1);
    v6[0] = v2;
    v6[1] = 0LL;
    if ( !(unsigned int)CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(v6) )
      break;
    v3 = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove(v6);
    StringRawBuffer = (PCWSTR)v3;
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    v4 = *(_QWORD *)(v3 + 24);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v3 + 16), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v3 + 8,
      &StringRawBuffer);
    if ( v3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v3 + 32));
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(v3 + 24));
      v5 = *(HSTRING *)(v3 + 16);
      if ( v5 )
        WindowsDeleteString(v5);
      operator delete((void *)v3, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
