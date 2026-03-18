/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x140082980
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
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
