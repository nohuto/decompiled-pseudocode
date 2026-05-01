/*
 * XREFs of ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180031A34
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180033D90 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1801D0C38 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180092668 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 *     ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x180092690 (-Remove@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU-$CLinkedNode@UPendi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___ @ 0x180092F4C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_119b7ac07a3a2.c)
 *     ??$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x180093DAC (--$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  PCWSTR v6; // rcx
  __int64 v8; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  v8 = a1 + 560;
  v9[0] = 0LL;
  while ( (unsigned int)CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v8) )
  {
    if ( v9[0] == a2 )
    {
      CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove(&v8);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 568) = a2;
  --*(_QWORD *)(a1 + 552);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
    a2 + 8,
    &StringRawBuffer,
    a1 + 552);
  v11 = a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(&v11);
  v8 = a1;
  v9[0] = a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(v9);
  v4 = *(_DWORD *)(a1 + 288);
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119b7ac07a3a2ff7e5e3464a43ca6952_____lambda_119b7ac07a3a2ff7e5e3464a43ca6952___(
                    &StringRawBuffer,
                    &v8);
  v12 = *v5;
  *v5 = 0LL;
  v6 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v4);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
}
