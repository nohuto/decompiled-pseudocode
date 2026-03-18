/*
 * XREFs of ACPIEnableEnterACPIMode @ 0x1C0032880
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C00329A0 (ACPIEnableInitializeACPI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     READ_PM1_CONTROL @ 0x1C0034CEC (READ_PM1_CONTROL.c)
 */

void __fastcall ACPIEnableEnterACPIMode(char a1)
{
  char v1; // bl
  ULONG TimeIncrement; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-28h] BYREF

  PreviousAffinity.Group = 0;
  v1 = 0;
  PreviousAffinity.Mask = 0LL;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      6,
      10,
      (__int64)&WPP_7f6d0e9c11d13a1ecb19e5f692ea4ff8_Traceguids);
    if ( KeGetCurrentIrql() < 2u )
    {
      KeProcessorGroupAffinity(&Affinity, 0LL);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v1 = 1;
    }
  }
  TimeIncrement = KeQueryTimeIncrement();
  __outbyte(*((_QWORD *)AcpiInformation + 13), *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 52LL));
  v3 = 0x1E8480 % TimeIncrement;
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = MEMORY[0xFFFFF78000000320] + 0x1E8480 / TimeIncrement;
  while ( (READ_PM1_CONTROL(v4, v3) & 1) == 0 )
  {
    if ( MEMORY[0xFFFFF78000000320] > v5 )
      KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, 0LL);
  }
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
