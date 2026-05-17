/*
 * XREFs of RtlDecompressBufferEx @ 0x18008AEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlDecompressBufferEx(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 4u )
    return 3221226079LL;
  return qword_180111210[a1](a2, a3, a4, a5, 0, a6, a7);
}
