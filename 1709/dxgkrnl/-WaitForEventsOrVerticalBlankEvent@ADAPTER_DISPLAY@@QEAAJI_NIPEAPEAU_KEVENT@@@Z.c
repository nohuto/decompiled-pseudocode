/*
 * XREFs of ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0170098
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
        DXGADAPTER **this,
        unsigned int a2,
        char a3,
        ULONG a4,
        PVOID *Object)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  KWAIT_REASON v12; // r9d
  __int64 v14; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-1D8h] BYREF

  v8 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6330LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a4 - 1 > 8 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    return -1073741811;
  }
  else
  {
    v11 = (__int64)this[14] + 912;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(v11 + 3760 * v8);
    if ( a3 )
      v12 = UserRequest;
    else
      v12 = Executive;
    return KeWaitForMultipleObjects(a4, Object, WaitAny, v12, 0, 0, &Timeout, &WaitBlockArray);
  }
}
