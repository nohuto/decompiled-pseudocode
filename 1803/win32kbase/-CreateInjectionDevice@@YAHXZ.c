/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x1C0131FCC
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C0132140 (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01323A4 (SynthesizeMitTouchInput.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00F5FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C013201C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
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
             *(_QWORD *)(gpDispInfo + 96),
             3u,
             1,
             0,
             (__int64 *)&TouchExtensibility::ghInjectionDevice);
  if ( (_DWORD)result )
    return GetDeviceRects(v2, v1, v3);
  return result;
}
