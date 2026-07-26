/*
 * XREFs of ndisInvokeNextSendCompleteHandler @ 0x1C0010F3C
 * Callers:
 *     NdisFSendNetBufferListsComplete @ 0x1C0006800 (NdisFSendNetBufferListsComplete.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0056E5C (ndisMSendCompletePacketToNetBufferLists.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisFakeFilterSendHandler @ 0x1C005A7A0 (ndisFakeFilterSendHandler.c)
 * Callees:
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001BB0 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeNextSendCompleteHandler(
        struct _NET_BUFFER_LIST *a1,
        unsigned int a2,
        struct _NDIS_FILTER_BLOCK *a3,
        _BYTE *a4,
        void *a5,
        void (*a6)(void))
{
  _QWORD *v6; // rdi
  _QWORD *v9; // r15
  __int64 v10; // r14
  char v11; // r12
  struct _NET_BUFFER_LIST *v12; // r9
  struct _NET_BUFFER_LIST **v13; // rsi
  void *v14; // r8
  void (*v15)(void); // r13
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
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
    v13 = (struct _NET_BUFFER_LIST **)v23;
    v14 = a5;
    v15 = a6;
    v22 = a5;
    v23[2] = 0LL;
    v32 = Number;
    v23[0] = a1;
    v23[1] = a1;
    a1->Scratch = 0LL;
    a1->ChildRefCount = a2;
    if ( *a4 == 5 )
    {
      while ( *v13 )
      {
        v9 = v6;
        v10 = v6[54] + 96LL * Number;
        v11 = *(_BYTE *)(v10 + 40);
        *(_BYTE *)(v10 + 40) = 1;
        v12 = *v13;
        *v13 = 0LL;
        if ( v12 )
        {
          do
          {
            Scratch = (struct _NET_BUFFER_LIST *)v12->Scratch;
            ChildRefCount = v12->ChildRefCount;
            v12->ChildRefCount = 0;
            ndisCallSendCompleteHandler(v6, v15, v22, v12, 0, 0, ChildRefCount);
            v12 = Scratch;
          }
          while ( Scratch );
          v14 = v22;
          v9 = v6;
        }
        *(_BYTE *)(v10 + 40) = 0;
        if ( v11 )
        {
          *(_BYTE *)(v10 + 40) = 1;
          goto LABEL_9;
        }
        v6 = (_QWORD *)v6[62];
        v13 = (struct _NET_BUFFER_LIST **)(v10 + 24);
        v14 = (void *)v9[60];
        v15 = (void (*)(void))v9[59];
        Number = v32;
        v22 = v14;
        if ( *(_BYTE *)v6 != 5 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v17 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        do
        {
          v19 = (struct _NET_BUFFER_LIST *)v17->Scratch;
          v21 = v17->ChildRefCount;
          v17->ChildRefCount = 0;
          ndisCallSendCompleteHandler(v6, v15, v14, v17, 0, 0, v21);
          v14 = v22;
          v17 = v19;
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
    v30 = 1LL;
    v28 = a1;
    v29 = 0;
    if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls(a3, a1, 1u);
  }
}
