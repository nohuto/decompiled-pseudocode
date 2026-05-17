/*
 * XREFs of sub_180070650 @ 0x180070650
 * Callers:
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180070650(__int64 a1)
{
  __int64 v1; // rax
  __int128 *v3; // rsi
  int v4; // ebx
  volatile signed __int32 *v6; // [rsp+30h] [rbp-138h] BYREF
  int v7; // [rsp+40h] [rbp-128h] BYREF
  _WORD *v8; // [rsp+48h] [rbp-120h]
  _WORD v9[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v7 = 0x1000000;
  v8 = v9;
  v3 = (__int128 *)(v1 + 72);
  v9[0] = 0;
  v4 = sub_180043094(v1 + 88, v1 + 72, (unsigned __int64 *)*(unsigned int *)(a1 + 32), *(unsigned int *)(v1 + 264), &v6);
  if ( v6 )
  {
    sub_180070738(a1, v6);
  }
  else
  {
    v4 = sub_18003FC1C(v3, (__int64)&v7);
    if ( v4 >= 0 )
      v4 = sub_180043144(a1, (__int64)&v7);
  }
  if ( v9 != v8 )
    RtlDeleteBoundaryDescriptor((__int64)v8);
  return (unsigned int)v4;
}
