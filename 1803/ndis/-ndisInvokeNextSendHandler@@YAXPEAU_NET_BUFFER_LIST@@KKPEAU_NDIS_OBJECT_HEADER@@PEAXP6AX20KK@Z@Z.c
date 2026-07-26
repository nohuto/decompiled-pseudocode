/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0005950
 * Callers:
 *     ndisFilterSendNetBufferLists @ 0x1C0005860 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C00071C0 (NdisFSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C005AA40 (ndisSendNBLToFilter.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001920 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_FILTER_BLOCK *a4,
        void *a5,
        void (*a6)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_FILTER_BLOCK *v7; // rsi
  struct _NET_BUFFER_LIST *v8; // rdi
  struct _NET_BUFFER_LIST **v9; // r14
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  void *NextSendNetBufferListsContext; // r13
  bool v12; // zf
  struct _NDIS_FILTER_BLOCK *v13; // r15
  __int64 v14; // rdi
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v19; // eax
  struct _NET_BUFFER_LIST *v20; // rbx
  struct _NET_BUFFER_LIST *i; // rax
  _SLIST_HEADER *Alignment; // rcx
  unsigned int v23; // eax
  unsigned int v24; // [rsp+48h] [rbp-39h]
  _QWORD v25[3]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE Parameter[8]; // [rsp+68h] [rbp-19h] BYREF
  struct _NDIS_OBJECT_HEADER *p_Header; // [rsp+70h] [rbp-11h]
  void *v28; // [rsp+78h] [rbp-9h]
  void (*v29)(void); // [rsp+80h] [rbp-1h]
  struct _NET_BUFFER_LIST *v30; // [rsp+88h] [rbp+7h]
  unsigned int v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+94h] [rbp+13h]
  unsigned int v33; // [rsp+9Ch] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  char v35; // [rsp+F0h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v7 = a4;
  v8 = a1;
  if ( a4->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled
         && ((a3 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v9 = (struct _NET_BUFFER_LIST **)v25;
    NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a6;
    NextSendNetBufferListsContext = a5;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    v12 = a4->Header.Type == 5;
    v24 = CurrentIrql;
    v25[2] = 0LL;
    v25[0] = a1;
    v25[1] = a1;
    if ( v12 )
    {
      while ( *v9 )
      {
        v13 = v7;
        v14 = (__int64)v7->IterativeDataPathTracker[CurrentIrql];
        v15 = *(_BYTE *)(v14 + 16);
        *(_BYTE *)(v14 + 16) = 1;
        v16 = *v9;
        v35 = v15;
        *v9 = 0LL;
        if ( v16 )
        {
          do
          {
            ChildRefCount = v16->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
            v16->ChildRefCount = 0;
            ndisCallSendHandler(
              v7,
              NextSendNetBufferListsHandler,
              NextSendNetBufferListsContext,
              v16,
              v16->NdisReserved2,
              0,
              ChildRefCount);
            v16 = Scratch;
          }
          while ( Scratch );
          v15 = v35;
        }
        *(_BYTE *)(v14 + 16) = 0;
        if ( v15 )
        {
          *(_BYTE *)(v14 + 16) = 1;
          v8 = *v9;
          goto LABEL_18;
        }
        v7 = (struct _NDIS_FILTER_BLOCK *)v7->NextSendNetBufferListsObject;
        v9 = (struct _NET_BUFFER_LIST **)v14;
        NextSendNetBufferListsHandler = v13->NextSendNetBufferListsHandler;
        NextSendNetBufferListsContext = v13->NextSendNetBufferListsContext;
        CurrentIrql = v24;
        if ( v7->Header.Type != 5 )
        {
          v8 = *(struct _NET_BUFFER_LIST **)v14;
          goto LABEL_18;
        }
      }
    }
    else
    {
LABEL_18:
      if ( v8 )
      {
        *v9 = 0LL;
        do
        {
          v19 = v8->ChildRefCount;
          v20 = (struct _NET_BUFFER_LIST *)v8->Scratch;
          v8->ChildRefCount = 0;
          ndisCallSendHandler(
            v7,
            NextSendNetBufferListsHandler,
            NextSendNetBufferListsContext,
            v8,
            v8->NdisReserved2,
            0,
            v19);
          v8 = v20;
        }
        while ( v20 );
      }
    }
  }
  else
  {
    v28 = a5;
    v31 = a2;
    v33 = a3;
    v29 = a6;
    p_Header = &a4->Header;
    v32 = 0LL;
    v30 = a1;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      for ( i = v8; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        i->Status = -1073741670;
      Alignment = (_SLIST_HEADER *)v8;
      v23 = 0;
      if ( v8 )
      {
        do
        {
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          ++v23;
        }
        while ( Alignment );
      }
      _InterlockedExchangeAdd(&v7->DroppedSendNbls, v23);
      ndisQueueStackExpansionFallbackNbls(v7, v8, 1u);
    }
  }
}
