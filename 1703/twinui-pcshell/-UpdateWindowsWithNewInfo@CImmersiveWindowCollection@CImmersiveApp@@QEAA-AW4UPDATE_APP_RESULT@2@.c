/*
 * XREFs of ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800582E8
 * Callers:
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180057020 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059790 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // ecx
  RECT rcSrc; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(_QWORD, RECT *))(**(_QWORD **)(a1 + 136) + 120LL))(*(_QWORD *)(a1 + 136), &rcSrc) >= 0 )
    CopyRect((LPRECT)(a1 + 16), &rcSrc);
  if ( a2 )
  {
    *(_OWORD *)(a1 + 68) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 100) = *(_QWORD *)(a2 + 32);
  }
  v6 = 2;
  if ( *(_QWORD *)(a1 + 160) && (a3 & 1) != 0 )
    return (unsigned int)CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1) == 1;
  return v6;
}
