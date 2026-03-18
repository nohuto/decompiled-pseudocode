/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C01C6E98
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003EF40 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C003F4D0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01C7A04 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_xqq @ 0x1C0041540 (Template_xqq.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  int updated; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 416);
    v13 = *(_DWORD *)(a1 + 408);
    Template_xqq(a1, a2, a3, *(_QWORD *)(a1 + 96), v13, v14);
  }
  if ( !*(_QWORD *)(a1 + 592) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x214uLL, 0x74727044u);
    *(_QWORD *)(a1 + 592) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = WdLogNewEntry5_WdLowResource(v5);
      LODWORD(v7) = -1073741801;
      *(_QWORD *)(v6 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v6);
      return (unsigned int)v7;
    }
    *PoolWithTag = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 524LL) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *(_DWORD *)(a1 + 416);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v7 = updated;
  if ( updated < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = v7;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v7;
}
