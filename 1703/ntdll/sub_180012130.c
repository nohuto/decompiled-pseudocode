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

__int64 __fastcall sub_180012130(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v27; // [rsp+60h] [rbp-78h] BYREF
  int v28; // [rsp+68h] [rbp-70h]
  _BYTE v29[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v31)(__int64); // [rsp+F0h] [rbp+18h]

  v27 = 72LL;
  v28 = 1;
  memset(v29, 0, sizeof(v29));
  v4 = 0LL;
  v12 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5, v7, v8) )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    sub_18000441C(v13, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v24 = *(_QWORD *)(a2 + 32);
    if ( !v24 )
    {
      v24 = sub_1800857E8();
      v4 = v24;
    }
    *(_QWORD *)(a1 + 128) = v24;
    TpCallbackMayRunLong(a1);
  }
  v14 = *(_QWORD *)(a2 + 40);
  if ( v14 )
    sub_18008A588();
  v31 = *(void (__fastcall **)(__int64))(a2 + 56);
  v30 = *(_QWORD *)(a2 + 64);
  v15 = *(_QWORD *)(a2 + 72);
  v16 = *(_QWORD *)(a2 + 80);
  v26[1] = v16;
  v17 = *(_QWORD *)(a2 + 96);
  v26[3] = v17;
  if ( v17 )
    RtlSetThreadSubProcessTag(v17);
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 104);
  if ( v15 != -1 )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v16 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    sub_180011B80(a2, *(_QWORD *)(a2 + 32), v10, v11);
  if ( v15 != -1 )
    RtlActivateActivationContextUnsafeFast(&v27, v15);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v9, v10, v11) )
    v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
    sub_180002FC8(0LL, a2, (__int64)v31, v30, v17);
  sub_1800169EC(v26, v31, v30, NtCurrentTeb()->SubProcessTag);
  v31(v30);
  if ( v15 != -1 )
  {
    RtlDeactivateActivationContextUnsafeFast(&v27);
    RtlReleaseActivationContext(v15);
  }
  if ( v16 )
    LdrUnloadDll(v16);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v25 = 0LL;
    ZwSetInformationThread(-2LL, 5LL, &v25);
  }
  if ( v4 )
    sub_180086D90(v4);
  if ( v17 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19, v21, v22) )
    v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v12 )
    sub_180002F48(0LL, a2, (__int64)v31, v30, v17);
  return sub_1800169B4(v26[0]);
}
