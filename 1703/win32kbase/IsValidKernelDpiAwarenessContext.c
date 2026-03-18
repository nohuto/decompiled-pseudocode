/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C00776F8
 * Callers:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0077450 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  _BOOL8 result; // rax

  v1 = (a1 & 0x7FFFFFFF) - 16;
  result = 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 16 )
          return 0;
      }
    }
  }
  return result;
}
