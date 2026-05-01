/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97__&___ptr64_ @ 0x1802D9BA8
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1802DCEB0 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_382fa76d9980bbd2846dd440d3c3bc97______ptr64_(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 *a4)
{
  void *v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v4 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    *v7 = off_180348F90;
    v8 = *a4;
    v7[2] = *a4;
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v8);
    v4 = v7;
  }
  v12 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunTask(
          2u,
          0,
          CurrentThreadId,
          0x12Cu,
          (struct Windows::Internal::IComPoolTask *)v4,
          0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v12);
  return v10;
}
