/*
 * XREFs of sub_180046810 @ 0x180046810
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     sub_180002AEC @ 0x180002AEC (sub_180002AEC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     TpCallbackMayRunLong @ 0x180048500 (TpCallbackMayRunLong.c)
 *     sub_18004865C @ 0x18004865C (sub_18004865C.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_180046810(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // r12
  void *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v16[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h] BYREF
  int v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v21)(__int64); // [rsp+F0h] [rbp+18h]

  v17 = 72LL;
  v18 = 1;
  memset(v19, 0, sizeof(v19));
  v4 = 0LL;
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_180002AEC(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( !v14 )
    {
      v14 = sub_18004865C();
      v4 = v14;
    }
    *(_QWORD *)(a1 + 128) = v14;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    sub_180076128();
  v21 = *(void (__fastcall **)(__int64))(a2 + 56);
  v20 = *(_QWORD *)(a2 + 64);
  v7 = *(volatile signed __int32 **)(a2 + 72);
  v8 = *(_QWORD *)(a2 + 80);
  v16[1] = v8;
  v9 = *(void **)(a2 + 96);
  v16[3] = (__int64)v9;
  if ( v9 )
    RtlSetThreadSubProcessTag(v9);
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 104);
  if ( v7 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v8 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    sub_180047030(a2, *(_QWORD *)(a2 + 32));
  if ( v7 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v17, (__int64)v7);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    sub_180001FD0(0LL, a2, (__int64)v21, v20, (__int64)v9);
  sub_18002567C(v16, (__int64)v21, v20, (__int64)NtCurrentTeb()->SubProcessTag);
  v21(v20);
  if ( v7 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v17);
    RtlReleaseActivationContext(v7);
  }
  if ( v8 )
    LdrUnloadDll(v8, v11, v12, v13);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v15 = 0LL;
    ZwSetInformationThread(-2LL, 5LL, &v15);
  }
  if ( v4 )
    sub_1800484B8(v4);
  if ( v9 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v5 )
    sub_180002050(0LL, a2, (__int64)v21, v20, (__int64)v9);
  sub_180025644(v16[0]);
}
