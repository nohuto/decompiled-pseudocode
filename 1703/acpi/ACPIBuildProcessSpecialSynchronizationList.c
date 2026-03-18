/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1C000D5E8
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C000B5C0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C000B9E0 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PSLIST_ENTRY v0; // rdi
  char v1; // bl
  PSLIST_ENTRY v2; // rsi
  int Next; // eax
  PSLIST_ENTRY v5; // rdi
  PSLIST_ENTRY v6; // rsi
  void *v7; // r10
  void *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  void *v13; // r11
  void *v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdx

  v0 = AcpiBuildSpecialSynchronizationList;
  v1 = 1;
  if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
  {
    do
    {
      v2 = v0;
      v0 = v0->Next;
      Next = (int)v2[5].Next;
      if ( (Next & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
        || (Next & 0x20) != 0 && AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList
        || (Next & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
        || (Next & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
        || (Next & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
        || (Next & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
      {
        v1 = 0;
      }
      else
      {
        if ( (Next & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
          v1 = 0;
        if ( (Next & 0x40) == 0 )
        {
          v12 = (_QWORD *)*((_QWORD *)&v2[2].Next + 1);
          v13 = &unk_1C0066CD0;
          v14 = &unk_1C0066CD0;
          LOBYTE(v15) = 0;
          if ( v12 )
          {
            v16 = v12[1];
            v15 = *((_QWORD *)&v2[2].Next + 1);
            if ( (v16 & 0x200000000000LL) != 0 )
            {
              v13 = (void *)v12[70];
              if ( (v16 & 0x400000000000LL) != 0 )
                v14 = (void *)v12[71];
            }
          }
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            2,
            6,
            69,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            Next,
            v15,
            (__int64)v13,
            (__int64)v14);
          ACPIBuildProcessGenericComplete(v2);
        }
      }
    }
    while ( v0 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
    if ( v1 )
    {
      v5 = AcpiBuildSpecialSynchronizationList;
      while ( v5 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
      {
        v6 = v5;
        v7 = &unk_1C0066CD0;
        v5 = v5->Next;
        v8 = &unk_1C0066CD0;
        LOBYTE(v9) = 0;
        v10 = (_QWORD *)*((_QWORD *)&v6[2].Next + 1);
        if ( v10 )
        {
          v11 = v10[1];
          v9 = *((_QWORD *)&v6[2].Next + 1);
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v7 = (void *)v10[70];
            if ( (v11 & 0x400000000000LL) != 0 )
              v8 = (void *)v10[71];
          }
        }
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          6,
          70,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          (char)v6[5].Next,
          v9,
          (__int64)v7,
          (__int64)v8);
        ACPIBuildProcessGenericComplete(v6);
      }
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
