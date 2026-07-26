/*
 * XREFs of ndisDoOidRequests @ 0x1C001A290
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r14
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int8 v8; // r10
  bool v9; // zf
  char v10; // al
  KIRQL v11; // al
  KIRQL v12; // bl
  ULONG_PTR v13; // rdi
  unsigned int v14; // edx

  v1 = P[7];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(23LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, P, v1);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
    ndisDereferenceMiniport(v1, 0x47u);
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      v12 = v11;
      *(_DWORD *)(v1 + 160) = 2297790;
      *(_BYTE *)(v1 + 240) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v1);
      *(_QWORD *)(v1 + 152) = 0LL;
      *(_DWORD *)(v1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v12);
    }
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 320));
    v4 = *(_QWORD *)(v1 + 336);
    v5 = v3;
    if ( v4 )
    {
      v6 = *(unsigned __int8 *)(v4 + 1);
      if ( *(_BYTE *)(v4 + 1) )
      {
        if ( v6 == 1 )
        {
          v13 = v4 + 776;
          v14 = *(_DWORD *)(v4 + 832);
          if ( v14 >> 17 < 0x3FFE && (unsigned __int16)v14 >> 1 == (v14 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
            *(_DWORD *)(v13 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v14 & 0xFFFE) == 0 && (v14 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v4 + 776), 0);
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( v7 && (v8 = *(_BYTE *)(v4 + 3)) != 0 )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v7 + 2LL * (unsigned __int8)v6) == 12 )
            {
              v10 = *(_BYTE *)(v7 + 2LL * (unsigned __int8)v6 + 1);
              if ( v10 )
                break;
            }
            LOBYTE(v6) = v6 + 1;
            if ( (unsigned __int8)v6 >= v8 )
              goto LABEL_13;
          }
          *(_BYTE *)(v7 + 2LL * (unsigned __int8)v6 + 1) = v10 - 1;
        }
        else
        {
LABEL_13:
          if ( !_bittestandreset((signed __int32 *)(v4 + 16), 0xCu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
        }
      }
    }
    v9 = (*(_WORD *)(v1 + 328))-- == 1;
    if ( v9 && !*(_BYTE *)(v1 + 331) )
    {
      NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v1 + 336));
      *(_QWORD *)(v1 + 336) = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 320), v5);
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(24LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0LL, v1);
}
