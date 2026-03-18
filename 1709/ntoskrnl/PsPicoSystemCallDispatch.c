/*
 * XREFs of PsPicoSystemCallDispatch @ 0x140719D70
 * Callers:
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_140362928)(&v3);
  return *(_QWORD *)(a1 + 48);
}
