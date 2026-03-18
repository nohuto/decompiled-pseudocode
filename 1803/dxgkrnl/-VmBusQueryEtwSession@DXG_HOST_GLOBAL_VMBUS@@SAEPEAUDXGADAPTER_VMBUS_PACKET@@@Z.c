/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0181330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0j @ 0x1C002DF80 (McTemplateK0j.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  UUID v8; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v8.Data1 = 0LL;
  *(_QWORD *)v8.Data4 = 0LL;
  v2 = ExUuidCreate(&v8);
  v5 = v2;
  if ( v2 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdError(v7);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v3, &EventVGPUHostGenerateSessionId, v4, (__int64)&v8);
    VmbChannelPacketComplete(*((_QWORD *)a1 + 8), &v8, 16LL);
    return 1;
  }
}
