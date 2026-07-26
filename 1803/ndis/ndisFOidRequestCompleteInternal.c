/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C000BD50
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005ABC0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C004431C (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(_QWORD *Parameter)
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
  int v21; // ecx
  _QWORD v22[6]; // [rsp+30h] [rbp-38h] BYREF

  v1 = Parameter[23];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(53LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, Parameter, v1, *(_DWORD *)(v1 + 80));
  memset(v22, 0, sizeof(v22));
  v22[2] = Parameter;
  v22[4] = v1;
  LODWORD(v22[5]) = v3;
  v4 = KeAcquireSpinLockRaiseToDpc(Parameter + 40);
  v5 = (struct _NDIS_REFCOUNT_BLOCK *)Parameter[42];
  ++*((_WORD *)Parameter + 164);
  v6 = v4;
  NdisReferenceWithTag(v5);
  KeReleaseSpinLock(Parameter + 40, v6);
  ndisOidRequestComplete(v22);
  v7 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
  Parameter[19] = KeGetCurrentThread();
  v8 = v7;
  *((_DWORD *)Parameter + 40) = 2101107;
  if ( (_QWORD *)Parameter[21] != Parameter + 21 )
  {
    Parameter[19] = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLock(Parameter + 18, v7);
    if ( (unsigned int)ndisQueueRequestWorkItem(Parameter, 0LL, 5LL) != 259 )
    {
      LOBYTE(v18) = 1;
      ndisCancelOidRequestOnFilter(Parameter, 0LL, v18);
    }
    v8 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
    Parameter[19] = KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2101133;
  }
  Parameter[19] = 0LL;
  *((_DWORD *)Parameter + 40) = 0;
  KeReleaseSpinLock(Parameter + 18, v8);
  v9 = KeAcquireSpinLockRaiseToDpc(Parameter + 40);
  v10 = Parameter[42];
  v11 = v9;
  if ( v10 - 2 > 1 )
  {
    if ( v10 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v10, 0LL);
    if ( *(_BYTE *)(v10 + 2) <= 0x13u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v10, 0x13uLL);
    if ( *(_BYTE *)(v10 + 1) )
    {
      if ( *(_BYTE *)(v10 + 1) == 1 )
      {
        v19 = v10 + 1224;
        v20 = *(_DWORD *)(v10 + 1280);
        v21 = (unsigned __int16)v20 >> 1;
        if ( v20 >> 17 < 0x3FFE && v21 == (v20 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
          *(_DWORD *)(v19 + 56) &= 0x10001u;
        }
        else
        {
          if ( v21 == 0 && (v20 & 1) == 0 )
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
            goto LABEL_12;
        }
        v15[1] = v17 - 1;
      }
      else
      {
LABEL_12:
        if ( !_bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
      }
    }
  }
  v16 = (*((_WORD *)Parameter + 164))-- == 1;
  if ( v16 && !*((_BYTE *)Parameter + 331) )
  {
    NdisFreeRefCount(Parameter[42]);
    Parameter[42] = 1LL;
  }
  KeReleaseSpinLock(Parameter + 40, v11);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(54LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, Parameter, v1);
}
