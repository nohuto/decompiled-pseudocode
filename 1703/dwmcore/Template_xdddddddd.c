/*
 * XREFs of Template_xdddddddd @ 0x1801548E8
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xdddddddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-91h] BYREF
  int *v13; // [rsp+30h] [rbp-81h]
  __int64 v14; // [rsp+38h] [rbp-79h]
  char *v15; // [rsp+40h] [rbp-71h]
  __int64 v16; // [rsp+48h] [rbp-69h]
  char *v17; // [rsp+50h] [rbp-61h]
  __int64 v18; // [rsp+58h] [rbp-59h]
  char *v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  char *v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  char *v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  char *v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  char *v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+F0h] [rbp+3Fh] BYREF
  int v30; // [rsp+F8h] [rbp+47h] BYREF

  v30 = a4;
  v29 = a3;
  UserData.Ptr = (ULONGLONG)&v29;
  *(_QWORD *)&UserData.Size = 8LL;
  v13 = &v30;
  v14 = 4LL;
  v15 = &a5;
  v16 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_DISPLAYSURFACE_SWAPCHAINCANDIDATE, 9u, &UserData);
}
