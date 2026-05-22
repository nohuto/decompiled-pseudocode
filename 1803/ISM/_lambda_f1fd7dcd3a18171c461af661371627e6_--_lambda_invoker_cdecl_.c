/*
 * XREFs of _lambda_f1fd7dcd3a18171c461af661371627e6_::_lambda_invoker_cdecl_ @ 0x180044E40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000317C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180045254 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_f1fd7dcd3a18171c461af661371627e6_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned __int8 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  LSTATUS v5; // eax
  __int64 v6; // rcx
  BOOL v7; // ebx
  struct _TP_WAIT *v8; // rcx
  unsigned int v9; // edx
  DWORD LastError; // ebx
  unsigned __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL v13; // [rsp+48h] [rbp+10h] BYREF

  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 35) > 1 )
  {
    v5 = RegNotifyChangeKeyValue(*((HKEY *)Context + 14), Context[136], 0x10000005u, *((HANDLE *)Context + 15), 1);
    if ( v5 && v5 != 1018 && v5 != 5 )
    {
      v11 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v11 = (unsigned int)v5;
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"internal\\sdk\\inc\\wil\\registry.h",
        (const char *)v11);
      __debugbreak();
    }
    v6 = *((_QWORD *)Context + 13);
    v7 = v5 == 1018;
    v13 = v7;
    if ( !v6 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    (*(void (__fastcall **)(__int64, BOOL *))(*(_QWORD *)v6 + 16LL))(v6, &v13);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 18);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 35, 0xFFFFFFFF) == 1 )
    {
      v8 = (struct _TP_WAIT *)*((_QWORD *)Context + 16);
      *((_QWORD *)Context + 16) = 0LL;
      CloseThreadpoolWait(v8);
      if ( Context != (unsigned __int8 *)-144LL )
      {
        LastError = GetLastError();
        ReleaseSRWLockExclusive((PSRWLOCK)Context + 18);
        SetLastError(LastError);
      }
      wil::details::registry_watcher_state::`scalar deleting destructor'(
        (wil::details::registry_watcher_state *)Context,
        v9);
    }
    else
    {
      if ( !v7 )
        SetThreadpoolWait(*((PTP_WAIT *)Context + 16), *((HANDLE *)Context + 15), 0LL);
      if ( Context != (unsigned __int8 *)-144LL )
        ReleaseSRWLockExclusive((PSRWLOCK)Context + 18);
    }
  }
}
