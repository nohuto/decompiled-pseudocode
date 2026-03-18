/*
 * XREFs of MiFreeSubsectionProtos @ 0x140754FD8
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 */

unsigned __int64 __fastcall MiFreeSubsectionProtos(PVOID **a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *v5; // rcx
  unsigned __int64 result; // rax

  while ( 1 )
  {
    v5 = *a1;
    if ( !*a1 )
      break;
    *a1 = (PVOID *)*v5;
    result = MiDeletePerSessionProtos(v5, a2, a3, a4);
  }
  return result;
}
