/*
 * XREFs of ?ExecuteWorkItems@ButtonProcessor@@AEAAXXZ @ 0x180091C28
 * Callers:
 *     ?StaticExecuteWorkItems@ButtonProcessor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180091C20 (-StaticExecuteWorkItems@ButtonProcessor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ButtonProcessor::ExecuteWorkItems(ButtonProcessor *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 112) || !*((_QWORD *)this + 19) )
      break;
    v3 = *((_QWORD *)this + 18);
    v4 = (_QWORD *)*((_QWORD *)this + 15);
    if ( v4 )
      v4 = (_QWORD *)*v4;
    v5 = *(__int64 **)(v4[1] + 8 * (v3 & (v4[2] - 1LL)));
    v6 = (volatile signed __int32 *)v5[1];
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = (volatile signed __int32 *)v5[1];
      v3 = *((_QWORD *)this + 18);
    }
    v11 = *v5;
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * (v3 & (*((_QWORD *)this + 17) - 1LL)))
                                     + 8LL);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    if ( (*((_QWORD *)this + 19))-- == 1LL )
      v9 = 0LL;
    else
      v9 = *((_QWORD *)this + 18) + 1LL;
    *((_QWORD *)this + 18) = v9;
    if ( v2 )
      LeaveCriticalSection(v2);
    v10 = *(_QWORD *)(v11 + 56);
    if ( !v10 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180091DECLL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
