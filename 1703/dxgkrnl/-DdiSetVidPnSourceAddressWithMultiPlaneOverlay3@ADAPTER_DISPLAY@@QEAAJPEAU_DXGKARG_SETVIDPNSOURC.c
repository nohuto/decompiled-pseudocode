/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0024A8C
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0034270 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DX.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v7; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  v7 = KeGetCurrentIrql();
  v8 = 0LL;
  if ( v7 >= 2u )
    goto LABEL_12;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_12:
      v13 = 0;
      goto LABEL_13;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_12;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_13:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))(*((_QWORD *)this + 2) + 904LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( v7 != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = v7;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v19[3] = 275LL;
    v19[4] = 25LL;
    v20 = *(int *)(v8 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v13;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3892LL));
  if ( (_DWORD)v15 != -1073741267 && (_DWORD)v15 )
  {
    v21 = WdLogNewEntry5_WdError(v16, v14);
    *(_QWORD *)(v21 + 24) = v15;
    WdLogEvent5_WdError(v21);
  }
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return (unsigned int)v15;
}
