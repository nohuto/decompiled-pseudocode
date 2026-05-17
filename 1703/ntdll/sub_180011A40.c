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

__int64 __fastcall sub_180011A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v5 = (__int64 *)(a2 - 200);
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_180003724(v5[18], a2, v5[10], v5[11], v5[13]);
  result = sub_180016D48(a1, v5, 1LL);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      sub_180002FC8(v5[18], a2, v5[10], v5[11], v5[13]);
    sub_1800169EC(&v19, v5[10], v5[11], v5[13]);
    ((void (__fastcall *)(__int64, __int64))v5[10])(a1, v5[11]);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v7 )
      sub_180002F48(v5[18], a2, v5[10], v5[11], v5[13]);
    return sub_1800169B4(v19);
  }
  return result;
}
