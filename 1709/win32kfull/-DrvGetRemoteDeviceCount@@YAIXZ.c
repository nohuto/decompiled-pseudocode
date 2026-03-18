/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01414B0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     DxgkEngGetRemoteDeviceCount @ 0x1C02526D0 (DxgkEngGetRemoteDeviceCount.c)
 * Callees:
 *     <none>
 */

__int64 DrvGetRemoteDeviceCount(void)
{
  unsigned int v0; // r8d
  struct tagGRAPHICS_DEVICE *v1; // rdx
  _DWORD *v2; // rcx
  bool v3; // cf
  unsigned int v4; // ecx

  v0 = 0;
  v1 = gpGraphicsDeviceList;
  while ( v1 )
  {
    v2 = (_DWORD *)((char *)v1 + 160);
    v1 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
    v3 = (*v2 & 0x4000000) != 0;
    v4 = v0 + 1;
    if ( !v3 )
      v4 = v0;
    v0 = v4;
  }
  return v0;
}
