/*
 * XREFs of ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C
 * Callers:
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x1800F6880 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FA394 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z @ 0x1800FAAC4 (-_RemovePendingActivationsForAppId@ViewEventDispatcher@@AEAAXAEBVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x1800FF23C (--$PendingActivationRemove@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___ @ 0x1800FFEB4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(__int64 a1, __int64 a2)
{
  _QWORD **v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // ebx
  IUnknown **v10; // rax
  PCWSTR v11; // rcx
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  PCWSTR StringRawBuffer; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  v4 = (_QWORD **)(a1 + 488);
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( a1 == -488 )
        break;
      v5 = *v4;
    }
    if ( !v5 )
      break;
    if ( v5 == (_QWORD *)a2 )
    {
      v6 = *v4;
      v7 = 0LL;
      while ( v6 )
      {
        if ( v6 == v5 )
        {
          v8 = (_QWORD *)*v5;
          if ( v7 )
            *v7 = v8;
          else
            *v4 = v8;
          goto LABEL_16;
        }
        v7 = v6;
        v6 = (_QWORD *)*v6;
      }
      break;
    }
  }
LABEL_16:
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = a2;
  --*(_QWORD *)(a1 + 480);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationRemove<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
    a2 + 8,
    &StringRawBuffer,
    a1 + 480);
  v16 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v13 = a1;
  v14 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v9 = *(_DWORD *)(a1 + 216);
  v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_119b7ac07a3a2ff7e5e3464a43ca6952___(
                       &StringRawBuffer,
                       &v13);
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v9, 0, *v10, 0LL);
  v11 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
}
