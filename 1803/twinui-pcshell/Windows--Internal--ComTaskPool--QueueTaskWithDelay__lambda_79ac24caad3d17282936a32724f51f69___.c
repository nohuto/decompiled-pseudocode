/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___ @ 0x1801BF820
 * Callers:
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1801C48D4 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_79ac24caad3d17282936a32724f51f69___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4)
{
  void *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx
  void *v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = (void *)-2LL;
  v6 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    *(_QWORD *)v8 = off_180331858;
    v8[4] = *a4;
    v6 = v8;
  }
  v12[0] = v6;
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunTask(
          3u,
          0,
          CurrentThreadId,
          0x1388u,
          (struct Windows::Internal::IComPoolTask *)v6,
          a3);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v12);
  return v10;
}
