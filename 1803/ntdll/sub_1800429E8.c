/*
 * XREFs of sub_1800429E8 @ 0x1800429E8
 * Callers:
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 *     sub_180042934 @ 0x180042934 (sub_180042934.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800429E8(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v8.Buffer = v9;
  v2 = *(_DWORD *)(a1 + 32);
  v7 = 0LL;
  *(_DWORD *)&v8.Length = 0x1000000;
  v9[0] = 0;
  v4 = sub_18003FCF8((unsigned __int16 *)a1, &v8, (_UNICODE_STRING *)(v1 + 88), (_UNICODE_STRING *)(v1 + 72), v2);
  v5 = v4;
  if ( !*(_QWORD *)(a1 + 168)
    && (v5 = sub_180042934(a1, (_UNICODE_STRING *)(v1 + 72), (_UNICODE_STRING *)(v1 + 88), &v8, v4), v5 >= 0)
    && (*(_DWORD *)(v1 + 264) = sub_1800404E8((_UNICODE_STRING *)(v1 + 88)),
        sub_180043094((PUNICODE_STRING)(v1 + 88), (PUNICODE_STRING)(v1 + 72), (__int64)&v7),
        v7) )
  {
    sub_180070738(a1, v7);
  }
  else if ( v5 >= 0 )
  {
    v5 = sub_180043144(a1, &v8);
    if ( v5 == 1073741838 )
      v5 = -1073741701;
  }
  if ( v9 != v8.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v8.Buffer);
  return (unsigned int)v5;
}
