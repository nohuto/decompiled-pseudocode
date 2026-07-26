/*
 * XREFs of ndisInvokeNextReceiveHandler @ 0x1C00110CC
 * Callers:
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C000F260 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C005512C (ndisDoLoopbackNetBufferList.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C00686F0 (ndisMIndicatePacketsToNetBufferLists.c)
 * Callees:
 *     ?ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00035C0 (-ndisCallReceiveHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextReceiveHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct _NDIS_FILTER_BLOCK *a5,
        void *a6,
        void (*a7)(void))
{
  unsigned __int64 CurrentIrql; // rax
  struct _NDIS_FILTER_BLOCK *v8; // rdi
  struct _NET_BUFFER_LIST *v10; // r9
  struct _NDIS_FILTER_BLOCK *v11; // r14
  __int64 v12; // rbx
  char v13; // r15
  struct _NET_BUFFER_LIST *v14; // r9
  int v15; // esi
  struct _NET_BUFFER_LIST **v16; // rsi
  void *NextIndicateReceiveNetBufferListsContext; // r12
  void (__fastcall *NextIndicateReceiveNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r13
  unsigned __int64 Alignment; // rcx
  struct _NET_BUFFER_LIST *Scratch; // r12
  unsigned int ChildRefCount; // ecx
  unsigned int NdisReserved2; // edx
  unsigned int v23; // eax
  struct _NET_BUFFER_LIST *v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // eax
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int v29; // eax
  struct _NET_BUFFER_LIST *j; // rcx
  void *v31; // [rsp+48h] [rbp-41h]
  struct _NET_BUFFER_LIST *v32; // [rsp+58h] [rbp-31h] BYREF
  struct _NET_BUFFER_LIST *v33; // [rsp+60h] [rbp-29h]
  __int64 v34; // [rsp+68h] [rbp-21h]
  _BYTE Parameter[8]; // [rsp+70h] [rbp-19h] BYREF
  struct _NDIS_FILTER_BLOCK *v36; // [rsp+78h] [rbp-11h]
  void *v37; // [rsp+80h] [rbp-9h]
  void (*v38)(void); // [rsp+88h] [rbp-1h]
  struct _NET_BUFFER_LIST *v39; // [rsp+90h] [rbp+7h]
  unsigned int v40; // [rsp+98h] [rbp+Fh]
  int v41; // [rsp+9Ch] [rbp+13h]
  unsigned int v42; // [rsp+A0h] [rbp+17h]
  int v43; // [rsp+A4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp+6Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v8 = a5;
  if ( a5->Header.Type == 17 )
  {
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, int))a7)(a6, a1, a2, a3, a4);
  }
  else
  {
    v15 = a4 & 2;
    if ( (a4 & 2) == 0
      && ndisIterativeDataPathDisabled == v15
      && ((a4 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v16 = &v32;
      NextIndicateReceiveNetBufferListsContext = a6;
      NextIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a7;
      v31 = a6;
      v45 = CurrentIrql;
      v33 = 0LL;
      v34 = 0LL;
      v32 = a1;
      a1->Scratch = 0LL;
      a1->ChildRefCount = a4;
      a1->Status = a2;
      Alignment = a1->Link.Alignment;
      v33 = a1;
      if ( !Alignment )
        goto LABEL_8;
      *(_QWORD *)(Alignment + 112) = a3;
      while ( 1 )
      {
        CurrentIrql = v45;
LABEL_8:
        if ( v8->Header.Type != 5 )
          break;
        if ( !*v16 )
          return;
        v11 = v8;
        v12 = (__int64)v8->IterativeDataPathTracker[CurrentIrql];
        v13 = *(_BYTE *)(v12 + 64);
        *(_BYTE *)(v12 + 64) = 1;
        v14 = *v16;
        *v16 = 0LL;
        if ( v14 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v14->Scratch;
            ChildRefCount = v14->ChildRefCount;
            NdisReserved2 = v14->NdisReserved2;
            if ( v14->Link.Alignment )
              v23 = *(_DWORD *)(v14->Link.Alignment + 112);
            else
              v23 = 1;
            v14->ChildRefCount = 0;
            ndisCallReceiveHandler(
              v8,
              NextIndicateReceiveNetBufferListsHandler,
              v31,
              v14,
              NdisReserved2,
              v23,
              ChildRefCount);
            v14 = Scratch;
          }
          while ( Scratch );
          NextIndicateReceiveNetBufferListsContext = v31;
          v11 = v8;
        }
        *(_BYTE *)(v12 + 64) = 0;
        if ( v13 )
        {
          *(_BYTE *)(v12 + 64) = 1;
          break;
        }
        NextIndicateReceiveNetBufferListsContext = v11->NextIndicateReceiveNetBufferListsContext;
        v16 = (struct _NET_BUFFER_LIST **)(v12 + 48);
        v8 = (struct _NDIS_FILTER_BLOCK *)v8->NextIndicateReceiveNetBufferListsObject;
        NextIndicateReceiveNetBufferListsHandler = v11->NextIndicateReceiveNetBufferListsHandler;
        v31 = NextIndicateReceiveNetBufferListsContext;
      }
      v10 = *v16;
      if ( *v16 )
      {
        *v16 = 0LL;
        do
        {
          v24 = (struct _NET_BUFFER_LIST *)v10->Scratch;
          v25 = v10->ChildRefCount;
          v26 = v10->NdisReserved2;
          if ( v10->Link.Alignment )
            v27 = *(_DWORD *)(v10->Link.Alignment + 112);
          else
            v27 = 1;
          v10->ChildRefCount = 0;
          ndisCallReceiveHandler(
            v8,
            NextIndicateReceiveNetBufferListsHandler,
            NextIndicateReceiveNetBufferListsContext,
            v10,
            v26,
            v27,
            v25);
          v10 = v24;
        }
        while ( v24 );
      }
    }
    else
    {
      v37 = a6;
      v42 = a3;
      v40 = a2;
      v43 = a4;
      v38 = a7;
      v36 = a5;
      v41 = 2;
      v39 = a1;
      if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        for ( i = a1; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          i->Status = -1073741670;
        v29 = 0;
        for ( j = a1; j; ++v29 )
          j = (struct _NET_BUFFER_LIST *)j->Link.Alignment;
        _InterlockedExchangeAdd(&a5->DroppedReceiveNbls, v29);
        if ( !v15 )
          ndisQueueStackExpansionFallbackNbls(a5, a1, 0);
      }
    }
  }
}
