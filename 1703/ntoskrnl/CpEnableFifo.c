/*
 * XREFs of CpEnableFifo @ 0x14026AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpEnableFifo(_QWORD *a1)
{
  return ((__int64 (__fastcall *)(__int64))WRITE_UCHAR)(*a1 + 2 * CpRegisterWidth);
}
