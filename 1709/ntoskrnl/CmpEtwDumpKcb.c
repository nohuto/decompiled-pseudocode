/*
 * XREFs of CmpEtwDumpKcb @ 0x140689DE4
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140478800 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _BYTE *, _QWORD, _QWORD, __int64, void *); // rsi
  __int64 v5; // rcx
  void *v6; // rbx
  void *v7; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v8[24]; // [rsp+48h] [rbp-40h] BYREF

  v2 = (void (__fastcall *)(__int64, _BYTE *, _QWORD, _QWORD, __int64, void *))CmpTraceRoutine;
  memset(v8, 0, sizeof(v8));
  if ( CmpTraceRoutine )
  {
    v7 = 0LL;
    CmpConstructNameWithStatus(a1, &v7);
    v6 = v7;
    if ( v7 )
    {
      LOBYTE(v5) = a2;
      v2(v5, v8, 0LL, 0LL, a1, v7);
      CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
    }
  }
}
