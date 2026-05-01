/*
 * XREFs of ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180032540
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180031970 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180032D08 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::HandleActivation(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int64 i; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 96) & -(__int64)(a1 != 96));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  if ( *(_DWORD *)(a1 + 160) != a2 )
  {
    CImmersiveMode::_PrepareDeferredNotifications(a1 - 96, a2);
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 7;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( v8 )
        {
          if ( v8 != 2 )
            goto LABEL_11;
        }
      }
      v9 = 1;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 != *(_DWORD *)(a1 + 248) )
    {
      *(_DWORD *)(a1 + 248) = v9;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 256) + 48LL))(
        *(_QWORD *)(a1 + 256),
        (unsigned int)(v9 == 1) + 1);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 352); ++i )
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(
          *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8 * i),
          *(_DWORD *)(a1 + 248));
    }
  }
LABEL_11:
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
