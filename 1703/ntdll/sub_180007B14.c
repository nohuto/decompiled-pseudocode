/*
 * XREFs of sub_180007B14 @ 0x180007B14
 * Callers:
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 * Callees:
 *     sub_180007900 @ 0x180007900 (sub_180007900.c)
 *     sub_180007A70 @ 0x180007A70 (sub_180007A70.c)
 *     sub_180058A20 @ 0x180058A20 (sub_180058A20.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall sub_180007B14(__int64 a1, unsigned int a2)
{
  signed __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  signed __int64 v9; // rbp

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 8) && (unsigned __int8)sub_180058A20(a1, a2) )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3);
  if ( !v2 )
  {
    if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 60) )
      return 0LL;
    v5 = *(unsigned int *)(a1 + 56);
    v6 = 4 * (unsigned int)((unsigned __int64)(v5 + 31) >> 5) + 24;
    v7 = *(_DWORD *)(a1 + 68);
    if ( v7 )
      v6 = (unsigned int)(v5 * v7 + v6);
    v8 = (*(__int64 (__fastcall **)(__int64))(a1 + 32))(v6);
    v9 = v8;
    if ( !v8 )
      return 0LL;
    sub_180007A70(a1, v8);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 48)) > *(_DWORD *)(a1 + 60) )
    {
      v2 = 0LL;
      if ( *(_QWORD *)(a1 + 8) && (unsigned __int8)sub_180058A20(a1, (unsigned int)v3) )
        v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3);
    }
    else if ( (unsigned __int8)sub_180058A20(a1, (unsigned int)v3) || (int)sub_180007900(a1, v3) >= 0 )
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v3), v9, 0LL);
      if ( !v2 )
        return v9;
    }
    else
    {
      v2 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
    (*(void (__fastcall **)(signed __int64))(a1 + 40))(v9);
  }
  return v2;
}
