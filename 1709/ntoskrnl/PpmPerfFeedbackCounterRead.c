/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x140137DA8
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x140137C54 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64 *, __int64 *); // rax
  bool v5; // zf
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))a1;
  v5 = *(_BYTE *)(a1 + 33) == 0;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    return ((__int64 (__fastcall *)(__int64, _DWORD *))v3)(v7, a3);
  v3(v7, a2, &v13, &v14);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v13 != v8 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v13 - v8;
    v12 = v14 - v10;
    *(_DWORD *)(a1 + 24) = (v14 - v10) * (unsigned __int64)*(unsigned __int8 *)(a1 + 35) / (v13 - v8);
    *(_QWORD *)(a1 + 16) = v8 + v11;
    *(_QWORD *)(a1 + 8) = v10 + v12;
  }
  result = *(unsigned int *)(a1 + 24);
  *a3 = result;
  return result;
}
