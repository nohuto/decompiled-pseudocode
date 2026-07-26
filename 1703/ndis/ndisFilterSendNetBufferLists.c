/*
 * XREFs of ndisFilterSendNetBufferLists @ 0x1C0004B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004160 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005A5A4 (ndisFLoopbackNetBufferLists.c)
 */

void __fastcall ndisFilterSendNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v6; // r8
  _DWORD *v8; // rcx
  __int64 v10; // rax
  int v11; // ebx
  struct _NET_BUFFER_LIST *v12; // rcx
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  void *NextSendNetBufferListsContext; // r13
  struct _NDIS_FILTER_BLOCK *v15; // r14
  struct _NET_BUFFER_LIST *v16; // r15
  unsigned int v17; // edi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v22; // r15
  struct _NET_BUFFER_LIST *v23; // rax
  struct _NDIS_FILTER_BLOCK *v24; // rcx
  __int64 v25; // rsi
  char v26; // al
  struct _NET_BUFFER_LIST *v27; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v29; // r9
  struct _NET_BUFFER_LIST *v30; // rbx
  unsigned int Context; // [rsp+20h] [rbp-59h]
  unsigned int Contexta; // [rsp+20h] [rbp-59h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-49h]
  unsigned int v34; // [rsp+30h] [rbp-49h]
  _QWORD v35[3]; // [rsp+48h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+60h] [rbp-19h] BYREF
  struct _NDIS_FILTER_BLOCK *v37; // [rsp+68h] [rbp-11h]
  void *v38; // [rsp+70h] [rbp-9h]
  void (__fastcall *v39)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+78h] [rbp-1h]
  struct _NET_BUFFER_LIST *v40; // [rsp+80h] [rbp+7h]
  unsigned int v41; // [rsp+88h] [rbp+Fh]
  __int64 v42; // [rsp+8Ch] [rbp+13h]
  unsigned int v43; // [rsp+94h] [rbp+1Bh]
  struct _NET_BUFFER_LIST *v44; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v45; // [rsp+E8h] [rbp+6Fh]

  v44 = a2;
  v6 = a1[4];
  v8 = (_DWORD *)a1[58];
  if ( *(_BYTE *)v8 == 5
    && (v8[14] & 0x8000) != 0
    && !v8[86]
    && (*(_BYTE *)(v6 + 91) && (*(_WORD *)(v6 + 1820) > 1u || *(_BYTE *)(v6 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v6 + 120) & 0x4000) != 0) )
  {
    v4 = ndisFLoopbackNetBufferLists(v8, a2, (__int64)&v44);
    a2 = v44;
  }
  if ( a2 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v10 = a1[54] + 96 * v4;
    if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 16) )
    {
      v11 = a4 | 1;
      if ( !*(_QWORD *)v10 )
      {
        v12 = v44;
        *(_QWORD *)v10 = v44;
LABEL_8:
        *(_QWORD *)(v10 + 8) = v12;
        v12->Scratch = 0LL;
        v12->ChildRefCount = v11;
        v12->Status = a3;
        return;
      }
      p_Next = *(struct _NET_BUFFER_LIST ***)(v10 + 8);
      if ( a3 != *((_DWORD *)p_Next + 35) || v11 != *((_DWORD *)p_Next + 33) || (v11 & 0x34) != 0 )
      {
        v12 = v44;
        p_Next[14] = v44;
        goto LABEL_8;
      }
      for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        p_Next = &i->Next;
      *p_Next = v44;
    }
    else
    {
      NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))a1[55];
      NextSendNetBufferListsContext = (void *)a1[56];
      v15 = (struct _NDIS_FILTER_BLOCK *)a1[58];
      if ( v15->Header.Type == 17 )
      {
        NextSendNetBufferListsHandler(NextSendNetBufferListsContext, v44, a3, a4);
      }
      else if ( !ndisIterativeDataPathDisabled && ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v22 = (struct _NET_BUFFER_LIST **)v35;
        v45 = Number;
        v35[2] = 0LL;
        v23 = v44;
        v35[0] = v44;
        v35[1] = v44;
        v44->Scratch = 0LL;
        v23->ChildRefCount = a4;
        v23->Status = a3;
        if ( v15->Header.Type == 5 )
        {
          while ( *v22 )
          {
            v24 = v15;
            v25 = (__int64)v15->IterativeDataPathTracker[Number];
            v26 = *(_BYTE *)(v25 + 16);
            *(_BYTE *)(v25 + 16) = 1;
            v27 = *v22;
            LOBYTE(v44) = v26;
            *v22 = 0LL;
            if ( v27 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v27->Scratch;
                ChildRefCount = v27->ChildRefCount;
                Context = v27->NdisReserved2;
                v27->ChildRefCount = 0;
                ndisCallSendHandler(
                  v15,
                  NextSendNetBufferListsHandler,
                  NextSendNetBufferListsContext,
                  v27,
                  Context,
                  0,
                  ChildRefCount);
                v27 = Scratch;
              }
              while ( Scratch );
              v26 = (char)v44;
              v24 = v15;
              Number = v45;
            }
            *(_BYTE *)(v25 + 16) = 0;
            if ( v26 )
            {
              *(_BYTE *)(v25 + 16) = 1;
              goto LABEL_44;
            }
            v15 = (struct _NDIS_FILTER_BLOCK *)v15->NextSendNetBufferListsObject;
            v22 = (struct _NET_BUFFER_LIST **)v25;
            NextSendNetBufferListsHandler = v24->NextSendNetBufferListsHandler;
            NextSendNetBufferListsContext = v24->NextSendNetBufferListsContext;
            if ( v15->Header.Type != 5 )
              goto LABEL_44;
          }
        }
        else
        {
LABEL_44:
          v29 = *v22;
          if ( *v22 )
          {
            *v22 = 0LL;
            do
            {
              v30 = (struct _NET_BUFFER_LIST *)v29->Scratch;
              v34 = v29->ChildRefCount;
              Contexta = v29->NdisReserved2;
              v29->ChildRefCount = 0;
              ndisCallSendHandler(
                v15,
                NextSendNetBufferListsHandler,
                NextSendNetBufferListsContext,
                v29,
                Contexta,
                0,
                v34);
              v29 = v30;
            }
            while ( v30 );
          }
        }
      }
      else
      {
        v16 = v44;
        v17 = 0;
        v40 = v44;
        v42 = 0LL;
        v37 = v15;
        v38 = NextSendNetBufferListsContext;
        v39 = NextSendNetBufferListsHandler;
        v41 = a3;
        v43 = a4;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
        {
          Alignment = v16;
          do
          {
            Alignment->Status = -1073741670;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          do
          {
            v16 = (struct _NET_BUFFER_LIST *)v16->Link.Alignment;
            ++v17;
          }
          while ( v16 );
          _InterlockedExchangeAdd(&v15->DroppedSendNbls, v17);
          ndisQueueStackExpansionFallbackNbls(v15, v44, 1u);
        }
      }
    }
  }
}
