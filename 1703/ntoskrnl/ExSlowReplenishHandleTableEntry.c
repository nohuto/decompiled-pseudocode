/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x1400EE890
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
}
