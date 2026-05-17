/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x180087AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryWnfStateData @ 0x1800A7DB0 (ZwQueryWnfStateData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 */

__int64 __fastcall RtlQueryWnfStateDataWithExplicitScope(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64, __int64, __int64, _BYTE *, int),
        __int64 a5,
        __int64 a6)
{
  void *v8; // rsp
  __int64 result; // rax
  __int64 v10; // rdx
  _BYTE v11[4096]; // [rsp+20h] [rbp-1000h] BYREF
  int v12; // [rsp+1020h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1028h] [rbp+8h]
  __int64 v15; // [rsp+1030h] [rbp+10h] BYREF

  v15 = a2;
  v8 = alloca(4096LL);
  v14 = v11;
  v12 = 4096;
  result = ZwQueryWnfStateData(&v15, a6, a3, &v13, v11, &v12);
  if ( (int)result >= 0 )
  {
    v10 = v13;
    *a1 = v13;
    return a4(v15, v10, a6, a5, v11, v12);
  }
  return result;
}
