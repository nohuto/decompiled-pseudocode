/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0023190
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 Clock; // r15
  __int64 v7; // r13
  int v8; // ebp
  KIRQL v9; // r14
  unsigned __int16 v10; // ax
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // si
  __int64 v17; // r10
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // al
  _BYTE *v20; // rdx
  char v22; // di
  char v23; // cl
  _QWORD **v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  ULONG_PTR v27; // rdi
  unsigned int v28; // edx
  KIRQL v29; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v31; // bl
  struct _NDIS_M_DRIVER_BLOCK *v32; // rdx
  void *v33; // rcx
  void *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rbx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 == 17 )
  {
    v7 = *(_QWORD *)(v4 + 3784);
    v8 = 1;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
    if ( !*(_BYTE *)(v7 + 402) )
    {
      v10 = *(_WORD *)(v7 + 400);
      if ( v10 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v8 = 2;
      }
      else
      {
        v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 408);
        *(_WORD *)(v7 + 400) = v10 + 1;
        NdisReferenceWithTag(v11, 0xAu);
        v8 = 0;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v9);
    if ( !v8 )
    {
      if ( HIBYTE(dword_1C0099FD8) )
      {
        LOBYTE(v8) = 1;
        ndisTraceDpcStart(v4, 2LL, v12, v13);
        Clock = WmiGetClock(0LL, 0LL);
      }
      if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v24 = (_QWORD **)(v4 + 560);
        if ( *(_QWORD *)(v4 + 560) )
        {
          while ( 1 )
          {
            v25 = *v24;
            if ( *v24 == DeferredContext )
              break;
            v24 = (_QWORD **)*v24;
            if ( !*v25 )
              goto LABEL_33;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v24 = (_QWORD *)*DeferredContext;
        }
LABEL_33:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( (_BYTE)v8 )
      {
        v26 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v4, 2LL, v26 - Clock);
      }
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
      v15 = *(_QWORD *)(v7 + 408);
      v16 = v14;
      if ( v15 )
      {
        if ( *(_BYTE *)(v15 + 1) )
        {
          if ( *(_BYTE *)(v15 + 1) == 1 )
          {
            v27 = v15 + 648;
            v28 = *(_DWORD *)(v15 + 704);
            if ( v28 >> 17 < 0x3FFE && (unsigned __int16)v28 >> 1 == (v28 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 648));
              *(_DWORD *)(v27 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v28 & 0xFFFE) == 0 && (v28 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xAuLL);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 648), 0);
            }
          }
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( v17 && (v18 = *(_BYTE *)(v15 + 3), v19 = 0, v18) )
          {
            while ( 1 )
            {
              v20 = (_BYTE *)(v17 + 2LL * v19);
              if ( *v20 == 10 )
              {
                v23 = v20[1];
                if ( v23 )
                  break;
              }
              if ( ++v19 >= v18 )
                goto LABEL_19;
            }
            v20[1] = v23 - 1;
          }
          else
          {
LABEL_19:
            if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xAu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xAuLL);
          }
        }
      }
      if ( (*(_WORD *)(v7 + 400))-- == 1 )
      {
        v22 = 1;
        if ( !*(_BYTE *)(v7 + 403) )
        {
          NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 408));
          *(_QWORD *)(v7 + 408) = 0LL;
        }
      }
      else
      {
        v22 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v16);
      if ( v22 )
      {
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(23LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v7);
        v29 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        p_NextDriver = &ndisMiniDriverList;
        v31 = v29;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v32 = *p_NextDriver;
            if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v7 )
              break;
            p_NextDriver = &v32->NextDriver;
            if ( !v32->NextDriver )
              goto LABEL_51;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_51:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v31);
        v33 = *(void **)(v7 + 888);
        if ( v33 )
        {
          ExFreePoolWithTag(v33, 0);
          *(_QWORD *)(v7 + 888) = 0LL;
        }
        v34 = *(void **)(v7 + 32);
        if ( v34 )
        {
          ExFreePoolWithTag(v34, 0);
          *(_QWORD *)(v7 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
        {
          v35 = *(_QWORD **)(v7 + 96);
          if ( v35 )
          {
            do
            {
              v36 = (_QWORD *)*v35;
              ExFreePoolWithTag(v35, 0);
              v35 = v36;
            }
            while ( v36 );
          }
        }
        KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_q(24LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v7);
      }
    }
  }
}
