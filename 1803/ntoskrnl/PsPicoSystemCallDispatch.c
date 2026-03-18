/*
 * XREFs of PsPicoSystemCallDispatch @ 0x14077D800
 * Callers:
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  ((void (__fastcall *)(__int64 *))qword_1403A60E8)(&v3);
  return *(_QWORD *)(a1 + 48);
}
