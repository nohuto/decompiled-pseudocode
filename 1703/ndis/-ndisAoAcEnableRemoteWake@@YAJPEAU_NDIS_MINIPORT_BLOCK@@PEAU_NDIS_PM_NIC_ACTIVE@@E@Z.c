/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0070A54
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070BF0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_SF_DDLc @ 0x1C0073710 (WPP_SF_DDLc.c)
 *     WPP_SF_DDLcD @ 0x1C0073774 (WPP_SF_DDLcD.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_NIC_ACTIVE *a2,
        unsigned __int8 a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned __int8 IsD0Required; // al
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+28h] [rbp-20h]

  AoAc = a1->AoAc;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_DDLc(
      a1,
      a2,
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a2 + 4),
      a3);
  KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  IsD0Required = ndisAoAcIsD0Required(AoAc);
  if ( IsD0Required )
    AoAc->RemoteWakeEnabled = a3;
  v9 = IsD0Required == 0 ? 0xC0000001 : 0;
  KeReleaseSpinLock(v8, v7);
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    LOBYTE(v12) = a3;
    WPP_SF_DDLcD(
      *((unsigned int *)a2 + 4),
      v10,
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a2 + 4),
      v12,
      v9);
  }
  return v9;
}
