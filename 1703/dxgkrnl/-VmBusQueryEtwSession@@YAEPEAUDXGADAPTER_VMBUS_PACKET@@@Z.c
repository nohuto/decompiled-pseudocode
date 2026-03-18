/*
 * XREFs of ?VmBusQueryEtwSession@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_j @ 0x1C0034148 (Template_j.c)
 */

unsigned __int8 __fastcall VmBusQueryEtwSession(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v8; // rax
  UUID v9; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v9.Data1 = 0LL;
  *(_QWORD *)v9.Data4 = 0LL;
  v2 = ExUuidCreate(&v9);
  v6 = v2;
  if ( v2 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v8 + 24) = v6;
    WdLogEvent5_WdError(v8);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_j(v4, &EventVGPUHostGenerateSessionId, v5, &v9);
    VmbChannelPacketComplete(*((_QWORD *)a1 + 8), &v9, 16LL);
    return 1;
  }
}
