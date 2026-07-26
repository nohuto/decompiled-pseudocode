/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C000B070
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005AA60 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0046030 (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(char *Parameter)
{
  __int64 v1; // rbp
  int v3; // ebx
  KIRQL v4; // al
  __int64 v5; // rbx
  KIRQL v6; // r14
  _WORD *v7; // rdx
  KIRQL v8; // dl
  KIRQL v9; // al
  ULONG_PTR v10; // r8
  KIRQL v11; // r14
  int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // r9
  bool v15; // zf
  __int64 v16; // r10
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // r8
  _BYTE *v19; // rcx
  __int64 v20; // r8
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // dl
  ULONG_PTR v23; // rbx
  unsigned int v24; // edx
  _QWORD v25[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)Parameter + 23);
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(55LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, Parameter, v1, *(_DWORD *)(v1 + 80));
  memset(v25, 0, sizeof(v25));
  v25[2] = Parameter;
  v25[4] = v1;
  LODWORD(v25[5]) = v3;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 40);
  ++*((_WORD *)Parameter + 164);
  v5 = *((_QWORD *)Parameter + 42);
  v6 = v4;
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 1) )
    {
      if ( *(_BYTE *)(v5 + 1) == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v5 + 1224), 1u);
    }
    else
    {
      v7 = 0LL;
      if ( _bittestandset((signed __int32 *)(v5 + 16), 0x13u) )
      {
        v16 = *(_QWORD *)(v5 + 8);
        if ( !v16 )
          goto LABEL_55;
        v17 = *(_BYTE *)(v5 + 3);
        v18 = 0;
        if ( !v17 )
          goto LABEL_55;
        do
        {
          v19 = (_BYTE *)(v16 + 2LL * v18);
          if ( *v19 == 19 )
          {
            if ( v19[1] != 0xFF )
            {
              ++v19[1];
              goto LABEL_6;
            }
          }
          else if ( !v19[1] )
          {
            v7 = (_WORD *)(v16 + 2LL * v18);
          }
          ++v18;
        }
        while ( v18 < v17 );
        if ( v7 )
        {
          *v7 = 275;
        }
        else
        {
LABEL_55:
          if ( !*(_BYTE *)(v5 + 1) )
          {
            v21 = *(_BYTE *)(v5 + 3);
            if ( v21 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v5);
              *(_BYTE *)(v5 + 1) = 2;
            }
            else
            {
              if ( (unsigned int)v21 + 2 <= 0xFF )
                v22 = v21 + 2;
              else
                v22 = -1;
              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v5, v22);
            }
          }
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5);
        }
      }
    }
  }
LABEL_6:
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 40, v6);
  ndisOidRequestComplete(v25);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
  *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
  *((_DWORD *)Parameter + 40) = 2101202;
  if ( *((char **)Parameter + 21) != Parameter + 168 )
  {
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v8);
    if ( (unsigned int)ndisQueueRequestWorkItem(Parameter, 0LL, 5LL) != 259 )
    {
      LOBYTE(v20) = 1;
      ndisCancelOidRequestOnFilter(Parameter, 0LL, v20);
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2101228;
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  *((_DWORD *)Parameter + 40) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 40);
  v10 = *((_QWORD *)Parameter + 42);
  v11 = v9;
  if ( v10 )
  {
    v12 = *(unsigned __int8 *)(v10 + 1);
    if ( *(_BYTE *)(v10 + 1) )
    {
      if ( v12 == 1 )
      {
        v23 = v10 + 1224;
        v24 = *(_DWORD *)(v10 + 1280);
        if ( v24 >> 17 < 0x3FFE && (unsigned __int16)v24 >> 1 == (v24 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
          *(_DWORD *)(v23 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v24 & 0xFFFE) == 0 && (v24 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 1224), 0);
        }
      }
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 && (v14 = *(_BYTE *)(v10 + 3)) != 0 )
      {
        while ( *(_BYTE *)(v13 + 2LL * (unsigned __int8)v12) != 19 || !*(_BYTE *)(v13 + 2LL * (unsigned __int8)v12 + 1) )
        {
          LOBYTE(v12) = v12 + 1;
          if ( (unsigned __int8)v12 >= v14 )
            goto LABEL_13;
        }
        --*(_BYTE *)(v13 + 2LL * (unsigned __int8)v12 + 1);
      }
      else
      {
LABEL_13:
        if ( !_bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
      }
    }
  }
  v15 = (*((_WORD *)Parameter + 164))-- == 1;
  if ( v15 && !Parameter[331] )
  {
    NdisFreeRefCount(*((PVOID *)Parameter + 42));
    *((_QWORD *)Parameter + 42) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 40, v11);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(56LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, Parameter, v1);
}
