/*
 * XREFs of ??0CSpatialProperties@@QEAA@XZ @ 0x1800C9198
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x1800AF8A0 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x18000873C (GetSpatialSettingsMonitoringPKey.c)
 *     memset @ 0x180033A5A (memset.c)
 */

CSpatialProperties *__fastcall CSpatialProperties::CSpatialProperties(CSpatialProperties *this)
{
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
  memset((char *)this + 100, 0, 0x48uLL);
  memset((char *)this + 176, 0, 0x1A10uLL);
  memset((char *)this + 6876, 0, 0x28uLL);
  GetSpatialSettingsMonitoringPKey((__int64)this + 80);
  return this;
}
