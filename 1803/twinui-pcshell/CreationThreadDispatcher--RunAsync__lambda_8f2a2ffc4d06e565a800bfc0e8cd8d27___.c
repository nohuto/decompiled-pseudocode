/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x18018CD60
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x18018D3D0 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___ @ 0x18018C840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___--CTaskW.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019E400 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18019F5EC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(
        __int64 a1,
        int *a2,
        unsigned int a3)
{
  __int64 v5; // r10
  void *v6; // rbx
  void *v7; // rax
  unsigned int v8; // ebx
  std::_Ref_count_base *v9; // rcx
  int v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  void *v15; // [rsp+90h] [rbp+30h] BYREF
  int *v16; // [rsp+98h] [rbp+38h]
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a2;
  v5 = a1;
  v17 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(a1);
  v11 = *a2;
  v12 = *((_QWORD *)a2 + 1);
  v13 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v14 = v5;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(v5);
  v6 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = (void *)Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___(
                   (__int64)v7,
                   (__int64)&v11);
  v15 = v6;
  v8 = Windows::Internal::ComTaskPool::RunTask(
         3u,
         a3 != 0 ? 2 : 0,
         a3,
         0,
         (struct Windows::Internal::IComPoolTask *)v6,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v14);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v17);
  v9 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v8;
}
