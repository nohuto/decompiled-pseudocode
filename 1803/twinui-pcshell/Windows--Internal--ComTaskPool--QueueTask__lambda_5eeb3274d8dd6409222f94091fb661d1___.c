/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___ @ 0x1801E2BEC
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18005AFF0 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1_____lambda_5eeb3274d8dd6409222f94091fb661d1___ @ 0x1801E2A8C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[1] = (void *)-2LL;
  v6 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1_____lambda_5eeb3274d8dd6409222f94091fb661d1___(
           v7,
           a4);
  v10[0] = v6;
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, a3, 0, (struct Windows::Internal::IComPoolTask *)v6, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(v10);
  return v8;
}
