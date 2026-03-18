/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C010B444
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010AD28 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  unsigned int v10; // edi
  __int64 v11; // rax
  _HIDP_DEVICE_DESC v13; // [rsp+50h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC Object; // [rsp+90h] [rbp-51h] BYREF

  v7 = 0;
  *a7 = 0LL;
  v10 = 1;
  if ( a1 == 13 )
  {
    v10 = 10;
    if ( a2 != 4 )
      v10 = 1;
    if ( a2 == 5 )
      v10 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v10) )
  {
    v13 = Object;
    v11 = RIMIDECreatePseudoHIDDevice(a1, a2, v10, a6, a5, &Object, &v13, 1, 0, 0LL);
    if ( v11 )
    {
      *a7 = v11;
      return 1;
    }
  }
  return v7;
}
