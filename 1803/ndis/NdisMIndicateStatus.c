/*
 * XREFs of NdisMIndicateStatus @ 0x1C005E960
 * Callers:
 *     <none>
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019E80 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  char v8; // si
  KIRQL v9; // dl
  __int64 v10; // r8
  int *v11; // rax
  KIRQL v12; // dl
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-89h] BYREF
  int v14; // [rsp+24h] [rbp-85h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v16[5]; // [rsp+A0h] [rbp-9h] BYREF

  v8 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0xB3u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportHandle, GeneralStatus);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = GeneralStatus;
  StatusIndication.StatusBuffer = StatusBuffer;
  StatusIndication.StatusBufferSize = StatusBufferSize;
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[1]) = *((_DWORD *)MiniportHandle + 87);
  v16[2] = *((_QWORD *)MiniportHandle + 346);
  v16[3] = *((_QWORD *)MiniportHandle + 347);
  v16[4] = *(_QWORD *)((char *)MiniportHandle + 812);
  LODWORD(v16[0]) = 2621824;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
    *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportHandle + 464) = 733097;
    if ( GeneralStatus == 1073807372 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v8 = 1;
      *((_DWORD *)MiniportHandle + 86) = 2;
      HIDWORD(v16[0]) = 2;
    }
    if ( GeneralStatus == 1073807371 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v8 = 1;
      *((_DWORD *)MiniportHandle + 86) = 1;
      HIDWORD(v16[0]) = 1;
    }
    if ( v8 )
    {
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = v16;
      StatusIndication.StatusBufferSize = 40;
    }
    v9 = NewIrql[0];
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    *((_DWORD *)MiniportHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v9);
    goto LABEL_11;
  }
  if ( GeneralStatus == 1073807379 )
  {
LABEL_11:
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
    ndisIndicateStatusInternal((__int64)MiniportHandle, (__int128 *)&StatusIndication, v10);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql[0]);
    goto LABEL_25;
  }
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportHandle + 464) = 733171;
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v11 = &v14;
      StatusIndication.StatusCode = 1073807384;
      v14 = 1;
      StatusIndication.StatusBufferSize = 4;
      goto LABEL_23;
    }
    HIDWORD(v16[0]) = 1;
    v8 = 1;
  }
  if ( GeneralStatus == 1073807372 )
  {
    HIDWORD(v16[0]) = 2;
    v8 = 1;
  }
  if ( !v8 )
    goto LABEL_24;
  StatusIndication.StatusCode = 1073807383;
  v11 = (int *)v16;
  StatusIndication.StatusBufferSize = 40;
LABEL_23:
  StatusIndication.StatusBuffer = v11;
LABEL_24:
  v12 = NewIrql[0];
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  *((_DWORD *)MiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v12);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_25:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0xB4u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportHandle, GeneralStatus);
}
