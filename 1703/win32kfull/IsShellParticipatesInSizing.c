/*
 * XREFs of IsShellParticipatesInSizing @ 0x1C0021CB0
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E1140 (NtUserUpdateWindowTrackingInfo.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F4560 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall IsShellParticipatesInSizing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rax

  v4 = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL), 64LL, a3, a4);
  v7 = 0;
  if ( v4 )
  {
    if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(v5, 8LL, v6, 0LL) )
    {
      v10 = *(_QWORD *)(v9 + 592);
      if ( v10 )
      {
        if ( *(_QWORD *)v10 == v8 && (*(_DWORD *)(v10 + 264) & 4) != 0 )
          return 1;
      }
    }
  }
  return v7;
}
