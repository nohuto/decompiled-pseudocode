/*
 * XREFs of CpEnableFifo @ 0x140294FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpEnableFifo(_QWORD *a1)
{
  return ((__int64 (__fastcall *)(__int64))WRITE_UCHAR[0])(*a1 + 2 * CpRegisterWidth);
}
