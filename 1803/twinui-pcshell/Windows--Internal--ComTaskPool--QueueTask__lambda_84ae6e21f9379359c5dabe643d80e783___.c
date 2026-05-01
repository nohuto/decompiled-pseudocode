/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_84ae6e21f9379359c5dabe643d80e783___ @ 0x1801EF2AC
 * Callers:
 *     ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801F4670 (-WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_84ae6e21f9379359c5dabe643d80e783___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4)
{
  void *v6; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  unsigned int v9; // ebx
  void *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[1] = (void *)-2LL;
  v6 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    *(_QWORD *)v8 = off_180336390;
    v8[1] = *a4;
    v8[2] = a4[1];
    v6 = v8;
  }
  v11[0] = v6;
  v9 = Windows::Internal::ComTaskPool::RunTask(6u, 0x20u, a3, 0, (struct Windows::Internal::IComPoolTask *)v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v11);
  return v9;
}
