/*
 * XREFs of sub_180014660 @ 0x180014660
 * Callers:
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_180088940 @ 0x180088940 (sub_180088940.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     sub_180016A78 @ 0x180016A78 (sub_180016A78.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014660(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64); // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = sub_180016D48(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    sub_180016A78(a1, a2);
LABEL_4:
    v11 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v9, v10) )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      sub_180002FC8(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    sub_1800169EC(&v20, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 80);
    v14 = *(_QWORD *)(a2 + 88);
    if ( v13 == sub_1800132E0 )
      sub_1800132E0(a1, v14, a2, a3);
    else
      v13(a1, v14, a2, a3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v11 )
      sub_180002F48(*(_QWORD *)(a2 + 144), a2 + 392, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    return sub_1800169B4(v20);
  }
  if ( (int)LdrAddRefDll(0LL) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v6;
    goto LABEL_3;
  }
  sub_18007358C(a2 + 56, 0xFFFFFFFFLL, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
