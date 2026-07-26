/*
 * XREFs of ndisAoAcInitDisconnectedStandby @ 0x1C0050370
 * Callers:
 *     ndisDriverReinit @ 0x1C00BE800 (ndisDriverReinit.c)
 * Callees:
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004CEFC (ndisUpdateAndIndicatePMCapabilities.c)
 */

void ndisAoAcInitDisconnectedStandby()
{
  unsigned __int8 v0; // al
  KIRQL v1; // al
  struct _NDIS_M_DRIVER_BLOCK *v2; // rdi
  KIRQL v3; // bp
  __int64 i; // rbx
  int v5; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 1;
  if ( ZwPowerInformation(PowerInformationInternal, &v6, 8u, &v8, 8u) < 0 )
  {
    v0 = ndisEnforceDisconnectedStandby;
LABEL_6:
    if ( !v0 )
      return;
    goto LABEL_7;
  }
  if ( (v8 & 0x20000000000LL) == 0 )
  {
    v0 = 0;
    ndisEnforceDisconnectedStandby = 0;
    goto LABEL_6;
  }
  ndisEnforceDisconnectedStandby = 1;
LABEL_7:
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v2 = ndisMiniDriverList;
  v3 = v1;
  while ( v2 )
  {
    KeAcquireSpinLockAtDpcLevel(&v2->Ref.SpinLock);
    for ( i = (__int64)v2->MiniportQueue; i; i = *(_QWORD *)(i + 8) )
    {
      v5 = *(_DWORD *)(i + 124);
      if ( (v5 & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(i + 2688) & 0x200) != 0 )
      {
        *(_DWORD *)(i + 3888) |= 0x10u;
        *(_DWORD *)(i + 124) = v5 & 0xFFFFFFBF;
        ndisUpdateAndIndicatePMCapabilities(i);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v2->Ref.SpinLock);
    v2 = v2->NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v3);
}
