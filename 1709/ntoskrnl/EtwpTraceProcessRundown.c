/*
 * XREFs of EtwpTraceProcessRundown @ 0x14074EF74
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404DBD90 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x1404DBDC0 (EtwpBuildProcessEvent.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(struct _KPROCESS *a1, __int64 a2, __int16 a3, __int64 a4)
{
  char v7; // r8
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  PVOID TokenInformation; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h] BYREF
  _STRING AnsiString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v16[52]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v17[18]; // [rsp+260h] [rbp+160h] BYREF

  P = *(PVOID *)(a4 + 16);
  WORD1(v10) = *(_WORD *)(a4 + 24);
  v7 = *(_BYTE *)(a4 + 105);
  LOWORD(v10) = 0;
  EtwpBuildProcessEvent(
    a1,
    a3,
    v7,
    (__int64)v15,
    &v13,
    (__int64)v17,
    (unsigned int *)&v9,
    v16,
    &AnsiString,
    (unsigned __int16 *)&v10,
    &TokenInformation);
  EtwpLogKernelEvent((__int64)v17, *(_QWORD *)(a2 + 2256), *(_DWORD *)a2, v9, a3, 5249029 - (a3 != 807));
  if ( P != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(P, 0);
  RtlFreeAnsiString(&AnsiString);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return 0LL;
}
