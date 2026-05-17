/*
 * XREFs of sub_180004F9C @ 0x180004F9C
 * Callers:
 *     sub_180004ED8 @ 0x180004ED8 (sub_180004ED8.c)
 * Callees:
 *     sub_18003076C @ 0x18003076C (sub_18003076C.c)
 *     sub_1800846A8 @ 0x1800846A8 (sub_1800846A8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800DA4EC @ 0x1800DA4EC (sub_1800DA4EC.c)
 */

__int64 __fastcall sub_180004F9C(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        void (__fastcall *a5)(__int64 *, __int64, __int64, __int64, _QWORD),
        int *a6)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // r9
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF

  v13 = 0LL;
  sub_1800846A8(a1, a3, a4, (unsigned int)&v15, (__int64)&v12);
  v8 = sub_18003076C(a2, v15, v12, 0, (__int64)&v13);
  *a6 = v8;
  if ( v8 < 0 )
    return v13;
  if ( byte_18016B280 )
    sub_1800DA4EC(*(_QWORD *)(a1 + 48), *(_QWORD *)(a2 + 48), v13, 1, (__int64)&v13);
  if ( !a5 )
    return v13;
  v11 = *(_QWORD *)(a1 + 48);
  v9 = v13;
  v14 = 0LL;
  a5(&v14, a2, v13, v11, 0LL);
  if ( v14 )
    return v14;
  return v9;
}
