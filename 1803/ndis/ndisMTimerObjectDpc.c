/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0011410
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
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
  __int64 v23; // r9
  char v24; // cl
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  ULONG_PTR v30; // rdi
  unsigned int v31; // edx
  int v32; // ecx
  KIRQL v33; // al
  struct _NDIS_M_DRIVER_BLOCK *v34; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v36; // bl
  PVOID v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *v41; // rbx
  __int64 v42; // r9

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
      if ( HIBYTE(dword_1C009AF18) )
      {
        LOBYTE(v8) = 1;
        ndisTraceDpcStart(v4, 2LL);
        Clock = WmiGetClock(0LL, 0LL, v25, v26);
      }
      if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v27 = (_QWORD *)(v4 + 560);
        v28 = *(_QWORD **)(v4 + 560);
        if ( v28 )
        {
          while ( v28 != DeferredContext )
          {
            v27 = v28;
            v28 = (_QWORD *)*v28;
            if ( !v28 )
              goto LABEL_35;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v27 = *DeferredContext;
        }
LABEL_35:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( (_BYTE)v8 )
      {
        v29 = WmiGetClock(0LL, 0LL, v12, v13);
        ndisTraceDpcEnd(v4, 2LL, v29 - Clock);
      }
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
      v15 = *(_QWORD *)(v7 + 408);
      v16 = v14;
      if ( v15 - 2 > 1 )
      {
        if ( v15 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v15, 0LL);
        if ( *(_BYTE *)(v15 + 2) <= 0xAu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v15, 0xAuLL);
        if ( *(_BYTE *)(v15 + 1) )
        {
          if ( *(_BYTE *)(v15 + 1) == 1 )
          {
            v30 = v15 + 648;
            v31 = *(_DWORD *)(v15 + 704);
            v32 = (unsigned __int16)v31 >> 1;
            if ( v31 >> 17 < 0x3FFE && v32 == (v31 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 648));
              *(_DWORD *)(v30 + 56) &= 0x10001u;
            }
            else
            {
              if ( v32 == 0 && (v31 & 1) == 0 )
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
                v24 = v20[1];
                if ( v24 )
                  break;
              }
              if ( ++v19 >= v18 )
                goto LABEL_21;
            }
            v20[1] = v24 - 1;
          }
          else
          {
LABEL_21:
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
          NdisFreeRefCount(*(_QWORD *)(v7 + 408));
          *(_QWORD *)(v7 + 408) = 1LL;
        }
      }
      else
      {
        v22 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v16);
      if ( v22 )
      {
        if ( (unsigned __int8)byte_1C009961B >= 4u )
          WPP_SF_q(23LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v7, v23);
        v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v34 = ndisMiniDriverList;
        p_NextDriver = &ndisMiniDriverList;
        v36 = v33;
        if ( ndisMiniDriverList )
        {
          while ( v34 != (struct _NDIS_M_DRIVER_BLOCK *)v7 )
          {
            p_NextDriver = &v34->NextDriver;
            v34 = v34->NextDriver;
            if ( !v34 )
              goto LABEL_55;
          }
          v37 = ndisDriverObject;
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
          ObfDereferenceObject(v37);
        }
LABEL_55:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v36);
        v38 = *(void **)(v7 + 888);
        if ( v38 )
        {
          ExFreePoolWithTag(v38, 0);
          *(_QWORD *)(v7 + 888) = 0LL;
        }
        v39 = *(void **)(v7 + 32);
        if ( v39 )
        {
          ExFreePoolWithTag(v39, 0);
          *(_QWORD *)(v7 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
        {
          v40 = *(_QWORD **)(v7 + 96);
          if ( v40 )
          {
            do
            {
              v41 = (_QWORD *)*v40;
              ExFreePoolWithTag(v40, 0);
              v40 = v41;
            }
            while ( v41 );
          }
        }
        KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C009961B >= 4u )
          WPP_SF_q(24LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v7, v42);
      }
    }
  }
}
