/*
 * XREFs of sub_180012130 @ 0x180012130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_18000441C @ 0x18000441C (sub_18000441C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlSetThreadSubProcessTag @ 0x180017240 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180078F20 (TpCallbackMayRunLong.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180012130(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _ACTIVATION_CONTEXT *v10; // rdi
  void *v11; // r12
  void *v12; // r15
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 ThreadInformation; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h] BYREF
  int v19; // [rsp+68h] [rbp-70h]
  _BYTE v20[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v22)(__int64); // [rsp+F0h] [rbp+18h]

  v18 = 72LL;
  v19 = 1;
  memset(v20, 0, sizeof(v20));
  v4 = 0LL;
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_18000441C(v8, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 32);
    if ( !v15 )
    {
      v15 = sub_1800857E8();
      v4 = v15;
    }
    *((_QWORD *)Instance + 16) = v15;
    TpCallbackMayRunLong(Instance);
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    sub_18008A588(v9, v5, v6);
  v22 = *(void (__fastcall **)(__int64))(a2 + 56);
  v21 = *(_QWORD *)(a2 + 64);
  v10 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v11 = *(void **)(a2 + 80);
  v17[1] = v11;
  v12 = *(void **)(a2 + 96);
  v17[3] = v12;
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(GUID *)(a2 + 104);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    sub_180011B80(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast(&v18, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    sub_180002FC8(0LL, a2, (__int64)v22, v21, (__int64)v12);
  sub_1800169EC(v17, v22, v21, NtCurrentTeb()->SubProcessTag);
  v22(v21);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast(&v18);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v4 )
    sub_180086D90(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v7 )
    sub_180002F48(0LL, a2, (__int64)v22, v21, (__int64)v12);
  return sub_1800169B4(v17[0]);
}
