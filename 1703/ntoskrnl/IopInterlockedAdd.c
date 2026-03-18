/*
 * XREFs of IopInterlockedAdd @ 0x140032364
 * Callers:
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     IopCheckListForCancelableIrp @ 0x140018B50 (IopCheckListForCancelableIrp.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopInterlockedAdd(volatile signed __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r9

  v2 = *a1;
  do
  {
    v3 = v2;
    v4 = a2 + ((v2 >> 1) & 3);
    v2 = _InterlockedCompareExchange64(a1, v2 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v4), v2);
  }
  while ( v3 != v2 );
  return (unsigned int)v4;
}
