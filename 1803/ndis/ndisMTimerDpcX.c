/*
 * XREFs of ndisMTimerDpcX @ 0x1C000F2F0
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
  __int16 v20; // si
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *i; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG_PTR v27; // rsi
  unsigned int v28; // edx
  int v29; // ecx
  char v30; // al
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK *v32; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v34; // bl
  PVOID v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  _QWORD *v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // r9

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
      NdisReferenceWithTag(v9, 0xBu);
      v7 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v6);
  if ( !v7 )
  {
    if ( HIBYTE(dword_1C009AF18) )
    {
      v12 = 1;
      ndisTraceDpcStart(v2, 2LL);
      Clock = WmiGetClock(0LL, 0LL, v22, v23);
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(a2 + 144);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 3784) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 1880));
      for ( i = (__int64 *)(v2 + 560); ; i = (__int64 *)(v25 + 152) )
      {
        v25 = *i;
        if ( !*i )
          break;
        if ( v25 == a2 )
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
      v26 = WmiGetClock(0LL, 0LL, v10, v11);
      ndisTraceDpcEnd(v2, 2LL, v26 - Clock);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
    v15 = *(_QWORD *)(v5 + 408);
    v16 = v14;
    if ( v15 - 2 <= 1 )
    {
      v15 = 0LL;
    }
    else if ( v15 < 2 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, v15, 0LL);
    }
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 2) <= 0xBu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v15, 0xBuLL);
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( *(_BYTE *)(v15 + 1) == 1 )
        {
          v27 = v15 + 712;
          v28 = *(_DWORD *)(v15 + 768);
          v29 = (unsigned __int16)v28 >> 1;
          if ( v28 >> 17 < 0x3FFE && v29 == (v28 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 712));
            *(_DWORD *)(v27 + 56) &= 0x10001u;
          }
          else
          {
            if ( v29 == 0 && (v28 & 1) == 0 )
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
              v30 = *(_BYTE *)(v17 + 2LL * v19 + 1);
              if ( v30 )
                break;
            }
            if ( ++v19 >= v18 )
              goto LABEL_21;
          }
          *(_BYTE *)(v17 + 2LL * v19 + 1) = v30 - 1;
        }
        else
        {
LABEL_21:
          if ( !_bittestandreset((signed __int32 *)(v15 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 0xBuLL);
        }
      }
    }
    v20 = *(_WORD *)(v5 + 400) - 1;
    *(_WORD *)(v5 + 400) = v20;
    if ( !v20 && !*(_BYTE *)(v5 + 403) )
    {
      NdisFreeRefCount(*(_QWORD *)(v5 + 408));
      *(_QWORD *)(v5 + 408) = 1LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v16);
    if ( !v20 )
    {
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(23LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v5, v21);
      v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v32 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      v34 = v31;
      while ( v32 )
      {
        if ( v32 == (struct _NDIS_M_DRIVER_BLOCK *)v5 )
        {
          v35 = ndisDriverObject;
          *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v5 + 8);
          ObfDereferenceObject(v35);
          break;
        }
        p_NextDriver = &v32->NextDriver;
        v32 = v32->NextDriver;
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v34);
      v36 = *(void **)(v5 + 888);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *(_QWORD *)(v5 + 888) = 0LL;
      }
      v37 = *(void **)(v5 + 32);
      if ( v37 )
      {
        ExFreePoolWithTag(v37, 0);
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
      {
        v38 = *(_QWORD **)(v5 + 96);
        if ( v38 )
        {
          do
          {
            v39 = (_QWORD *)*v38;
            ExFreePoolWithTag(v38, 0);
            v38 = v39;
          }
          while ( v39 );
        }
      }
      KeSetEvent((PRKEVENT)(v5 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(24LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v5, v40);
    }
  }
}
