/*
 * XREFs of ?DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0021F20
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0025360 (-ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTI.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int8 v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_11;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
LABEL_11:
      v11 = 0;
      goto LABEL_12;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_11;
  v11 = *(_DWORD *)(v6 + 136);
LABEL_12:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v20,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *))(*((_QWORD *)this + 2)
                                                                                            + 912LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  v13 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v14[3] = 275LL;
    v14[4] = 16LL;
    v14[5] = this;
    v14[6] = CurrentIrql;
    v15 = KeGetCurrentIrql();
    v14[7] = v15;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v11 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v16[3] = 275LL;
    v16[4] = 25LL;
    v17 = *(int *)(v6 + 136);
    v16[7] = 0LL;
    v16[5] = v17;
    v16[6] = v11;
    WdLogEvent5_WdCriticalError(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 3924LL));
  if ( (_DWORD)v12 )
  {
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdError(v18);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  return (unsigned int)v12;
}
