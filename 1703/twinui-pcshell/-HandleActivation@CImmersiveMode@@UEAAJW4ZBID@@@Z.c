/*
 * XREFs of ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180030D80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180030200 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800314C8 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::HandleActivation(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 i; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 72) >> 64)));
  if ( *(_DWORD *)(a1 + 128) != a2 )
  {
    CImmersiveMode::_PrepareDeferredNotifications(a1 - 72, a2);
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 7;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 2 )
            goto LABEL_11;
        }
      }
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 != *(_DWORD *)(a1 + 216) )
    {
      *(_DWORD *)(a1 + 216) = v7;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 224) + 48LL))(
        *(_QWORD *)(a1 + 224),
        (unsigned int)(v7 == 1) + 1);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 320); ++i )
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(
          *(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * i),
          *(_DWORD *)(a1 + 216));
    }
  }
LABEL_11:
  if ( v11 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
