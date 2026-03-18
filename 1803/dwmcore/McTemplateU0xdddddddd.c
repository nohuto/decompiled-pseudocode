/*
 * XREFs of McTemplateU0xdddddddd @ 0x1801709F0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xdddddddd(
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
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+20h] [rbp-91h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-81h]
  __int64 v14; // [rsp+38h] [rbp-79h]
  int *v15; // [rsp+40h] [rbp-71h]
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
  char *v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  __int64 v31; // [rsp+F0h] [rbp+3Fh] BYREF
  int v32; // [rsp+F8h] [rbp+47h] BYREF

  v32 = a4;
  v31 = a3;
  v14 = 8LL;
  v13 = &v31;
  v16 = 4LL;
  v15 = &v32;
  v18 = 4LL;
  v17 = &a5;
  v20 = 4LL;
  v19 = &a6;
  v22 = 4LL;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DISPLAYSURFACE_SWAPCHAINCANDIDATE,
           0xAu,
           &v12);
}
