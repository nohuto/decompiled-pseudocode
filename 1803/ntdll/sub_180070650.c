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
  _UNICODE_STRING *v3; // rsi
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-138h] BYREF
  _UNICODE_STRING v7; // [rsp+40h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v7.Length = 0x1000000;
  v7.Buffer = v8;
  v3 = (_UNICODE_STRING *)(v1 + 72);
  v8[0] = 0;
  v4 = sub_180043094(
         (PUNICODE_STRING)(v1 + 88),
         (PUNICODE_STRING)(v1 + 72),
         *(_DWORD *)(a1 + 32),
         *(_DWORD *)(v1 + 264),
         &v6);
  if ( v6 )
  {
    sub_180070738(a1, v6);
  }
  else
  {
    v4 = sub_18003FC1C(v3, &v7);
    if ( v4 >= 0 )
      v4 = sub_180043144(a1, &v7);
  }
  if ( v8 != v7.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v7.Buffer);
  return (unsigned int)v4;
}
