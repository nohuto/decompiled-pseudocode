/*
 * XREFs of ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0057D04
 * Callers:
 *     ndisSendNBLToFilter @ 0x1C005A120 (ndisSendNBLToFilter.c)
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0013610 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextSendHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        struct _NDIS_FILTER_BLOCK *a4,
        void *a5,
        void (*a6)(void))
{
  struct _NDIS_FILTER_BLOCK *v6; // rdi
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v9; // r14
  void *NextSendNetBufferListsContext; // r10
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r13
  struct _NDIS_FILTER_BLOCK *v12; // r15
  __int64 v13; // rsi
  char v14; // r12
  struct _NET_BUFFER_LIST *v15; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *v18; // rbx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v20; // eax
  struct _NET_BUFFER_LIST *j; // rcx
  unsigned int Context; // [rsp+28h] [rbp-59h]
  unsigned int Contexta; // [rsp+28h] [rbp-59h]
  unsigned int ChildRefCount; // [rsp+38h] [rbp-49h]
  unsigned int v25; // [rsp+38h] [rbp-49h]
  void *v26; // [rsp+48h] [rbp-39h]
  _QWORD v27[3]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Parameter[8]; // [rsp+70h] [rbp-11h] BYREF
  struct _NDIS_OBJECT_HEADER *p_Header; // [rsp+78h] [rbp-9h]
  void *v30; // [rsp+80h] [rbp-1h]
  void (*v31)(void); // [rsp+88h] [rbp+7h]
  struct _NET_BUFFER_LIST *v32; // [rsp+90h] [rbp+Fh]
  unsigned int v33; // [rsp+98h] [rbp+17h]
  __int64 v34; // [rsp+9Ch] [rbp+1Bh]
  unsigned int v35; // [rsp+A4h] [rbp+23h]
  unsigned int v36; // [rsp+F0h] [rbp+6Fh]

  v6 = a4;
  if ( a4->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))a6)(a5, a1, a2, a3);
  }
  else if ( !ndisIterativeDataPathDisabled && ((a3 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v9 = (struct _NET_BUFFER_LIST **)v27;
    NextSendNetBufferListsContext = a5;
    NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a6;
    v26 = a5;
    v27[2] = 0LL;
    v36 = Number;
    v27[0] = a1;
    v27[1] = a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a3;
    a1->Status = a2;
    if ( a4->Header.Type == 5 )
    {
      while ( *v9 )
      {
        v12 = v6;
        v13 = (__int64)v6->IterativeDataPathTracker[Number];
        v14 = *(_BYTE *)(v13 + 16);
        *(_BYTE *)(v13 + 16) = 1;
        v15 = *v9;
        *v9 = 0LL;
        if ( v15 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v15->Scratch;
            ChildRefCount = v15->ChildRefCount;
            Context = v15->NdisReserved2;
            v15->ChildRefCount = 0;
            ndisCallSendHandler(v6, NextSendNetBufferListsHandler, v26, v15, Context, 0, ChildRefCount);
            v15 = Scratch;
          }
          while ( Scratch );
          NextSendNetBufferListsContext = v26;
          v12 = v6;
          Number = v36;
        }
        *(_BYTE *)(v13 + 16) = 0;
        if ( v14 )
        {
          *(_BYTE *)(v13 + 16) = 1;
          goto LABEL_15;
        }
        v6 = (struct _NDIS_FILTER_BLOCK *)v6->NextSendNetBufferListsObject;
        v9 = (struct _NET_BUFFER_LIST **)v13;
        NextSendNetBufferListsContext = v12->NextSendNetBufferListsContext;
        NextSendNetBufferListsHandler = v12->NextSendNetBufferListsHandler;
        v26 = NextSendNetBufferListsContext;
        if ( v6->Header.Type != 5 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v17 = *v9;
      if ( *v9 )
      {
        *v9 = 0LL;
        do
        {
          v18 = (struct _NET_BUFFER_LIST *)v17->Scratch;
          v25 = v17->ChildRefCount;
          Contexta = v17->NdisReserved2;
          v17->ChildRefCount = 0;
          ndisCallSendHandler(v6, NextSendNetBufferListsHandler, NextSendNetBufferListsContext, v17, Contexta, 0, v25);
          NextSendNetBufferListsContext = v26;
          v17 = v18;
        }
        while ( v18 );
      }
    }
  }
  else
  {
    v30 = a5;
    v33 = a2;
    v35 = a3;
    v31 = a6;
    p_Header = &a4->Header;
    v34 = 0LL;
    v32 = a1;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      for ( i = a1; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        i->Status = -1073741670;
      v20 = 0;
      for ( j = a1; j; ++v20 )
        j = (struct _NET_BUFFER_LIST *)j->Link.Alignment;
      _InterlockedExchangeAdd(&v6->DroppedSendNbls, v20);
      ndisQueueStackExpansionFallbackNbls(v6, a1, 1);
    }
  }
}
