/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C000A160
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005A2A0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0043230 (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(char *Parameter)
{
  __int64 v1; // rbp
  int v3; // ebx
  KIRQL v4; // al
  struct _NDIS_REFCOUNT_BLOCK *v5; // rcx
  KIRQL v6; // bl
  KIRQL v7; // al
  KIRQL v8; // dl
  KIRQL v9; // al
  ULONG_PTR v10; // r8
  KIRQL v11; // bl
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // al
  _BYTE *v15; // rdx
  bool v16; // zf
  char v17; // cl
  __int64 v18; // r8
  ULONG_PTR v19; // r14
  unsigned int v20; // edx
  _QWORD v21[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_QWORD *)Parameter + 23);
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(53LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Parameter, v1, *(_DWORD *)(v1 + 80));
  memset(v21, 0, sizeof(v21));
  v21[2] = Parameter;
  v21[4] = v1;
  LODWORD(v21[5]) = v3;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 40);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)Parameter + 42);
  ++*((_WORD *)Parameter + 164);
  v6 = v4;
  NdisReferenceWithTag(v5);
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 40, v6);
  ndisOidRequestComplete(v21);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
  *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
  v8 = v7;
  *((_DWORD *)Parameter + 40) = 2101107;
  if ( *((char **)Parameter + 21) != Parameter + 168 )
  {
    *((_QWORD *)Parameter + 19) = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v7);
    if ( (unsigned int)ndisQueueRequestWorkItem(Parameter, 0LL, 5LL) != 259 )
    {
      LOBYTE(v18) = 1;
      ndisCancelOidRequestOnFilter(Parameter, 0LL, v18);
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 18);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2101133;
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  *((_DWORD *)Parameter + 40) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 18, v8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 40);
  v10 = *((_QWORD *)Parameter + 42);
  v11 = v9;
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 1) )
    {
      if ( *(_BYTE *)(v10 + 1) == 1 )
      {
        v19 = v10 + 1224;
        v20 = *(_DWORD *)(v10 + 1280);
        if ( v20 >> 17 < 0x3FFE && (unsigned __int16)v20 >> 1 == (v20 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
          *(_DWORD *)(v19 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v20 & 0xFFFE) == 0 && (v20 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 1224), 0);
        }
      }
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( v12 && (v13 = *(_BYTE *)(v10 + 3), v14 = 0, v13) )
      {
        while ( 1 )
        {
          v15 = (_BYTE *)(v12 + 2LL * v14);
          if ( *v15 == 19 )
          {
            v17 = v15[1];
            if ( v17 )
              break;
          }
          if ( ++v14 >= v13 )
            goto LABEL_10;
        }
        v15[1] = v17 - 1;
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
      }
    }
  }
  v16 = (*((_WORD *)Parameter + 164))-- == 1;
  if ( v16 && !Parameter[331] )
  {
    NdisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)Parameter + 42));
    *((_QWORD *)Parameter + 42) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Parameter + 40, v11);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(54LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Parameter, v1);
}
