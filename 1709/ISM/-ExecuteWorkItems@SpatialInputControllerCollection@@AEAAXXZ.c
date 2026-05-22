/*
 * XREFs of ?ExecuteWorkItems@SpatialInputControllerCollection@@AEAAXXZ @ 0x180096018
 * Callers:
 *     ?StaticExecuteWorkItems@SpatialInputControllerCollection@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180096010 (-StaticExecuteWorkItems@SpatialInputControllerCollection@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInputControllerCollection::ExecuteWorkItems(SpatialInputControllerCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rcx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rbp
  volatile signed __int32 *v7; // r14
  __int64 v9; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 3216);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 3256) || !*((_QWORD *)this + 412) )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 408);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int64 **)(v3[1] + 8 * (*((_QWORD *)this + 411) & (v3[2] - 1LL)));
    v5 = (volatile signed __int32 *)v4[1];
    v6 = *v4;
    if ( v5 )
      _InterlockedIncrement(v5 + 2);
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 409)
                                                 + 8 * (*((_QWORD *)this + 411) & (*((_QWORD *)this + 410) - 1LL)))
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
    if ( (*((_QWORD *)this + 412))-- == 1LL )
      *((_QWORD *)this + 411) = 0LL;
    else
      ++*((_QWORD *)this + 411);
    if ( v2 )
      LeaveCriticalSection(v2);
    v9 = *(_QWORD *)(v6 + 72);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v6);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
