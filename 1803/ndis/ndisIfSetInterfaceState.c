/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C0018DFC
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ndisUpdateOperationalStatus @ 0x1C0017164 (ndisUpdateOperationalStatus.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C00479B0 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C0017008 (ndisIsDefaultPortStateOperational.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001A0DC (ndisNsiScheduleIfBlockRodChangeNotification.c)
 */

char __fastcall ndisIfSetInterfaceState(__int64 a1, char a2, KIRQL a3)
{
  int v3; // ebx
  char v6; // bp
  __int64 v7; // rsi
  KIRQL v8; // bl
  int v9; // ecx
  int v10; // edx
  int v11; // r12d
  int v12; // r9d
  KIRQL v13; // cl
  KIRQL v14; // al
  __int64 v15; // rbx
  KIRQL v16; // si
  __int64 v18; // rdx
  struct _KEVENT *v19; // rcx

  v3 = *(_DWORD *)(a1 + 4092);
  *(_DWORD *)(a1 + 4092) = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 2256) == 1 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 480) != 1 )
  {
    *(_DWORD *)(a1 + 4092) = 2;
LABEL_10:
    *(_DWORD *)(a1 + 4088) = 2;
    goto LABEL_11;
  }
  if ( ndisIsDefaultPortStateOperational((_DWORD *)a1) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 2256) - 5) <= 1 )
    {
      *(_DWORD *)(a1 + 4092) |= 4u;
      *(_DWORD *)(a1 + 4088) = 5;
    }
    else
    {
      *(_QWORD *)(a1 + 4088) = 1LL;
      if ( (v3 & 8) != 0 )
        *(_DWORD *)(a1 + 4092) = 0x1000000;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4092) |= 1u;
    *(_DWORD *)(a1 + 4088) = 2;
  }
LABEL_11:
  v7 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 4056) )
  {
    v7 = *(_QWORD *)(a1 + 4064);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 1448), 0xAu);
    ++*(_DWORD *)(v7 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v8);
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 4088);
    v10 = *(_DWORD *)(v7 + 1112);
    v11 = *(_DWORD *)(v7 + 1220);
    *(_DWORD *)(v7 + 1112) = v9;
    *(_DWORD *)(v7 + 1192) = *(_DWORD *)(a1 + 4084);
    v12 = *(_DWORD *)(a1 + 480);
    *(_DWORD *)(v7 + 1220) = v12;
    *(_DWORD *)(v7 + 1224) = *(_DWORD *)(a1 + 488);
    *(_QWORD *)(v7 + 1208) = *(_QWORD *)(a1 + 800);
    *(_QWORD *)(v7 + 1200) = *(_QWORD *)(a1 + 792);
    *(_DWORD *)(v7 + 1116) = *(_DWORD *)(a1 + 4092);
    if ( v10 == v9 || (v6 = 1, !a2) )
    {
      v13 = a3;
    }
    else
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), a3);
      ndisNsiScheduleIfBlockRodChangeNotification(v7, v7 + 1112, 8LL, 536LL);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 2244077;
      v12 = *(_DWORD *)(v7 + 1220);
    }
    if ( v11 != v12 && a2 )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
      ndisNsiScheduleIfBlockRodChangeNotification(v7, v7 + 1220, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1856) = 2244090;
    }
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    v15 = *(_QWORD *)(a1 + 4064);
    v16 = v14;
    NdisDereferenceWithTag(*(_QWORD *)(v15 + 1448), 0xAu);
    if ( (*(_DWORD *)(v15 + 1404))-- == 1 )
    {
      v18 = *(_QWORD *)(v15 + 1416);
      if ( v18 )
      {
        v19 = *(struct _KEVENT **)(v18 + 4072);
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v16);
  }
  return v6;
}
