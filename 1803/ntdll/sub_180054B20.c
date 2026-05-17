/*
 * XREFs of sub_180054B20 @ 0x180054B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180025A28 @ 0x180025A28 (sub_180025A28.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180054B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = a2 + 128;
  sub_180055584(a2 + 128, 1LL);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    if ( !v11 )
    {
LABEL_3:
      sub_180025A28(a1, v5);
      v12 = 2147353478LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
      else
        v13 = 2147353478LL;
      if ( *(_BYTE *)v13 )
        sub_180001FD0(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      sub_18002567C(&v15, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v14;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
      if ( *(_BYTE *)v12 )
        sub_180002050(*(_QWORD *)(a2 + 216), a2, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      sub_180025644(v15);
      return;
    }
    if ( (int)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v11;
      goto LABEL_3;
    }
  }
  sub_180055584(v9, 0xFFFFFFFFLL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
