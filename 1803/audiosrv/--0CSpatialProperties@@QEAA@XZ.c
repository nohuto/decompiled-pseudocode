/*
 * XREFs of ??0CSpatialProperties@@QEAA@XZ @ 0x180054050
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180050ADC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x1800181B4 (GetSpatialSettingsMonitoringPKey.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

CSpatialProperties *__fastcall CSpatialProperties::CSpatialProperties(CSpatialProperties *this)
{
  __int64 v2; // rdx
  const GUID *v3; // r8
  const GUID *v4; // r9

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 36) = 0;
  *((_BYTE *)this + 74) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_BYTE *)this + 6848) = 0;
  *(_QWORD *)((char *)this + 6868) = 0LL;
  *(GUID *)((char *)this + 6852) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 100, 0, 0x48uLL);
  memset_0((char *)this + 176, 0, 0x1A10uLL);
  memset_0((char *)this + 6876, 0, 0x28uLL);
  GetSpatialSettingsMonitoringPKey((__int64)this + 80, v2, v3, v4);
  return this;
}
