/*
 * XREFs of RtlpTpWorkCallback @ 0x180010840
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     RtlTpETWCallbackDequeue @ 0x1800020D0 (RtlTpETWCallbackDequeue.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18000F400 (RtlSetThreadSubProcessTag.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     RtlpTpWorkUnposted @ 0x180010F90 (RtlpTpWorkUnposted.c)
 *     TpCallbackMayRunLong @ 0x1800133F0 (TpCallbackMayRunLong.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180013550 (TpPoolReferenceExistingGlobalPool.c)
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002EE40 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180088908 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r12
  void *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v21[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+60h] [rbp-78h] BYREF
  int v23; // [rsp+68h] [rbp-70h]
  _BYTE v24[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v26)(__int64); // [rsp+F0h] [rbp+18h]

  v22 = 72LL;
  v23 = 1;
  memset(v24, 0, sizeof(v24));
  v4 = 0LL;
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5) )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlTpETWCallbackDequeue(v9, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v19 = *(_QWORD *)(a2 + 32);
    if ( !v19 )
    {
      v19 = TpPoolReferenceExistingGlobalPool();
      v4 = v19;
    }
    *(_QWORD *)(a1 + 128) = v19;
    TpCallbackMayRunLong(a1);
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 )
    RtlpTpImpersonate();
  v26 = *(void (__fastcall **)(__int64))(a2 + 56);
  v25 = *(_QWORD *)(a2 + 64);
  v11 = *(_QWORD *)(a2 + 72);
  v12 = *(_QWORD *)(a2 + 80);
  v21[1] = v12;
  v13 = *(void **)(a2 + 96);
  v21[3] = (__int64)v13;
  if ( v13 )
    RtlSetThreadSubProcessTag(v13);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v11 != -1 )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v12 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v11 != -1 )
    RtlActivateActivationContextUnsafeFast(&v22, v11);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v7) )
    v14 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v14 = 2147353478LL;
  if ( *(_BYTE *)v14 )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v26, v25, (__int64)v13);
  TppStartThreadData(v21, (__int64)v26, v25, (__int64)NtCurrentTeb()->SubProcessTag);
  v26(v25);
  if ( v11 != -1 )
  {
    RtlDeactivateActivationContextUnsafeFast(&v22);
    RtlReleaseActivationContext(v11);
  }
  if ( v12 )
    LdrUnloadDll(v12, v15, v17, v18);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v20 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v20);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v13 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v26, v25, (__int64)v13);
  TppCompleteThreadData(v21[0]);
}
