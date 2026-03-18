/*
 * XREFs of ACPIDevicePowerProcessPhase4 @ 0x1C000E970
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qDqss @ 0x1C00462AC (WPP_RECORDER_SF_qDqss.c)
 */

__int64 ACPIDevicePowerProcessPhase4()
{
  __int64 *v0; // rsi
  __int64 *v2; // rcx
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  PVOID *v7; // rbx
  PVOID *v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  void *v11; // r8
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+48h] [rbp-30h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    70,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v0 = (__int64 *)AcpiPowerNodeList;
  while ( v0 != &AcpiPowerNodeList )
  {
    v2 = v0;
    v0 = (__int64 *)*v0;
    if ( (v2[2] & 0x10000) != 0 )
    {
      if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        _InterlockedAnd64(v2 + 2, 0xFFFFFFFFFFFEFFFFuLL);
      }
      v3 = v2 + 6;
      v4 = (_QWORD *)v2[6];
      while ( v4 != v3 )
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
        v6 = (_QWORD *)*(v5 - 1);
        v7 = (PVOID *)AcpiPowerPhase4List;
        if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
        {
          do
          {
            v8 = v7;
            v7 = (PVOID *)*v7;
            v9 = v8[5];
            if ( v9 == v6 )
            {
              LOBYTE(v10) = 0;
              v11 = &unk_1C0067B08;
              v12 = &unk_1C0067B08;
              if ( v9 )
              {
                v10 = v8[5];
                v13 = v9[1];
                if ( (v13 & 0x200000000000LL) != 0 )
                {
                  v11 = (void *)v10[70];
                  if ( (v13 & 0x400000000000LL) != 0 )
                    v12 = (void *)v10[71];
                }
              }
              v14 = (__int64)v12;
              LOBYTE(v12) = 4;
              WPP_RECORDER_SF_qDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v12,
                10,
                71,
                (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
                (char)v8,
                33,
                (char)v10,
                (__int64)v11,
                v14);
              *((_DWORD *)v8 + 64) = -1072431071;
              ACPIDeviceCompleteRequest((struct _SLIST_ENTRY *)v8);
            }
          }
          while ( v7 != &AcpiPowerPhase4List );
        }
        KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return 0LL;
}
