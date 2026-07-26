/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011C2E0
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011C20C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_DDD @ 0x1C0043A38 (WPP_SF_DDD.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00B5340 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(struct _DRIVER_OBJECT *a1)
{
  ULONG VerifierFlags[4]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v2[2]; // [rsp+40h] [rbp-39h] BYREF
  int v3; // [rsp+50h] [rbp-29h]
  const wchar_t *v4; // [rsp+58h] [rbp-21h]
  void *v5; // [rsp+60h] [rbp-19h]
  int v6; // [rsp+68h] [rbp-11h]
  const wchar_t *v7; // [rsp+70h] [rbp-9h]
  void *v8; // [rsp+78h] [rbp-1h]
  int v9; // [rsp+80h] [rbp+7h]
  const wchar_t *v10; // [rsp+88h] [rbp+Fh]
  unsigned int *v11; // [rsp+90h] [rbp+17h]
  int v12; // [rsp+98h] [rbp+1Fh]
  const wchar_t *v13; // [rsp+A0h] [rbp+27h]
  unsigned int *v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+B0h] [rbp+37h]

  v3 = 0;
  v15 = 0;
  v2[0] = L"TrackNblOwner";
  v6 = 2;
  v2[1] = &ndisNblTrackerMode;
  v4 = L"StuckNblReaction";
  v5 = &ndisNblTrackerStuckNblDisposition;
  v7 = L"LeakedNblReaction";
  v8 = &ndisNblTrackerLeakedNblDisposition;
  v10 = L"NblTimeoutMs";
  v11 = &ndisNblTrackerNblTimeoutMilliseconds;
  v13 = L"NblTrackerHistorySize";
  v14 = &ndisNblTrackerHistorySize;
  v9 = 5;
  v12 = 60000;
  ndisReadRegistryKnobs(a1, (const struct NDIS_REGISTRY_KNOB *)v2, 5uLL);
  if ( ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( ndisNblTrackerNblTimeoutMilliseconds < 0x64 )
      ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    ndisNblTrackerNblTimeoutMilliseconds = 60000;
  }
  if ( ndisNblTrackerLeakedNblDisposition
    && ndisNblTrackerLeakedNblDisposition != 5
    && ndisNblTrackerLeakedNblDisposition != 2 )
  {
    ndisNblTrackerLeakedNblDisposition = 5;
  }
  if ( MmIsDriverVerifyingByAddress(DriverEntry) )
  {
    if ( ndisNblTrackerMode < NdisTrackNblLogOnly )
      ndisNblTrackerMode = NdisTrackNblLogOnly;
    VerifierFlags[0] = 0;
    if ( MmIsVerifierEnabled(VerifierFlags) >= 0
      && (VerifierFlags[0] & 0x200000) != 0
      && ndisNblTrackerMode < NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerMode = NdisTrackNblFullLogNoStack;
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_DDD(
      0xAu,
      &WPP_7c95a1dd04db386f3493309f33220046_Traceguids,
      ndisNblTrackerMode,
      ndisNblTrackerStuckNblDisposition);
}
