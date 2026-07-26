/*
 * XREFs of ndisMTimerDpcX @ 0x1C0009FC0
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r12
  __int64 v5; // rdi
  KIRQL v6; // r15
  int v7; // ebp
  unsigned __int16 v8; // ax
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // bp
  __int64 v13; // rdx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rcx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // dl
  bool v20; // zf
  __int16 v21; // si
  char v22; // al
  _QWORD *i; // rcx
  __int64 v24; // rax
  ULONG_PTR v25; // rsi
  unsigned int v26; // edx
  KIRQL v27; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v29; // bl
  struct _NDIS_M_DRIVER_BLOCK *v30; // rdx
  void *v31; // rcx
  void *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx

  v2 = *(_QWORD *)(a2 + 144);
  Clock = 0LL;
  v5 = *(_QWORD *)(v2 + 3784);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
  v7 = 1;
  if ( !*(_BYTE *)(v5 + 402) )
  {
    v8 = *(_WORD *)(v5 + 400);
    if ( v8 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v7 = 2;
    }
    else
    {
      v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 408);
      *(_WORD *)(v5 + 400) = v8 + 1;
      NdisReferenceWithTag(v9);
      v7 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v6);
  if ( !v7 )
  {
    if ( HIBYTE(dword_1C0099FD8) )
    {
      v12 = 1;
      ndisTraceDpcStart(v2, 2LL, v10, v11);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(a2 + 144);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 3784) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1880));
      for ( i = (_QWORD *)(v2 + 560); *i; i = (_QWORD *)(*i + 152LL) )
      {
        if ( *i == a2 )
        {
          if ( !*(_DWORD *)(a2 + 60) )
            *i = *(_QWORD *)(a2 + 152);
          break;
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a2 + 144) + 1880LL));
    }
    if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128))(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
    if ( v12 )
    {
      v24 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v2, 2LL, v24 - Clock);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
    v15 = *(_QWORD *)(v5 + 408);
    v16 = v14;
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( *(_BYTE *)(v15 + 1) == 1 )
        {
          v25 = v15 + 712;
          v26 = *(_DWORD *)(v15 + 768);
          if ( v26 >> 17 < 0x3FFE && (unsigned __int16)v26 >> 1 == (v26 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 712));
            *(_DWORD *)(v25 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v26 & 0xFFFE) == 0 && (v26 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 712), 0);
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
            if ( *(_BYTE *)(v17 + 2LL * v19) == 11 )
            {
              v22 = *(_BYTE *)(v17 + 2LL * v19 + 1);
              if ( v22 )
                break;
            }
            if ( ++v19 >= v18 )
              goto LABEL_18;
          }
          *(_BYTE *)(v17 + 2LL * v19 + 1) = v22 - 1;
        }
        else
        {
LABEL_18:
          if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
        }
      }
    }
    v20 = (*(_WORD *)(v5 + 400))-- == 1;
    v21 = *(_WORD *)(v5 + 400);
    if ( v20 && !*(_BYTE *)(v5 + 403) )
    {
      NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 408));
      *(_QWORD *)(v5 + 408) = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v16);
    if ( !v21 )
    {
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(23LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v5);
      v27 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      p_NextDriver = &ndisMiniDriverList;
      v29 = v27;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v30 = *p_NextDriver;
          if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v5 )
            break;
          p_NextDriver = &v30->NextDriver;
          if ( !v30->NextDriver )
            goto LABEL_51;
        }
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v5 + 8);
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_51:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v29);
      v31 = *(void **)(v5 + 888);
      if ( v31 )
      {
        ExFreePoolWithTag(v31, 0);
        *(_QWORD *)(v5 + 888) = 0LL;
      }
      v32 = *(void **)(v5 + 32);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
      {
        v33 = *(_QWORD **)(v5 + 96);
        if ( v33 )
        {
          do
          {
            v34 = (_QWORD *)*v33;
            ExFreePoolWithTag(v33, 0);
            v33 = v34;
          }
          while ( v34 );
        }
      }
      KeSetEvent((PRKEVENT)(v5 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(24LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v5);
    }
  }
}
