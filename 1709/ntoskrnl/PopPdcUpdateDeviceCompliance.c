/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x1406FF8D4
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x1406FF6C8 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x140245634 (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 PopPdcUpdateDeviceCompliance()
{
  char *v0; // r8
  unsigned int v1; // ebx
  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  _BYTE *v5; // rax
  int v6; // edx
  int *v7; // rdi
  int v8; // edx

  v0 = (char *)PopPdcDeviceList;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  while ( v0 != (char *)&PopPdcDeviceList )
  {
    v4 = *((_DWORD *)v0 + 6);
    v5 = v0 + 32;
    v0 = *(char **)v0;
    v3 |= 1 << v4;
    v6 = v2 | (1 << v4);
    if ( !*v5 )
      v6 = v2;
    v2 = v6;
  }
  PopAcquirePolicyLock();
  v7 = PopCsDeviceCompliance;
  do
  {
    if ( ((1 << v1) & v2) != 0 )
      v8 = 1;
    else
      v8 = -((v3 & (1 << v1)) != 0);
    if ( v8 != *v7 )
    {
      *v7 = v8;
      PopDiagTraceDeviceComplianceUpdate(v1, v8);
    }
    ++v1;
    ++v7;
  }
  while ( v1 < 5 );
  return PopReleasePolicyLock();
}
