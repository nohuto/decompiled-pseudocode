/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::Run @ 0x18014DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7eae7a1c8177dd920e080cdaffe7035f___::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (*(int (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &v4) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *(_QWORD *)(a1 + 24), 0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
