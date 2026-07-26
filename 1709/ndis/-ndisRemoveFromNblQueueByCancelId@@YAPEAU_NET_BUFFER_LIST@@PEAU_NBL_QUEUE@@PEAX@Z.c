/*
 * XREFs of ?ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z @ 0x1C006E3EC
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006E314 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     <none>
 */

struct _NET_BUFFER_LIST *__fastcall ndisRemoveFromNblQueueByCancelId(struct _NBL_QUEUE *a1, void *a2)
{
  _NET_BUFFER_LIST *First; // r8
  __int64 v3; // r9
  _SLIST_HEADER *v5; // r10
  _NET_BUFFER_LIST *Alignment; // rdx
  struct _NBL_QUEUE *v7; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+8h] [rbp-10h]

  First = a1->First;
  v3 = 0LL;
  v10 = &v9;
  v9 = 0LL;
  v5 = 0LL;
  if ( First )
  {
    do
    {
      Alignment = (_NET_BUFFER_LIST *)First->Link.Alignment;
      if ( First->NetBufferListInfo[5] == a2 )
      {
        if ( First == a1->First )
          a1->First = Alignment;
        if ( First == (_NET_BUFFER_LIST *)a1->Last )
        {
          v7 = a1;
          if ( v5 )
            v7 = (struct _NBL_QUEUE *)v5;
          a1->Last = &v7->First;
        }
        if ( v5 )
          v5->Alignment = First->Link.Alignment;
        First->Link.Alignment = 0LL;
        *v10 = (__int64)First;
        v10 = (__int64 *)First;
      }
      else
      {
        v5 = (_SLIST_HEADER *)First;
      }
      First = Alignment;
    }
    while ( Alignment );
    return (struct _NET_BUFFER_LIST *)v9;
  }
  return (struct _NET_BUFFER_LIST *)v3;
}
