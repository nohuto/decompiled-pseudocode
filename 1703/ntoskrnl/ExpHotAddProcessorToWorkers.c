/*
 * XREFs of ExpHotAddProcessorToWorkers @ 0x14025D7D4
 * Callers:
 *     ExInitializeProcessor @ 0x14015412C (ExInitializeProcessor.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x140114B34 (ExQueueWorkItemEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 *__fastcall ExpHotAddProcessorToWorkers(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 192);
  if ( (_UNKNOWN *)KeNodeBlock[*(unsigned __int16 *)(v1 + 146)] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                              + 320 * *(unsigned __int16 *)(v1 + 146)) )
    v1 = 0LL;
  result = (__int64 *)*(unsigned int *)(v1 + 2092);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C577845u);
    if ( result )
    {
      result[3] = (__int64)result;
      result[2] = (__int64)ExpWorkerHotAddProcessor;
      *result = 0LL;
      result[4] = v1;
      return (__int64 *)ExQueueWorkItemEx(result, 1u, 0);
    }
  }
  return result;
}
