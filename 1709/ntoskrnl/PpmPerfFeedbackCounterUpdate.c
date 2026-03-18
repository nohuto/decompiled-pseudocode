/*
 * XREFs of PpmPerfFeedbackCounterUpdate @ 0x140240898
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterUpdate(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, char *); // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(__int64 (__fastcall **)(__int64, char *))a1;
  v3 = *(_BYTE *)(a1 + 33) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    return v1(v4, &v6);
  ((void (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))v1)(v4, 0LL, &v7, &v8);
  *(_QWORD *)(a1 + 16) = v7;
  result = v8;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
