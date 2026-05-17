/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800F2DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 *     sub_180072F58 @ 0x180072F58 (sub_180072F58.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // rsi
  _QWORD *v11; // rbx
  _DWORD *v13; // r14
  __int64 (*v14)(); // r15
  int v15; // eax
  int v16; // ecx

  v7 = a5;
  v11 = (_QWORD *)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *a5 = 0LL;
    return 0LL;
  }
  v13 = a6;
  v14 = WinSqmStartSqmOptinListener;
  if ( a2 )
    v14 = a2;
  if ( *a6 != *(_DWORD *)(a1 + 64) )
    v11 = 0LL;
  a5 = v11;
  if ( v11 )
    goto LABEL_14;
  v15 = sub_18006938C(a1, a7, &a5);
  if ( v15 == 1 )
  {
    v11 = a5;
LABEL_14:
    if ( a4 )
      v11 = sub_180072F58(v11);
    goto LABEL_16;
  }
  a4 = 0;
  if ( v15 == 3 )
  {
    v11 = sub_180072F58(a5);
    goto LABEL_14;
  }
  v11 = a5;
LABEL_16:
  if ( !v11 )
    return 0LL;
  while ( 1 )
  {
    v16 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v14)(a1, v11 + 4, a3);
    if ( v16 != -1073741198 )
      break;
    v11 = sub_180072F58(v11);
    if ( !v11 )
      return 0LL;
  }
  *v7 = v11;
  *v13 = *(_DWORD *)(a1 + 64);
  if ( v16 )
    return 0LL;
  return v11 + 4;
}
