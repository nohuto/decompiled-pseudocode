/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x1C012FF0C
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C013007C (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01302D8 (SynthesizeMitTouchInput.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010B548 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C012FF54 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 CreateInjectionDevice(void)
{
  __int64 result; // rax
  struct tagRECT *v1; // rdx
  void *v2; // rcx
  struct tagRECT *v3; // r8

  result = RIMIDE_InitializePointerDeviceInjection(
             2,
             10,
             *(_QWORD *)(gpDispInfo + 88),
             3u,
             0,
             (__int64 *)&TouchExtensibility::ghInjectionDevice);
  if ( (_DWORD)result )
    return GetDeviceRects(v2, v1, v3);
  return result;
}
