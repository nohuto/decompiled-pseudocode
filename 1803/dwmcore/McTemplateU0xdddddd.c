/*
 * XREFs of McTemplateU0xdddddd @ 0x18015B2D0
 * Callers:
 *     ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETSLICER@@@Z @ 0x18015AC20 (-ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xdddddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-61h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-51h]
  __int64 v12; // [rsp+38h] [rbp-49h]
  int *v13; // [rsp+40h] [rbp-41h]
  __int64 v14; // [rsp+48h] [rbp-39h]
  char *v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  char *v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  char *v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  char *v23; // [rsp+90h] [rbp+Fh]
  __int64 v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+4Fh] BYREF
  int v26; // [rsp+D8h] [rbp+57h] BYREF

  v26 = a4;
  v25 = a3;
  v14 = 4LL;
  v11 = &v25;
  v16 = 4LL;
  v13 = &v26;
  v18 = 4LL;
  v15 = &a5;
  v20 = 4LL;
  v17 = &a6;
  v12 = 8LL;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v22 = 4LL;
  v24 = 4LL;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_SLICER_CAPTURE_Start, 8u, &v10);
}
