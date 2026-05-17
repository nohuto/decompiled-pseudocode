/*
 * XREFs of sub_180011380 @ 0x180011380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011380(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct _TEB *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 )
      sub_18008A588();
    v7 = NtCurrentTeb();
    v8 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
      sub_180002FC8(0LL, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
    sub_1800169EC(&v15, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v7->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v14 = 0LL;
      ZwSetInformationThread(-2LL, 5LL, &v14);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
      v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v8 )
      sub_180002F48(0LL, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v7->SubProcessTag);
    return sub_1800169B4(v15);
  }
  return result;
}
