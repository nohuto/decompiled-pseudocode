/*
 * XREFs of McTemplateU0dffffq @ 0x180148148
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0dffffq(__int64 a1, __int64 a2, int a3, float a4, char a5, char a6, char a7, char a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+20h] [rbp-49h] BYREF
  int *v10; // [rsp+30h] [rbp-39h]
  __int64 v11; // [rsp+38h] [rbp-31h]
  float *v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  char *v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  char *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  char *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  char *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+C0h] [rbp+57h] BYREF
  float v23; // [rsp+C8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 4LL;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v19 = 4LL;
  v18 = &a7;
  v20 = &a8;
  v21 = 4LL;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_OCCLUSIONEVENT, 7u, &v9);
}
