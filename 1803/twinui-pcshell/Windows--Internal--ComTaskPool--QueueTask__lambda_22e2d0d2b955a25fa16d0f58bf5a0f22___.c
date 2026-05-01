/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x180128FB0
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180129650 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = (void *)-2LL;
  v5 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    *v7 = off_1803264E0;
    v7[2] = *a4;
    v5 = v7;
  }
  v10[0] = v5;
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 0, 0, 0, (struct Windows::Internal::IComPoolTask *)v5, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v8;
}
