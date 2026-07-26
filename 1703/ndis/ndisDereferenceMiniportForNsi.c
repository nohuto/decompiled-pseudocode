/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C0009D78
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00A4E40 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00D04F0 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KIRQL v6; // bp
  ULONG_PTR v7; // r8
  __int64 v8; // rax
  struct _KEVENT *v10; // rcx
  KIRQL v11; // al
  ULONG_PTR v12; // r8
  KIRQL v13; // bp
  __int64 v14; // rax
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // dl
  int v17; // edi
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // rdi
  unsigned int v22; // edx
  ULONG_PTR v23; // rdi
  unsigned int v24; // edx
  struct _KEVENT *v25; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 4928);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 72039;
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
        v20 = a2;
        v21 = v7 + ((unsigned __int64)a2 << 6);
        v22 = *(_DWORD *)(v21 + 64);
        if ( v22 >> 17 < 0x3FFE && (unsigned __int16)v22 >> 1 == (v22 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v21 + 8));
          *(_DWORD *)(v21 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v22 & 0xFFFE) == 0 && (v22 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v7, v20);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v21 + 8), 0);
        }
      }
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( v8 && (v18 = *(_BYTE *)(v7 + 3), v19 = 0, v18) )
      {
        while ( *(_BYTE *)(v8 + 2LL * v19) != a2 || !*(_BYTE *)(v8 + 2LL * v19 + 1) )
        {
          if ( ++v19 >= v18 )
            goto LABEL_5;
        }
        --*(_BYTE *)(v8 + 2LL * v19 + 1);
      }
      else
      {
LABEL_5:
        if ( !_bittestandreset((signed __int32 *)(v7 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v7, a2);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 3132))-- == 1 )
  {
    v10 = *(struct _KEVENT **)(a1 + 3144);
    if ( v10 )
      KeSetEvent(v10, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v12 = *(_QWORD *)(a1 + 4920);
  v13 = v11;
  if ( v12 )
  {
    if ( a3 == 0xFF )
    {
      *(_BYTE *)v12 &= ~2u;
    }
    else if ( *(_BYTE *)(v12 + 1) )
    {
      if ( *(_BYTE *)(v12 + 1) == 1 )
      {
        v23 = v12 + ((unsigned __int64)a3 << 6);
        v24 = *(_DWORD *)(v23 + 64);
        if ( v24 >> 17 < 0x3FFE && (unsigned __int16)v24 >> 1 == (v24 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 8));
          *(_DWORD *)(v23 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v24 & 0xFFFE) == 0 && (v24 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v12, a3);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 8), 0);
        }
      }
    }
    else
    {
      v14 = *(_QWORD *)(v12 + 8);
      if ( v14 && (v15 = *(_BYTE *)(v12 + 3), v16 = 0, v15) )
      {
        while ( *(_BYTE *)(v14 + 2LL * v16) != a3 || !*(_BYTE *)(v14 + 2LL * v16 + 1) )
        {
          if ( ++v16 >= v15 )
            goto LABEL_18;
        }
        --*(_BYTE *)(v14 + 2LL * v16 + 1);
      }
      else
      {
LABEL_18:
        if ( !_bittestandreset((signed __int32 *)(v12 + 16), a3) )
          ndisBugCheckEx(0x1EuLL, 0LL, v12, a3);
      }
    }
  }
  v17 = --*(_DWORD *)(a1 + 4472);
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v13);
  if ( !v17 )
  {
    v25 = *(struct _KEVENT **)(a1 + 1608);
    if ( v25 )
      KeSetEvent(v25, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
}
