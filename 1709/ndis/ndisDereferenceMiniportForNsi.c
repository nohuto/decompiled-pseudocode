/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C000985C
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B81A8 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DAE84 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KIRQL v6; // r14
  ULONG_PTR v7; // r8
  __int64 v8; // rcx
  unsigned __int8 v9; // r10
  unsigned __int8 v10; // dl
  char v11; // al
  struct _KEVENT *v13; // rcx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // r14
  __int64 v17; // rcx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // dl
  int v20; // edi
  char v21; // al
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // rdi
  unsigned int v24; // edx
  ULONG_PTR v25; // rdi
  unsigned int v26; // edx
  struct _KEVENT *v27; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 4928);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 71824;
  if ( v7 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)v7 &= ~2u;
    }
    else if ( *(_BYTE *)(v7 + 1) )
    {
      if ( *(_BYTE *)(v7 + 1) == 1 )
      {
        v22 = a2;
        v23 = v7 + ((unsigned __int64)a2 << 6);
        v24 = *(_DWORD *)(v23 + 64);
        if ( v24 >> 17 < 0x3FFE && (unsigned __int16)v24 >> 1 == (v24 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 8));
          *(_DWORD *)(v23 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v24 & 0xFFFE) == 0 && (v24 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v7, v22);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 8), 0);
        }
      }
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 && (v9 = *(_BYTE *)(v7 + 3), v10 = 0, v9) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v8 + 2LL * v10) == a2 )
          {
            v11 = *(_BYTE *)(v8 + 2LL * v10 + 1);
            if ( v11 )
              break;
          }
          if ( ++v10 >= v9 )
            goto LABEL_9;
        }
        *(_BYTE *)(v8 + 2LL * v10 + 1) = v11 - 1;
      }
      else
      {
LABEL_9:
        if ( !_bittestandreset((signed __int32 *)(v7 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v7, a2);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 3132))-- == 1 )
  {
    v13 = *(struct _KEVENT **)(a1 + 3144);
    if ( v13 )
      KeSetEvent(v13, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v15 = *(_QWORD *)(a1 + 4920);
  v16 = v14;
  if ( v15 )
  {
    if ( a3 == 0xFF )
    {
      *(_BYTE *)v15 &= ~2u;
    }
    else if ( *(_BYTE *)(v15 + 1) )
    {
      if ( *(_BYTE *)(v15 + 1) == 1 )
      {
        v25 = v15 + ((unsigned __int64)a3 << 6);
        v26 = *(_DWORD *)(v25 + 64);
        if ( v26 >> 17 < 0x3FFE && (unsigned __int16)v26 >> 1 == (v26 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v25 + 8));
          *(_DWORD *)(v25 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v26 & 0xFFFE) == 0 && (v26 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, a3);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v25 + 8), 0);
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
          if ( *(_BYTE *)(v17 + 2LL * v19) == a3 )
          {
            v21 = *(_BYTE *)(v17 + 2LL * v19 + 1);
            if ( v21 )
              break;
          }
          if ( ++v19 >= v18 )
            goto LABEL_22;
        }
        *(_BYTE *)(v17 + 2LL * v19 + 1) = v21 - 1;
      }
      else
      {
LABEL_22:
        if ( !_bittestandreset((signed __int32 *)(v15 + 16), a3) )
          ndisBugCheckEx(0x1EuLL, 0LL, v15, a3);
      }
    }
  }
  v20 = --*(_DWORD *)(a1 + 4472);
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v16);
  if ( !v20 )
  {
    v27 = *(struct _KEVENT **)(a1 + 1608);
    if ( v27 )
      KeSetEvent(v27, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
}
