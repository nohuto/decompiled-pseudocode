/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x1404455F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
