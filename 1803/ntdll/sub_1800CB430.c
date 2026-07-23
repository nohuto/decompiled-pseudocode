/*
 * XREFs of sub_1800CB430 @ 0x1800CB430
 * Callers:
 *     sub_1800CB310 @ 0x1800CB310 (sub_1800CB310.c)
 * Callees:
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_18007FDB8 @ 0x18007FDB8 (sub_18007FDB8.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D3C0C @ 0x1800D3C0C (sub_1800D3C0C.c)
 */

char *__fastcall sub_1800CB430(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, _QWORD *, char *, __int64, _QWORD),
        int *a6)
{
  int v8; // eax
  __int64 v9; // r9
  char *v10; // rbx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  char *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  const char *v15; // [rsp+48h] [rbp-8h] BYREF

  v13 = 0LL;
  sub_18007FDB8(a1, a3, a4, (__int64 *)&v15, &v12);
  v8 = sub_1800105FC(a2, v15, v12, 0, &v13);
  *a6 = v8;
  if ( v8 < 0 )
    return v13;
  if ( byte_18016F299 )
    sub_1800D3C0C(*(_QWORD *)(a1 + 48), a2[6], (_DWORD)v13, 1, (__int64)&v13);
  if ( !a5 )
    return v13;
  v9 = *(_QWORD *)(a1 + 48);
  v10 = v13;
  v14 = 0LL;
  a5(&v14, a2, v13, v9, 0LL);
  if ( v14 )
    return (char *)v14;
  return v10;
}
