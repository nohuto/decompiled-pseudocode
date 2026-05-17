/*
 * XREFs of RtlCompressBuffer @ 0x1800638A0
 * Callers:
 *     sub_180004554 @ 0x180004554 (sub_180004554.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return qword_180110EB8[(unsigned __int8)a1](a1 & 0xFF00);
}
