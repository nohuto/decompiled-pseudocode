/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011D45C
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011D38C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_DDD @ 0x1C00429C4 (WPP_SF_DDD.c)
 */

void ndisNblTrackerReadConfiguration(void)
{
  int v0; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v1; // [rsp+34h] [rbp-CCh] BYREF
  enum _NDIS_NBL_TRACKER_MODE v2; // [rsp+38h] [rbp-C8h] BYREF
  int v3; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG VerifierFlags; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+44h] [rbp-BCh] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+88h] [rbp-78h]
  int v8; // [rsp+90h] [rbp-70h]
  const wchar_t *v9; // [rsp+98h] [rbp-68h]
  void *v10; // [rsp+A0h] [rbp-60h]
  int v11; // [rsp+A8h] [rbp-58h]
  int *v12; // [rsp+B0h] [rbp-50h]
  int v13; // [rsp+B8h] [rbp-48h]
  __int64 v14; // [rsp+C0h] [rbp-40h]
  int v15; // [rsp+C8h] [rbp-38h]
  const wchar_t *v16; // [rsp+D0h] [rbp-30h]
  void *v17; // [rsp+D8h] [rbp-28h]
  int v18; // [rsp+E0h] [rbp-20h]
  int *v19; // [rsp+E8h] [rbp-18h]
  int v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+100h] [rbp+0h]
  const wchar_t *v23; // [rsp+108h] [rbp+8h]
  unsigned int *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  unsigned int *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  const wchar_t *v30; // [rsp+140h] [rbp+40h]
  unsigned int *v31; // [rsp+148h] [rbp+48h]
  int v32; // [rsp+150h] [rbp+50h]
  int *v33; // [rsp+158h] [rbp+58h]
  int v34; // [rsp+160h] [rbp+60h]
  _BYTE v35[56]; // [rsp+168h] [rbp+68h] BYREF

  v2 = NdisTrackNblDisabled;
  v5 = 0;
  QueryTable.QueryRoutine = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  QueryTable.Name = L"TrackNblOwner";
  QueryTable.EntryContext = &ndisNblTrackerMode;
  QueryTable.DefaultData = &v2;
  v9 = L"StuckNblReaction";
  v10 = &ndisNblTrackerStuckNblDisposition;
  v12 = &v3;
  v16 = L"LeakedNblReaction";
  v17 = &ndisNblTrackerLeakedNblDisposition;
  v19 = &v0;
  v23 = L"NblTimeoutMs";
  v24 = &ndisNblTrackerNblTimeoutMilliseconds;
  v26 = &v1;
  v30 = L"NblTrackerHistorySize";
  v31 = &ndisNblTrackerHistorySize;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  v8 = 288;
  v11 = 67108868;
  v15 = 288;
  v18 = 67108868;
  v22 = 288;
  v25 = 67108868;
  v29 = 288;
  v32 = 67108868;
  v33 = &v5;
  v3 = 2;
  v0 = 5;
  v1 = 60000;
  QueryTable.DefaultLength = 4;
  v13 = 4;
  v20 = 4;
  v27 = 4;
  v34 = 4;
  memset(v35, 0, sizeof(v35));
  if ( RtlQueryRegistryValuesEx(1u, L"NDIS\\Parameters", &QueryTable, 0LL, 0LL) < 0 )
  {
    ndisNblTrackerMode = v2;
    ndisNblTrackerStuckNblDisposition = v3;
    ndisNblTrackerLeakedNblDisposition = v0;
    ndisNblTrackerNblTimeoutMilliseconds = v1;
  }
  if ( ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( ndisNblTrackerNblTimeoutMilliseconds < 0x64 )
      ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    ndisNblTrackerNblTimeoutMilliseconds = v1;
  }
  if ( ndisNblTrackerLeakedNblDisposition
    && ndisNblTrackerLeakedNblDisposition != 5
    && ndisNblTrackerLeakedNblDisposition != 2 )
  {
    ndisNblTrackerLeakedNblDisposition = v0;
  }
  if ( MmIsDriverVerifyingByAddress(DriverEntry) )
  {
    if ( ndisNblTrackerMode < NdisTrackNblLogOnly )
      ndisNblTrackerMode = NdisTrackNblLogOnly;
    VerifierFlags = 0;
    if ( MmIsVerifierEnabled(&VerifierFlags) >= 0
      && (VerifierFlags & 0x200000) != 0
      && ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerMode = NdisTrackNblFullLogNoStack;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_DDD(
      0xAu,
      &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids,
      ndisNblTrackerMode,
      ndisNblTrackerStuckNblDisposition);
}
