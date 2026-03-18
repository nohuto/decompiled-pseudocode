/*
 * XREFs of PopPluginRequestDeviceIdleConstraints @ 0x14024012C
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140245DBC (PopDiagTraceFxDeviceIdleConstraints.c)
 */

char __fastcall PopPluginRequestDeviceIdleConstraints(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 == PopFxProcessorPlugin )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v10[1] = a2;
    v10[0] = v8;
    v11 = a3;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v5 + 96))(26LL, v10);
    if ( v4 )
      PopDiagTraceFxDeviceIdleConstraints(a1, a2, a3);
  }
  return v4;
}
