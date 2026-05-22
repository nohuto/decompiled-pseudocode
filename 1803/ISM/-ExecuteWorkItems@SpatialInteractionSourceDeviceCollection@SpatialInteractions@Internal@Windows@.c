/*
 * XREFs of ?ExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800A65F8
 * Callers:
 *     ?StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A65F0 (-StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::ExecuteWorkItems(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rbp
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbp
  volatile signed __int32 *v8; // r14
  __int64 v10; // rax
  __int64 v11; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 480);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_BYTE *)this + 520) || !*((_QWORD *)this + 70) )
      break;
    v3 = *((_QWORD *)this + 69);
    v4 = (_QWORD *)*((_QWORD *)this + 66);
    if ( v4 )
      v4 = (_QWORD *)*v4;
    v5 = *(__int64 **)(v4[1] + 8 * (v3 & (v4[2] - 1LL)));
    v6 = (volatile signed __int32 *)v5[1];
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = (volatile signed __int32 *)v5[1];
      v3 = *((_QWORD *)this + 69);
    }
    v7 = *v5;
    v8 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 67) + 8 * (v3 & (*((_QWORD *)this + 68) - 1LL)))
                                     + 8LL);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( (*((_QWORD *)this + 70))-- == 1LL )
      v10 = 0LL;
    else
      v10 = *((_QWORD *)this + 69) + 1LL;
    *((_QWORD *)this + 69) = v10;
    if ( v2 )
      LeaveCriticalSection(v2);
    v11 = *(_QWORD *)(v7 + 72);
    if ( !v11 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800A67D2LL);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v7);
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
