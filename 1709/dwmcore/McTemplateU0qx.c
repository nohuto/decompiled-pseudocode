/*
 * XREFs of McTemplateU0qx @ 0x180136C20
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180136764 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0qx(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-48h] BYREF
  int *v5; // [rsp+30h] [rbp-38h]
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  va_list v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v11 = a3;
  v5 = &v11;
  v7 = 0;
  v6 = 4;
  va_copy(v8, va);
  v10 = 0;
  v9 = 8;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_DEBUG_FRAME_COUNTER_EVENT, 3u, &v4);
}
