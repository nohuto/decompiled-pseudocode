/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C00205B4
 * Callers:
 *     GlobalLockEventHandler @ 0x1C0020570 (GlobalLockEventHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C00507BC (ACPIIoctlAcquireGlobalLock.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E138 (WPP_RECORDER_SF_q.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0020898 (ACPIAcquireHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004A584 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  int v2; // edx
  KIRQL v3; // si
  _QWORD *v4; // rdx
  void **i; // rax
  void **v7; // rdi
  _QWORD *v8; // rdx
  char *v9; // rax
  void **v10; // rcx

  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    10,
    (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
    a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      11,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      a1,
      *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (_QWORD *)((char *)AcpiInformation + 48);
  if ( (_QWORD *)*v4 == v4 && (unsigned __int8)ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5)) )
  {
    *((_QWORD *)AcpiInformation + 9) = a1;
    *((_DWORD *)AcpiInformation + 20) = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v3);
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      3,
      12,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      a1);
    return 0LL;
  }
  for ( i = (void **)*((_QWORD *)AcpiInformation + 6); i != (void **)((char *)AcpiInformation + 48); i = (void **)*i )
  {
    v7 = i - 2;
    if ( i - 2 == (void **)a1 )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        3,
        13,
        (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
        a1,
        *(_WORD *)(a1 + 10));
      ++*((_WORD *)v7 + 5);
      goto LABEL_12;
    }
  }
  v8 = (_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 10) = 1;
  v9 = (char *)AcpiInformation + 48;
  v10 = (void **)*((_QWORD *)AcpiInformation + 7);
  if ( *v10 != (char *)AcpiInformation + 48 )
    __fastfail(3u);
  *v8 = v9;
  *(_QWORD *)(a1 + 24) = v10;
  *v10 = v8;
  *((_QWORD *)v9 + 1) = v8;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    14,
    (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
    a1);
LABEL_12:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v3);
  return 259LL;
}
