/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x1800A2AB0
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x1800713CC (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 336LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
