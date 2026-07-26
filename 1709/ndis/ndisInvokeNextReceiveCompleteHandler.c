/*
 * XREFs of ndisInvokeNextReceiveCompleteHandler @ 0x1C0016B0C
 * Callers:
 *     NdisFReturnNetBufferLists @ 0x1C0016840 (NdisFReturnNetBufferLists.c)
 *     ndisFakeFilterReceiveHandler @ 0x1C00599F0 (ndisFakeFilterReceiveHandler.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextReceiveCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        _BYTE *a4,
        void *a5,
        void (*a6)(void))
{
  _QWORD *v6; // rdi
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v10; // rsi
  void *v11; // r8
  void (*v12)(void); // r13
  _QWORD *v13; // r15
  __int64 v14; // r14
  char v15; // r12
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-49h]
  unsigned int v21; // [rsp+38h] [rbp-49h]
  void *v22; // [rsp+48h] [rbp-39h]
  _QWORD v23[3]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE Parameter[8]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE *v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  void (*v27)(void); // [rsp+88h] [rbp+7h]
  struct _NET_BUFFER_LIST *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  __int64 v30; // [rsp+9Ch] [rbp+1Bh]
  unsigned int v31; // [rsp+A4h] [rbp+23h]
  unsigned int v32; // [rsp+F0h] [rbp+6Fh]

  v6 = a4;
  if ( *a4 == 17 )
    goto LABEL_2;
  if ( !ndisIterativeDataPathDisabled && ((a2 & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v10 = (struct _NET_BUFFER_LIST **)v23;
    v11 = a5;
    v12 = a6;
    v22 = a5;
    v23[2] = 0LL;
    v32 = Number;
    v23[0] = a1;
    v23[1] = a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    if ( *a4 == 5 )
    {
      while ( *v10 )
      {
        v13 = v6;
        v14 = v6[54] + 96LL * Number;
        v15 = *(_BYTE *)(v14 + 88);
        *(_BYTE *)(v14 + 88) = 1;
        v16 = *v10;
        *v10 = 0LL;
        if ( v16 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
            ChildRefCount = v16->ChildRefCount;
            v16->ChildRefCount = 0;
            ndisCallReceiveCompleteHandler(v6, v12, v22, v16, 0, 0, ChildRefCount);
            v16 = Scratch;
          }
          while ( Scratch );
          v11 = v22;
          v13 = v6;
        }
        *(_BYTE *)(v14 + 88) = 0;
        if ( v15 )
        {
          *(_BYTE *)(v14 + 88) = 1;
          goto LABEL_16;
        }
        v6 = (_QWORD *)v6[70];
        v10 = (struct _NET_BUFFER_LIST **)(v14 + 72);
        v11 = (void *)v13[68];
        v12 = (void (*)(void))v13[67];
        Number = v32;
        v22 = v11;
        if ( *(_BYTE *)v6 != 5 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v18 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        do
        {
          v19 = (struct _NET_BUFFER_LIST *)v18->Scratch;
          v21 = v18->ChildRefCount;
          v18->ChildRefCount = 0;
          ndisCallReceiveCompleteHandler(v6, v12, v11, v18, 0, 0, v21);
          v11 = v22;
          v18 = v19;
        }
        while ( v19 );
      }
    }
  }
  else
  {
    if ( a3->Header.Type != 5 )
    {
LABEL_2:
      ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a6)(a5, a1, a2);
      return;
    }
    v26 = (__int64)a5;
    v25 = a4;
    v31 = a2;
    v27 = a6;
    v30 = 3LL;
    v28 = a1;
    v29 = 0;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls(a3, a1, 0);
  }
}
