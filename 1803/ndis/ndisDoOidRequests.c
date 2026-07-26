/*
 * XREFs of ndisDoOidRequests @ 0x1C001F670
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A9F0 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  KIRQL v6; // al
  ULONG_PTR v7; // r8
  KIRQL v8; // r14
  __int64 v9; // rcx
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // dl
  bool v12; // zf
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // al
  KIRQL v17; // bl
  ULONG_PTR v18; // rdi
  unsigned int v19; // edx
  int v20; // ecx

  v4 = P[7];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(23LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, P, v4);
  if ( *(_BYTE *)v4 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v4, a2, a3, a4);
    ndisDereferenceMiniport(v4, 0x47u, v14, v15);
  }
  else if ( *(_BYTE *)v4 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v4, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      v17 = v16;
      *(_DWORD *)(v4 + 160) = 2297785;
      *(_BYTE *)(v4 + 240) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v4);
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v17);
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 320));
    v7 = *(_QWORD *)(v4 + 336);
    v8 = v6;
    if ( v7 - 2 <= 1 )
    {
      v7 = 0LL;
    }
    else if ( v7 < 2 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, v7, 0LL);
    }
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 2) <= 0xCu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v7, 0xCuLL);
      if ( *(_BYTE *)(v7 + 1) )
      {
        if ( *(_BYTE *)(v7 + 1) == 1 )
        {
          v18 = v7 + 776;
          v19 = *(_DWORD *)(v7 + 832);
          v20 = (unsigned __int16)v19 >> 1;
          if ( v19 >> 17 < 0x3FFE && v20 == (v19 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v7 + 776));
            *(_DWORD *)(v18 + 56) &= 0x10001u;
          }
          else
          {
            if ( v20 == 0 && (v19 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v7, 0xCuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v7 + 776), 0);
          }
        }
      }
      else
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 && (v10 = *(_BYTE *)(v7 + 3), v11 = 0, v10) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v9 + 2LL * v11) == 12 )
            {
              v13 = *(_BYTE *)(v9 + 2LL * v11 + 1);
              if ( v13 )
                break;
            }
            if ( ++v11 >= v10 )
              goto LABEL_16;
          }
          *(_BYTE *)(v9 + 2LL * v11 + 1) = v13 - 1;
        }
        else
        {
LABEL_16:
          if ( !_bittestandreset((signed __int32 *)(v7 + 16), 0xCu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v7, 0xCuLL);
        }
      }
    }
    v12 = (*(_WORD *)(v4 + 328))-- == 1;
    if ( v12 && !*(_BYTE *)(v4 + 331) )
    {
      NdisFreeRefCount(*(struct NDIS_REFCOUNT_HANDLE__ **)(v4 + 336));
      *(_QWORD *)(v4 + 336) = 1LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 320), v8);
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(24LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0LL, v4);
}
