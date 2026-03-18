/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C00A6E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(const struct _LUID *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (int)ReadDpiFromRegistry(a1, a2, 0, &v4) >= 0 )
    return v4;
  return v2;
}
