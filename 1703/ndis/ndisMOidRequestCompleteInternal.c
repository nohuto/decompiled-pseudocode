/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C0027768
 * Callers:
 *     ndisMAbortRequests @ 0x1C0025880 (ndisMAbortRequests.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00453E4 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00454B8 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C004634C (ndisCompleteLegacyRequest.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006E5B8 (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisReplayDirectOids @ 0x1C006EFC8 (ndisReplayDirectOids.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00461C4 (ndisCancelOidRequestOnMiniport.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *v8; // rsi
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rdx
  KIRQL v12; // al
  KIRQL v13; // dl
  __int64 v14; // r8
  __int64 v15[6]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(233LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
  memset(v15, 0, sizeof(v15));
  v9 = HIDWORD(v15[5]);
  v10 = *(_DWORD *)(a2 + 88) & 0x200000;
  v15[4] = a2;
  LODWORD(v15[5]) = a3;
  if ( a4 )
    v9 = HIDWORD(v15[5]) | 1;
  v15[0] = a1;
  HIDWORD(v15[5]) = v9 | 2;
  ndisReferenceMiniportNoCheck(a1, 0x4Bu);
  if ( a4 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_DWORD *)(a1 + 4452) &= ~1u;
    *(_QWORD *)(a1 + 2224) = 0LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  }
  ndisOidRequestComplete(v15, v11);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2312892;
  if ( v10 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 && !*(_DWORD *)(a1 + 4280) )
    {
      v8 = *(struct _KEVENT **)(a1 + 4288);
      *(_QWORD *)(a1 + 4288) = 0LL;
    }
  }
  else if ( *(_QWORD *)(a1 + 2200) == a1 + 2200 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 )
    {
      v8 = *(struct _KEVENT **)(a1 + 1616);
      *(_QWORD *)(a1 + 1616) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
    if ( (unsigned int)ndisQueueRequestWorkItem((_LIST_ENTRY *)a1, 0LL, 0x11u) != 259 )
    {
      LOBYTE(v14) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v14);
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2312932;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  ndisDereferenceMiniport(a1, 0x4Bu);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(234LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
}
