/*
 * XREFs of Template_xqqqqqqqq @ 0x180175FF0
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x180175314 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xqqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  int v12; // [rsp+20h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-91h] BYREF
  int *v14; // [rsp+40h] [rbp-81h]
  __int64 v15; // [rsp+48h] [rbp-79h]
  int *v16; // [rsp+50h] [rbp-71h]
  __int64 v17; // [rsp+58h] [rbp-69h]
  char *v18; // [rsp+60h] [rbp-61h]
  __int64 v19; // [rsp+68h] [rbp-59h]
  char *v20; // [rsp+70h] [rbp-51h]
  __int64 v21; // [rsp+78h] [rbp-49h]
  char *v22; // [rsp+80h] [rbp-41h]
  __int64 v23; // [rsp+88h] [rbp-39h]
  char *v24; // [rsp+90h] [rbp-31h]
  __int64 v25; // [rsp+98h] [rbp-29h]
  char *v26; // [rsp+A0h] [rbp-21h]
  __int64 v27; // [rsp+A8h] [rbp-19h]
  char *v28; // [rsp+B0h] [rbp-11h]
  __int64 v29; // [rsp+B8h] [rbp-9h]
  __int64 v30; // [rsp+100h] [rbp+3Fh] BYREF
  int v31; // [rsp+108h] [rbp+47h] BYREF

  v31 = a4;
  v30 = a3;
  UserData.Ptr = (ULONGLONG)&v30;
  v12 = 1;
  v14 = &v31;
  *(_QWORD *)&UserData.Size = 8LL;
  v16 = &v12;
  v15 = 4LL;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DIRECTFLIP_SUPPORTEVENT, 9u, &UserData);
}
