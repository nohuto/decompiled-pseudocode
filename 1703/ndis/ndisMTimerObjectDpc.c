/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C00247F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C0050E8C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F70 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbp
  __int64 Clock; // r12
  __int64 v7; // rdi
  KIRQL v8; // r14
  int v9; // ebx
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  _WORD *v12; // rdx
  char v13; // r14
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rax
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  bool v20; // zf
  __int16 v21; // bx
  __int64 v22; // r10
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // r8
  _BYTE *v25; // rcx
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // dl
  _QWORD **v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  ULONG_PTR v31; // rbx
  unsigned int v32; // edx
  KIRQL v33; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v35; // bl
  struct _NDIS_M_DRIVER_BLOCK *v36; // rdx
  void *v37; // rcx
  void *v38; // rcx
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 == 17 )
  {
    v7 = *(_QWORD *)(v4 + 3784);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
    v9 = 1;
    if ( !*(_BYTE *)(v7 + 402) )
    {
      v10 = *(_WORD *)(v7 + 400);
      if ( v10 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v9 = 2;
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 408);
        *(_WORD *)(v7 + 400) = v10 + 1;
        if ( v11 )
        {
          if ( *(_BYTE *)(v11 + 1) )
          {
            if ( *(_BYTE *)(v11 + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 648), 1u);
          }
          else
          {
            v12 = 0LL;
            if ( _bittestandset((signed __int32 *)(v11 + 16), 0xAu) )
            {
              v22 = *(_QWORD *)(v11 + 8);
              if ( !v22 )
                goto LABEL_86;
              v23 = *(_BYTE *)(v11 + 3);
              v24 = 0;
              if ( !v23 )
                goto LABEL_86;
              do
              {
                v25 = (_BYTE *)(v22 + 2LL * v24);
                if ( *v25 == 10 )
                {
                  if ( v25[1] != 0xFF )
                  {
                    ++v25[1];
                    goto LABEL_7;
                  }
                }
                else if ( !v25[1] )
                {
                  v12 = (_WORD *)(v22 + 2LL * v24);
                }
                ++v24;
              }
              while ( v24 < v23 );
              if ( v12 )
              {
                *v12 = 266;
              }
              else
              {
LABEL_86:
                if ( !*(_BYTE *)(v11 + 1) )
                {
                  v26 = *(_BYTE *)(v11 + 3);
                  if ( v26 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v11);
                    *(_BYTE *)(v11 + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v26 + 2 <= 0xFF )
                      v27 = v26 + 2;
                    else
                      v27 = -1;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v11, v27);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11, 0xAu);
              }
            }
          }
        }
LABEL_7:
        v9 = 0;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v8);
    if ( !v9 )
    {
      if ( HIBYTE(dword_1C0093FD8) )
      {
        v13 = 1;
        ndisTraceDpcStart(v4, 2LL);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        v13 = 0;
      }
      if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
        v28 = (_QWORD **)(v4 + 560);
        if ( *(_QWORD *)(v4 + 560) )
        {
          while ( 1 )
          {
            v29 = *v28;
            if ( *v28 == DeferredContext )
              break;
            v28 = (_QWORD **)*v28;
            if ( !*v29 )
              goto LABEL_56;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            *v28 = (_QWORD *)*DeferredContext;
        }
LABEL_56:
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
      }
      if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
      if ( v13 )
      {
        v30 = WmiGetClock(0LL, 0LL);
        ndisTraceDpcEnd(v4, 2LL, v30 - Clock);
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
            v31 = v15 + 648;
            v32 = *(_DWORD *)(v15 + 704);
            if ( v32 >> 17 < 0x3FFE && (unsigned __int16)v32 >> 1 == (v32 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 648));
              *(_DWORD *)(v31 + 56) &= 0x10001u;
            }
            else
            {
              if ( (v32 & 0xFFFE) == 0 && (v32 & 1) == 0 )
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
            while ( *(_BYTE *)(v17 + 2LL * v19) != 10 || !*(_BYTE *)(v17 + 2LL * v19 + 1) )
            {
              if ( ++v19 >= v18 )
                goto LABEL_22;
            }
            --*(_BYTE *)(v17 + 2LL * v19 + 1);
          }
          else
          {
LABEL_22:
            if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xAu) )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xAuLL);
          }
        }
      }
      v20 = (*(_WORD *)(v7 + 400))-- == 1;
      v21 = *(_WORD *)(v7 + 400);
      if ( v20 && !*(_BYTE *)(v7 + 403) )
      {
        NdisFreeRefCount(*(PVOID *)(v7 + 408));
        *(_QWORD *)(v7 + 408) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v16);
      if ( !v21 )
      {
        if ( (unsigned __int8)byte_1C009261B >= 4u )
          WPP_SF_q(23LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v7);
        v33 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        p_NextDriver = &ndisMiniDriverList;
        v35 = v33;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v36 = *p_NextDriver;
            if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v7 )
              break;
            p_NextDriver = &v36->NextDriver;
            if ( !v36->NextDriver )
              goto LABEL_74;
          }
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_74:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v35);
        v37 = *(void **)(v7 + 888);
        if ( v37 )
        {
          ExFreePoolWithTag(v37, 0);
          *(_QWORD *)(v7 + 888) = 0LL;
        }
        v38 = *(void **)(v7 + 32);
        if ( v38 )
        {
          ExFreePoolWithTag(v38, 0);
          *(_QWORD *)(v7 + 32) = 0LL;
        }
        if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
        {
          KeWaitForSingleObject((PVOID)(v7 + 416), Executive, 0, 0, 0LL);
          v39 = *(_QWORD **)(v7 + 96);
          *(_QWORD *)(v7 + 472) = KeGetCurrentThread();
          if ( v39 )
          {
            do
            {
              v40 = (_QWORD *)*v39;
              ExFreePoolWithTag(v39, 0);
              v39 = v40;
            }
            while ( v40 );
          }
          *(_QWORD *)(v7 + 472) = 0LL;
          KeReleaseMutex((PRKMUTEX)(v7 + 416), 0);
        }
        KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
        if ( (unsigned __int8)byte_1C009261B >= 4u )
          WPP_SF_q(24LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v7);
      }
    }
  }
}
