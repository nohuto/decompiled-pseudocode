/*
 * XREFs of ndisMIndicateTcpConnectionOffloadChange @ 0x1C0067680
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMIndicateTcpConnectionOffloadChange(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  char v8; // bl
  KIRQL v9; // dl
  __int64 v10; // r8

  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = *(_QWORD *)(a1 + 4120);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2033261;
  if ( v10 )
  {
    if ( a2 == 1073872899 )
    {
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *(_WORD *)(a3 + 2) >= 0x14u )
      {
        v8 = 1;
        if ( *(_BYTE *)(a3 + 1) )
        {
          *(_OWORD *)(v10 + 892) = *(_OWORD *)a3;
          *(_DWORD *)(v10 + 908) = *(_DWORD *)(a3 + 16);
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( a2 != 1073872907 )
        goto LABEL_15;
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *(_WORD *)(a3 + 2) >= 0x14u )
      {
        v8 = 1;
        if ( *(_BYTE *)(a3 + 1) )
        {
          *(_OWORD *)(v10 + 912) = *(_OWORD *)a3;
          *(_DWORD *)(v10 + 928) = *(_DWORD *)(a3 + 16);
          goto LABEL_15;
        }
      }
    }
    v8 = 0;
  }
LABEL_15:
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  return v8;
}
