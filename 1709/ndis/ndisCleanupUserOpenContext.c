/*
 * XREFs of ndisCleanupUserOpenContext @ 0x1C0009040
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0008F70 (ndisCloseIrpHandler.c)
 *     ndisCloseHandler @ 0x1C005CF2C (ndisCloseHandler.c)
 *     NdisWdfCleanupUserOpenContext @ 0x1C0061950 (NdisWdfCleanupUserOpenContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __fastcall ndisCleanupUserOpenContext(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rsi
  KIRQL v5; // al
  KIRQL v6; // al
  KIRQL v7; // al
  ULONG_PTR v8; // r8
  KIRQL v9; // r14
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int8 v12; // r10
  int v13; // ebx
  char v14; // al
  ULONG_PTR v15; // rbx
  unsigned int v16; // edx
  struct _KEVENT *v17; // rcx
  __int64 v18; // rcx

  v2 = a1 + 4464;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  if ( a2[32] )
    --*(_DWORD *)(a1 + 3776);
  else
    --*(_DWORD *)(a1 + 3692);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  ExFreePoolWithTag(a2, 0);
  ndisReferencePackage(&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  --*(_DWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  v8 = *(_QWORD *)(a1 + 4920);
  v9 = v7;
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(v8 + 1);
    if ( *(_BYTE *)(v8 + 1) )
    {
      if ( v10 == 1 )
      {
        v15 = v8 + 5448;
        v16 = *(_DWORD *)(v8 + 5504);
        if ( v16 >> 17 < 0x3FFE && (unsigned __int16)v16 >> 1 == (v16 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v8 + 5448));
          *(_DWORD *)(v15 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v16 & 0xFFFE) == 0 && (v16 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v8, 0x55uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v8 + 5448), 0);
        }
      }
    }
    else
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 && (v12 = *(_BYTE *)(v8 + 3)) != 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v11 + 2LL * (unsigned __int8)v10) == 85 )
          {
            v14 = *(_BYTE *)(v11 + 2LL * (unsigned __int8)v10 + 1);
            if ( v14 )
              break;
          }
          LOBYTE(v10) = v10 + 1;
          if ( (unsigned __int8)v10 >= v12 )
            goto LABEL_11;
        }
        *(_BYTE *)(v11 + 2LL * (unsigned __int8)v10 + 1) = v14 - 1;
      }
      else
      {
LABEL_11:
        if ( !_bittestandreset((signed __int32 *)(v8 + 24), 0x15u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v8, 0x55uLL);
      }
    }
  }
  v13 = --*(_DWORD *)(v2 + 8);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v9);
  if ( !v13 )
  {
    v17 = *(struct _KEVENT **)(a1 + 1608);
    if ( v17 )
      KeSetEvent(v17, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 124) & 0x2000) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 4008);
    if ( v18 )
      (*(void (__fastcall **)(_QWORD))(v18 + 40))(*(_QWORD *)(v18 + 8));
  }
}
