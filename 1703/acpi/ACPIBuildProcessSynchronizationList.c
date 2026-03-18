/*
 * XREFs of ACPIBuildProcessSynchronizationList @ 0x1C00093B8
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C000B5C0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x1C000B9E0 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0028544 (WPP_RECORDER_SF_sqss.c)
 */

__int64 ACPIBuildProcessSynchronizationList()
{
  PSLIST_ENTRY v0; // rbx
  char v1; // di
  _QWORD *v2; // rax
  void *v3; // r10
  __int64 v4; // r8
  void *v5; // rdx
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rsi
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v0 = AcpiBuildSynchronizationList;
  v1 = 1;
  while ( v0 != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
  {
    v7 = v0;
    v0 = v0->Next;
    if ( v7[5].Next->Next == v7[5].Next )
    {
      v2 = (_QWORD *)*((_QWORD *)&v7[2].Next + 1);
      v3 = &unk_1C0066CD0;
      LOBYTE(v4) = 0;
      v5 = &unk_1C0066CD0;
      if ( v2 )
      {
        v6 = v2[1];
        v4 = *((_QWORD *)&v7[2].Next + 1);
        if ( (v6 & 0x200000000000LL) != 0 )
        {
          v3 = (void *)v2[70];
          if ( (v6 & 0x400000000000LL) != 0 )
            v5 = (void *)v2[71];
        }
      }
      v10 = (__int64)v5;
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_sqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        6,
        71,
        v9,
        (__int64)(&v7[5].Next + 1),
        v4,
        (__int64)v3,
        v10);
      ACPIBuildProcessGenericComplete(v7);
    }
    else
    {
      v1 = 0;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
