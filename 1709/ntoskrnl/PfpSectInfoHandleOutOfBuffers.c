/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x140452040
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14012AF24 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
