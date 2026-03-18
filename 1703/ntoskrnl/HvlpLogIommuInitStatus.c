/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1401EB3AC
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1401EB614 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _DWORD *v0; // rbx
  _OWORD *v1; // rdi
  __int64 result; // rax
  int LowPart_low; // [rsp+28h] [rbp-E0h] BYREF
  int v4; // [rsp+2Ch] [rbp-DCh] BYREF
  PHYSICAL_ADDRESS v5[3]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v6[11]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  int *v8; // [rsp+B8h] [rbp-50h]
  __int64 v9; // [rsp+C0h] [rbp-48h]
  PHYSICAL_ADDRESS *v10; // [rsp+C8h] [rbp-40h]
  __int64 v11; // [rsp+D0h] [rbp-38h]
  PHYSICAL_ADDRESS *v12; // [rsp+D8h] [rbp-30h]
  __int64 v13; // [rsp+E0h] [rbp-28h]
  PHYSICAL_ADDRESS *v14; // [rsp+E8h] [rbp-20h]
  __int64 v15; // [rsp+F0h] [rbp-18h]
  PHYSICAL_ADDRESS *v16; // [rsp+F8h] [rbp-10h]
  __int64 v17; // [rsp+100h] [rbp-8h]
  PHYSICAL_ADDRESS *v18; // [rsp+108h] [rbp+0h]
  __int64 v19; // [rsp+110h] [rbp+8h]
  _BYTE v20[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v21[2064]; // [rsp+138h] [rbp+30h] BYREF

  memset(&v6[4], 0, 0x30uLL);
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v6, 1, (__int64)v20, 8LL);
  v1 = (_OWORD *)HvlpAcquireHypercallPage(v5, 2, (__int64)v21, 1032LL);
  *v0 = 5;
  if ( !(unsigned __int16)HvcallCodeVa() )
  {
    *(_OWORD *)&v6[4].LowPart = *v1;
    *(_OWORD *)&v6[6].LowPart = v1[1];
    *(_OWORD *)&v6[8].LowPart = v1[2];
  }
  HvlpReleaseHypercallPage((__int64)v5);
  HvlpReleaseHypercallPage((__int64)v6);
  LowPart_low = LOBYTE(v6[4].LowPart);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&LowPart_low;
  v4 = BYTE1(v6[4].LowPart);
  v8 = &v4;
  v10 = &v6[5];
  v12 = &v6[6];
  v14 = &v6[7];
  v16 = &v6[8];
  v18 = &v6[9];
  v9 = 4LL;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  result = HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  if ( BYTE1(v6[4].LowPart) && v6[5].QuadPart == 1 )
  {
    if ( v6[8].QuadPart )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
