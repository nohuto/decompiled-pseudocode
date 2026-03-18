/*
 * XREFs of AcpiCreateDiscoveryDeleteParameters @ 0x1C00332D8
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0033774 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall AcpiCreateDiscoveryDeleteParameters(_QWORD *a1, char a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4E706341u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *a1 = v8;
    a1[1] = v8;
    *v8 = a1;
    v8[1] = a1;
    *((_BYTE *)v8 + 16) = a2;
    v8[3] = qword_1C0066B68;
    v8[4] = AcpiNotifyDiscoverDeleteMainCompletion;
    v8[5] = v8;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
