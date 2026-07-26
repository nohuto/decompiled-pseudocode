/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C00449E0
 * Callers:
 *     ndisMAbortRequests @ 0x1C0001808 (ndisMAbortRequests.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0042128 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00421FC (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C004354C (ndisCompleteLegacyRequest.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006FC78 (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisReplayDirectOids @ 0x1C0070738 (ndisReplayDirectOids.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00433C4 (ndisCancelOidRequestOnMiniport.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *v8; // rsi
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rdx
  KIRQL v12; // al
  KIRQL v13; // dl
  _QWORD v14[6]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(251LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, a3);
  memset(v14, 0, sizeof(v14));
  v9 = HIDWORD(v14[5]);
  v10 = *(_DWORD *)(a2 + 88) & 0x200000;
  v14[4] = a2;
  LODWORD(v14[5]) = a3;
  if ( a4 )
    v9 = HIDWORD(v14[5]) | 1;
  v14[0] = a1;
  HIDWORD(v14[5]) = v9 | 2;
  ndisReferenceMiniportNoCheck(a1);
  if ( a4 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_DWORD *)(a1 + 4452) &= ~1u;
    *(_QWORD *)(a1 + 2224) = 0LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  }
  ndisOidRequestComplete((__int64)v14, v11);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2313366;
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
    if ( (unsigned int)ndisQueueRequestWorkItem((char *)a1, 0LL, 0x11u) != 259 )
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2313406;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  ndisDereferenceMiniport(a1, 0x4Bu);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xFCu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
}
