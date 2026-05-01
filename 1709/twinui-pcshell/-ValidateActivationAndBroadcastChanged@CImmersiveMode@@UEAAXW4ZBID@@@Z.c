/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800327F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180032E3C (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r14d
  _DWORD *v6; // rcx
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 96) & -(__int64)(a1 != 96));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = *(_DWORD **)(a1 + 264);
  if ( v6 )
  {
    if ( *v6 && *v6 != a2 )
    {
      v7 = 0;
      if ( a2 != *(_DWORD *)(a1 + 160) )
        v7 = a2;
      *v6 = v7;
    }
    v8 = *(_QWORD **)(a1 + 264);
    if ( *(_DWORD *)v8 && (*(_DWORD *)(a1 + 160) = *(_DWORD *)v8) != 0 && v8[1] )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 96));
    }
    else
    {
      if ( v8 )
      {
        v9 = v8[1];
        if ( v9 )
        {
          v8[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        operator delete(v8);
      }
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
