/*
 * XREFs of sub_180011A40 @ 0x180011A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_180003724 @ 0x180003724 (sub_180003724.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011A40(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_180003724(v3[18], a2, v3[10], v3[11], v3[13]);
  result = sub_180016D48(Instance);
  if ( (_DWORD)result )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_180002FC8(v3[18], a2, v3[10], v3[11], v3[13]);
    sub_1800169EC(&v9, v3[10], v3[11], v3[13]);
    ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, __int64))v3[10])(Instance, v3[11]);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v5 )
      sub_180002F48(v3[18], a2, v3[10], v3[11], v3[13]);
    return sub_1800169B4(v9);
  }
  return result;
}
