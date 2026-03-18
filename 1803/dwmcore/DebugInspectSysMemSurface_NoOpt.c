/*
 * XREFs of DebugInspectSysMemSurface_NoOpt @ 0x1801C60E0
 * Callers:
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801C60D8 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     IsSolidColorSurface @ 0x1801C6618 (IsSolidColorSurface.c)
 */

char __fastcall DebugInspectSysMemSurface_NoOpt(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char result; // al
  char v6; // [rsp+30h] [rbp-18h]

  result = byte_1802D56A8;
  if ( byte_1802D56A8 )
  {
    v6 = IsSolidColorSurface(a1, a5);
    __debugbreak();
    return v6;
  }
  return result;
}
