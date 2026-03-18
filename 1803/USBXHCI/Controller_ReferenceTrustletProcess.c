/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1C00092EC
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // r9d
  __int64 v6; // rax
  char v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[58] )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
           WdfDriverGlobals,
           *a1,
           &v9);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3600))(WdfDriverGlobals, v9);
      a1[58] = v6;
      if ( v6 )
        return v2;
      v2 = -1073741436;
      v5 = 259;
      v8 = -124;
    }
    else
    {
      v5 = 258;
      v8 = v3;
    }
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(a1[9], v4, 4, v5, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v8);
    return v2;
  }
  WPP_RECORDER_SF_(a1[9], 2u, 4u, 0x101u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  return (unsigned int)-1073741436;
}
