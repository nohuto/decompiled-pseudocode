/*
 * XREFs of ndisMIndicateHDSplitChange @ 0x1C005F9C0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMIndicateHDSplitChange(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // si
  KIRQL v7; // cl
  __int64 v8; // rdx

  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v8 = *(_QWORD *)(a1 + 4296);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 734177;
  if ( v8 && a3 >= 0x1C && *(_BYTE *)a2 == 0x80 && *(_WORD *)(a2 + 2) >= 0x1Cu && *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(a2 + 24);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  return v6;
}
