/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x140135040
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14002D5E8 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a1, 2048);
  if ( (int)result < 0 )
    ++DWORD1(xmmword_14036DC10);
  return result;
}
