/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180030FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800315E0 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  _DWORD *v4; // rcx
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 72) >> 64)));
  v4 = *(_DWORD **)(a1 + 232);
  if ( v4 )
  {
    if ( *v4 && *v4 != a2 )
    {
      v5 = 0;
      if ( a2 != *(_DWORD *)(a1 + 128) )
        v5 = a2;
      *v4 = v5;
    }
    v6 = *(_QWORD **)(a1 + 232);
    if ( *(_DWORD *)v6 )
      *(_DWORD *)(a1 + 128) = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 && v6[1] )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 72));
    }
    else
    {
      if ( v6 )
      {
        v7 = v6[1];
        if ( v7 )
        {
          v6[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        operator delete(v6);
      }
      *(_QWORD *)(a1 + 232) = 0LL;
    }
  }
  if ( v9 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
