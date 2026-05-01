/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::operator() @ 0x1802B1BA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::Run @ 0x1802B1FB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18018D5D8 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rcx
  void *v4; // [rsp+40h] [rbp+10h] BYREF
  __int64 v5; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0LL;
  Microsoft::WRL::AgileRef::InternalResolve(
    (Microsoft::WRL::AgileRef *)(a1 + 2),
    &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
    &v4);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)*a1 + 32LL))(*a1, a1[1], v4);
  v3 = v4;
  if ( v4 )
  {
    if ( (int)result <= -1 || (result = (unsigned int)(result - 2556504), (unsigned int)result <= 1) )
    {
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v4)(v4, &GUID_94e76fd7_6ec7_4a63_a8fb_5d5cb760b7f6, &v5) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      v3 = v4;
    }
  }
  if ( v3 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
