/*
 * XREFs of McTemplateU0xqqdddd @ 0x180168214
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xqqdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // [rsp+20h] [rbp-71h] BYREF
  int v11; // [rsp+28h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-51h]
  __int64 v14; // [rsp+48h] [rbp-49h]
  int *v15; // [rsp+50h] [rbp-41h]
  __int64 v16; // [rsp+58h] [rbp-39h]
  int *v17; // [rsp+60h] [rbp-31h]
  __int64 v18; // [rsp+68h] [rbp-29h]
  char *v19; // [rsp+70h] [rbp-21h]
  __int64 v20; // [rsp+78h] [rbp-19h]
  char *v21; // [rsp+80h] [rbp-11h]
  __int64 v22; // [rsp+88h] [rbp-9h]
  char *v23; // [rsp+90h] [rbp-1h]
  __int64 v24; // [rsp+98h] [rbp+7h]
  char *v25; // [rsp+A0h] [rbp+Fh]
  __int64 v26; // [rsp+A8h] [rbp+17h]
  __int64 v27; // [rsp+E0h] [rbp+4Fh] BYREF

  v27 = a3;
  v16 = 4LL;
  v11 = 0;
  v13 = &v27;
  v10 = 0;
  v15 = &v10;
  v14 = 8LL;
  v17 = &v11;
  v18 = 4LL;
  v19 = &a6;
  v20 = 4LL;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATEOVERWRITEVENT,
           8u,
           &v12);
}
