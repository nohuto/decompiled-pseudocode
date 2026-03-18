/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x140287208
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140264BC0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140062344 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 result; // rax

  v4 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (ExpValidateWorkItem(BugCheckParameter2, a2 + 32),
        result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, a2, 0xFFFFFFFF, v4),
        !(_BYTE)result) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
