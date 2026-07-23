/*
 * XREFs of sub_18005EC0C @ 0x18005EC0C
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 * Callees:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005ED80 @ 0x18005ED80 (sub_18005ED80.c)
 *     sub_18005EF74 @ 0x18005EF74 (sub_18005EF74.c)
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     sub_1800FC5C4 @ 0x1800FC5C4 (sub_1800FC5C4.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

PVOID __fastcall sub_18005EC0C(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rcx
  __int128 v6; // xmm0
  bool v7; // cf
  ULONG v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // r15
  _BOOL8 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 UserModeGlobalLogger; // rcx
  __int64 v15; // rcx
  ULONG_PTR v17[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0LL;
  BaseAddress = 0LL;
  if ( (int)sub_18005EF74(a1, &BaseAddress, &v19) < 0
    || (v5 = *(_DWORD **)(a1 + 112),
        v6 = *(_OWORD *)(a1 + 96),
        v17[0] = (unsigned int)(a2 << 12) + 0x2000LL,
        v7 = (v5[5] & 0x40000000) != 0,
        *(_OWORD *)v18 = v6,
        v8 = sub_180011A6C(v5, v7 ? 64 : 4),
        (int)sub_18001182C(&BaseAddress, v17, 0, 1073745920, v8, (__int128 *)v18, 0LL) < 0) )
  {
LABEL_22:
    if ( BaseAddress )
      sub_180062960(a1, BaseAddress, 0LL);
  }
  else
  {
    v10 = v19;
    v11 = v19 != 0x100000;
    v12 = 2 * (((unsigned __int64)BaseAddress - qword_18015D878) >> 20);
    v13 = v12 + 2 * ((unsigned __int64)v19 >> 20);
    while ( v12 < v13 )
    {
      if ( (int)sub_18005ED80(&unk_18015D838, v12, v9, v11 + 1) < 0 )
        goto LABEL_22;
      v12 += 2LL;
    }
    _InterlockedExchangeAdd64(*(volatile signed __int64 **)(a1 + 72), v10 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v17[0] >> 12);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(*(_QWORD *)(a1 + 112), BaseAddress, v17[0], 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    else
      v15 = 2147353480LL;
    if ( *(_BYTE *)v15 )
      sub_1800FC5C4(*(_QWORD *)(a1 + 112), BaseAddress, v10);
    if ( (byte_18015D028 & 8) != 0 )
      sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
    return BaseAddress;
  }
  return (PVOID)v3;
}
