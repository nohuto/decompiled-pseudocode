/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x14058C660
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14058C8FC (PnpTraceDmaGuardDevicePolicy.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  v4 = PnpSetObjectProperty(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(a1 + 48),
         1u,
         a2,
         0LL,
         (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
         7,
         (__int64)&v6,
         4u,
         0);
  if ( *(_QWORD *)(a1 + 720) )
  {
    PnpTraceDmaGuardDevicePolicy(a1, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 720) + 8LL) = (v6 == 2) | *(_BYTE *)(*(_QWORD *)(a1 + 720) + 8LL) & 0xFE;
  }
  return v4;
}
