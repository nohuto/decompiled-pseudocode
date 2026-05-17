/*
 * XREFs of RtlCompressBuffer @ 0x1800641C0
 * Callers:
 *     sub_180002CBC @ 0x180002CBC (sub_180002CBC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return qword_180110D38[(unsigned __int8)a1](a1 & 0xFF00);
}
