/*
 * XREFs of _lambda_fc741a4743938d06b405cea5fdae9784_::operator() @ 0x18011B1C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x18011B850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180005638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ @ 0x18011B75C (-RotationManagerSuppressionTimeout@CAppManagerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fc741a4743938d06b405cea5fdae9784_::operator()(HANDLE *a1)
{
  void *v2; // rbx
  void *v3; // rdi
  _QWORD *v4; // rsi
  void *v5; // rax
  signed int v6; // eax
  HANDLE v8; // [rsp+40h] [rbp+8h] BYREF

  if ( WaitForSingleObject(a1[1], 0x1B7740u) == 258 )
    CAppManagerTelemetry::RotationManagerSuppressionTimeout();
  v8 = *a1;
  v2 = v8;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
  v3 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v2;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v4);
    v4[2] = 0LL;
    v5 = v2;
    if ( v4 + 2 != &v8 )
    {
      v4[2] = v2;
      v2 = 0LL;
      v5 = 0LL;
    }
    *v4 = off_1803258C0;
    v3 = v4;
  }
  v8 = v3;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)*a1 + 18) + 72LL))(
           *((_QWORD *)*a1 + 18),
           v3,
           0LL);
  if ( v6 < 0 )
    *((_BYTE *)*a1 + 128) = 0;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v8);
}
