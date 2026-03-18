/*
 * XREFs of Controller_ReferenceTrustletProcess @ 0x1C0011F58
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_ReferenceTrustletProcess(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r9
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  if ( a1[57] )
  {
    v2 = a1[9];
    v3 = 255;
LABEL_7:
    WPP_RECORDER_SF_(v2, 2u, 4u, v3, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    return (unsigned int)-1073741436;
  }
  v4 = a1 + 58;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         *a1,
         &GUID_SECURE_DRIVER_INTERFACE,
         a1 + 58,
         56,
         1,
         0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD))v4[4])(v4[1]);
    a1[57] = v7;
    if ( !v7 )
    {
      v2 = a1[9];
      v3 = 257;
      goto LABEL_7;
    }
  }
  else
  {
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0x100u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v9);
  }
  return v6;
}
