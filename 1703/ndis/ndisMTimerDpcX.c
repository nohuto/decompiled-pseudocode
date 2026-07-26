/*
 * XREFs of ndisMTimerDpcX @ 0x1C000F9B0
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r12
  __int64 v5; // rdi
  KIRQL v6; // r15
  int v7; // esi
  unsigned __int16 v8; // ax
  __int64 v9; // rsi
  _WORD *v10; // rdx
  char v11; // si
  __int64 v12; // rdx
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // bp
  __int64 v16; // rax
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // dl
  bool v19; // zf
  __int16 v20; // si
  __int64 v21; // r10
  unsigned __int8 v22; // r9
  unsigned __int8 v23; // r8
  _BYTE *v24; // rcx
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // dl
  _QWORD *i; // rcx
  __int64 v28; // rax
  ULONG_PTR v29; // rsi
  unsigned int v30; // edx
  KIRQL v31; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  KIRQL v33; // bl
  struct _NDIS_M_DRIVER_BLOCK *v34; // rdx
  void *v35; // rcx
  void *v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx

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
      v9 = *(_QWORD *)(v5 + 408);
      *(_WORD *)(v5 + 400) = v8 + 1;
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 1) )
        {
          if ( *(_BYTE *)(v9 + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v9 + 712), 1u);
        }
        else
        {
          v10 = 0LL;
          if ( _bittestandset((signed __int32 *)(v9 + 16), 0xBu) )
          {
            v21 = *(_QWORD *)(v9 + 8);
            if ( !v21 )
              goto LABEL_86;
            v22 = *(_BYTE *)(v9 + 3);
            v23 = 0;
            if ( !v22 )
              goto LABEL_86;
            do
            {
              v24 = (_BYTE *)(v21 + 2LL * v23);
              if ( *v24 == 11 )
              {
                if ( v24[1] != 0xFF )
                {
                  ++v24[1];
                  goto LABEL_6;
                }
              }
              else if ( !v24[1] )
              {
                v10 = (_WORD *)(v21 + 2LL * v23);
              }
              ++v23;
            }
            while ( v23 < v22 );
            if ( v10 )
            {
              *v10 = 267;
            }
            else
            {
LABEL_86:
              if ( !*(_BYTE *)(v9 + 1) )
              {
                v25 = *(_BYTE *)(v9 + 3);
                if ( v25 == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v9);
                  *(_BYTE *)(v9 + 1) = 2;
                }
                else
                {
                  if ( (unsigned int)v25 + 2 <= 0xFF )
                    v26 = v25 + 2;
                  else
                    v26 = -1;
                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v9, v26);
                }
              }
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v9);
            }
          }
        }
      }
LABEL_6:
      v7 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v6);
  if ( !v7 )
  {
    if ( HIBYTE(dword_1C0093FD8) )
    {
      v11 = 1;
      ndisTraceDpcStart(v2, 2LL);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(a2 + 144);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 3784) + 26LL) & 2) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1880));
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
    if ( v11 )
    {
      v28 = WmiGetClock(0LL, 0LL);
      ndisTraceDpcEnd(v2, 2LL, v28 - Clock);
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
    v14 = *(_QWORD *)(v5 + 408);
    v15 = v13;
    if ( v14 )
    {
      if ( *(_BYTE *)(v14 + 1) )
      {
        if ( *(_BYTE *)(v14 + 1) == 1 )
        {
          v29 = v14 + 712;
          v30 = *(_DWORD *)(v14 + 768);
          if ( v30 >> 17 < 0x3FFE && (unsigned __int16)v30 >> 1 == (v30 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 712));
            *(_DWORD *)(v29 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v30 & 0xFFFE) == 0 && (v30 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xBuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 712), 0);
          }
        }
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( v16 && (v17 = *(_BYTE *)(v14 + 3), v18 = 0, v17) )
        {
          while ( *(_BYTE *)(v16 + 2LL * v18) != 11 || !*(_BYTE *)(v16 + 2LL * v18 + 1) )
          {
            if ( ++v18 >= v17 )
              goto LABEL_21;
          }
          --*(_BYTE *)(v16 + 2LL * v18 + 1);
        }
        else
        {
LABEL_21:
          if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xBu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xBuLL);
        }
      }
    }
    v19 = (*(_WORD *)(v5 + 400))-- == 1;
    v20 = *(_WORD *)(v5 + 400);
    if ( v19 && !*(_BYTE *)(v5 + 403) )
    {
      NdisFreeRefCount(*(PVOID *)(v5 + 408));
      *(_QWORD *)(v5 + 408) = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v15);
    if ( !v20 )
    {
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(23LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v5);
      v31 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      p_NextDriver = &ndisMiniDriverList;
      v33 = v31;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v34 = *p_NextDriver;
          if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)v5 )
            break;
          p_NextDriver = &v34->NextDriver;
          if ( !v34->NextDriver )
            goto LABEL_74;
        }
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v5 + 8);
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_74:
      KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
      v35 = *(void **)(v5 + 888);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        *(_QWORD *)(v5 + 888) = 0LL;
      }
      v36 = *(void **)(v5 + 32);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *(_QWORD *)(v5 + 32) = 0LL;
      }
      if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
      {
        KeWaitForSingleObject((PVOID)(v5 + 416), Executive, 0, 0, 0LL);
        v37 = *(_QWORD **)(v5 + 96);
        *(_QWORD *)(v5 + 472) = KeGetCurrentThread();
        if ( v37 )
        {
          do
          {
            v38 = (_QWORD *)*v37;
            ExFreePoolWithTag(v37, 0);
            v37 = v38;
          }
          while ( v38 );
        }
        *(_QWORD *)(v5 + 472) = 0LL;
        KeReleaseMutex((PRKMUTEX)(v5 + 416), 0);
      }
      KeSetEvent((PRKEVENT)(v5 + 368), 0, 0);
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(24LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v5);
    }
  }
}
