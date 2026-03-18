/*
 * XREFs of CmpEtwDumpKcb @ 0x140660E60
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _BYTE *, _QWORD, _QWORD, __int64, PVOID); // rsi
  __int64 v5; // rcx
  PVOID v6; // rbx
  PVOID P; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v8[24]; // [rsp+48h] [rbp-40h] BYREF

  v2 = (void (__fastcall *)(__int64, _BYTE *, _QWORD, _QWORD, __int64, PVOID))CmpTraceRoutine;
  memset(v8, 0, sizeof(v8));
  if ( CmpTraceRoutine )
  {
    P = 0LL;
    CmpConstructNameWithStatus(a1, &P);
    v6 = P;
    if ( P )
    {
      LOBYTE(v5) = a2;
      v2(v5, v8, 0LL, 0LL, a1, P);
      CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
    }
  }
}
