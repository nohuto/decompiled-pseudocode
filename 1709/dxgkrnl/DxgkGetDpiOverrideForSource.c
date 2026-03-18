/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C00FACB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00E2740 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(struct _LUID *a1, const struct _LUID *a2)
{
  unsigned int v2; // ebx
  struct _UNICODE_STRING v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  *(_DWORD *)&v4.Length = 0;
  if ( (int)DpiPersistence::ReadDpiFromRegistry(a1, a2, 0, &v4) >= 0 )
    return *(unsigned int *)&v4.Length;
  return v2;
}
