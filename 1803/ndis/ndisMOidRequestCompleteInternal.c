/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C0045BB0
 * Callers:
 *     ndisMAbortRequests @ 0x1C00124B0 (ndisMAbortRequests.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C004318C (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043260 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C0044638 (ndisCompleteLegacyRequest.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00704CC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisReplayDirectOids @ 0x1C0070F88 (ndisReplayDirectOids.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
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
  __int64 v15; // r9
  __int64 v16[6]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(0xF8u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3);
  memset(v16, 0, sizeof(v16));
  v9 = HIDWORD(v16[5]);
  v10 = *(_DWORD *)(a2 + 88) & 0x200000;
  v16[4] = a2;
  LODWORD(v16[5]) = a3;
  if ( a4 )
    v9 = HIDWORD(v16[5]) | 1;
  v16[0] = a1;
  HIDWORD(v16[5]) = v9 | 2;
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
  ndisOidRequestComplete(v16, v11);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2313306;
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
    *(_DWORD *)(a1 + 1856) = 2313346;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  ndisDereferenceMiniport(a1, 0x4Bu, v14, v15);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xF9u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2);
}
