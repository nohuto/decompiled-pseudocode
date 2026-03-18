/*
 * XREFs of Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C0058A90
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // ebp
  unsigned int i; // edi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(WdfDriverGlobals, a2);
    if ( i >= (unsigned int)result )
      break;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
            WdfDriverGlobals,
            a2,
            i);
    v12 = v11;
    if ( *(_BYTE *)v11 == 2 )
    {
      LODWORD(v14) = *(unsigned __int16 *)(v11 + 2);
      LODWORD(v13) = i;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        9u,
        0x3Du,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
        v13,
        v14);
      if ( *(_BYTE *)v12 == 2 && (*(_BYTE *)(v12 + 2) & 3) == 3 )
      {
        LODWORD(v14) = *(_DWORD *)(v12 + 8);
        LODWORD(v13) = *(unsigned __int16 *)(v12 + 6);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          9u,
          0x3Eu,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          v13,
          v14);
        v5 = (v4 != 0) + 1;
        v4 += *(unsigned __int16 *)(v12 + 6);
      }
      else
      {
        ++v4;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
