/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4961db4a7d0ddaf4082e4af01c6297c2__&___ptr64_ @ 0x18009C9D0
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003CBD0 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4961db4a7d0ddaf4082e4af01c6297c2______ptr64_(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx
  __int64 *v9; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = (__int64)off_18031EAE0;
    v5[2] = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5 + 2);
    v3 = v5;
  }
  v9 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(
         3u,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v3,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v9);
  return v7;
}
