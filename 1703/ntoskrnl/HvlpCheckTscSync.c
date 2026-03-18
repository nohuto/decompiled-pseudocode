/*
 * XREFs of HvlpCheckTscSync @ 0x1401EB060
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     HvlpPowerStateCallback @ 0x1401E5000 (HvlpPowerStateCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1401EB614 (HvlpWriteEventLog.c)
 */

char HvlpCheckTscSync()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  char result; // al
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v4[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v8; // [rsp+88h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-70h]
  _BYTE v10[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v11[2064]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0uLL;
  v6 = 0LL;
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v10, 8LL);
  v1 = HvlpAcquireHypercallPage(v3, 2, (__int64)v11, 1032LL);
  *v0 = 14;
  if ( !(unsigned __int16)HvcallCodeVa() )
  {
    v5 = *(_OWORD *)v1;
    v6 = *(_QWORD *)(v1 + 16);
  }
  HvlpReleaseHypercallPage((__int64)v3);
  result = HvlpReleaseHypercallPage((__int64)v4);
  if ( BYTE1(v5) )
  {
    if ( (_BYTE)v5 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v5 + 8;
      v9 = 8LL;
      v8 = &v6;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
