/*
 * XREFs of McTemplateU0qq @ 0x180012EF8
 * Callers:
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z @ 0x180013470 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180021AF0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x18003EE90 (-TransitionToDisabled@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006E8A0 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180001B54 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qq(__int64 a1, EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-48h] BYREF
  int *v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 4;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWriteUM(MinInput_Context, a2, 3u, &v5);
}
