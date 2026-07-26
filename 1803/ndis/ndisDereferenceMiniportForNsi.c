/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C000ABF0
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00AD91C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00AF99C (ndisDeviceControlHandler.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DCA24 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v6; // al
  ULONG_PTR v7; // rcx
  KIRQL v8; // r14
  bool v9; // zf
  struct _KEVENT *v10; // rcx
  __int64 v11; // r9
  char v12; // bp
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // r14
  __int64 v16; // r10
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // al
  _BYTE *v19; // rdx
  __int64 v20; // r9
  char v21; // cl
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // rsi
  unsigned int v24; // edx
  int v25; // ecx
  struct _KEVENT *v26; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 96);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 4928);
  v8 = v6;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 71394;
  NdisDereferenceWithTag(v7);
  v9 = (*(_DWORD *)(a1 + 3132))-- == 1;
  if ( v9 )
  {
    v10 = *(struct _KEVENT **)(a1 + 3144);
    if ( v10 )
      KeSetEvent(v10, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock(v3, v8);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v11);
  v12 = 0;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  v14 = *(_QWORD *)(a1 + 4920);
  v15 = v13;
  if ( v14 && v14 - 2 > 1 )
  {
    if ( v14 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( a3 == 0xFF )
    {
      if ( (*(_BYTE *)v14 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xFFuLL);
      *(_BYTE *)v14 &= ~2u;
    }
    else
    {
      if ( a3 >= *(_BYTE *)(v14 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v14, a3);
      if ( *(_BYTE *)(v14 + 1) )
      {
        if ( *(_BYTE *)(v14 + 1) == 1 )
        {
          v22 = a3;
          v23 = v14 + ((unsigned __int64)a3 << 6);
          v24 = *(_DWORD *)(v23 + 64);
          v25 = (unsigned __int16)v24 >> 1;
          if ( v24 >> 17 < 0x3FFE && v25 == (v24 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v23 + 8));
            *(_DWORD *)(v23 + 64) &= 0x10001u;
          }
          else
          {
            if ( v25 == 0 && (v24 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v14, v22);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v23 + 8), 0);
          }
        }
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( v16 && (v17 = *(_BYTE *)(v14 + 3), v18 = 0, v17) )
        {
          while ( 1 )
          {
            v19 = (_BYTE *)(v16 + 2LL * v18);
            if ( *v19 == a3 )
            {
              v21 = v19[1];
              if ( v21 )
                break;
            }
            if ( ++v18 >= v17 )
              goto LABEL_16;
          }
          v19[1] = v21 - 1;
        }
        else
        {
LABEL_16:
          if ( !_bittestandreset((signed __int32 *)(v14 + 16), a3) )
            ndisBugCheckEx(0x1EuLL, 0LL, v14, a3);
        }
      }
    }
  }
  v9 = (*(_DWORD *)(a1 + 4472))-- == 1;
  if ( v9 )
    v12 = 1;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(unsigned int *)(a1 + 4472));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v15);
  if ( v12 )
  {
    v26 = *(struct _KEVENT **)(a1 + 1608);
    if ( v26 )
      KeSetEvent(v26, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v20);
}
