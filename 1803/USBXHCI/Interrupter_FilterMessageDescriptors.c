/*
 * XREFs of Interrupter_FilterMessageDescriptors @ 0x1C00592E4
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C00594B0 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_FilterMessageDescriptors(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int i; // ebp
  _OWORD *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int128 v14; // xmm1
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  _OWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2328))(WdfDriverGlobals);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2384))(WdfDriverGlobals, v7);
  v9 = 0;
  for ( i = result; v9 < i; ++v9 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
               WdfDriverGlobals,
               v7,
               v9);
    v11 = (_OWORD *)result;
    if ( *(_BYTE *)(result + 1) == 2 && (*(_BYTE *)(result + 4) & 3) == 3 )
    {
      if ( a4 )
      {
        v12 = *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) + 1;
        if ( a4 < v12 )
        {
          LODWORD(v16) = v9;
          LODWORD(v15) = a3;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x3Bu,
            (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
            v15,
            v16);
          _BitScanReverse(&v13, 2 * a4 - 1);
          v17[0] = *v11;
          v14 = v11[1];
          DWORD2(v17[0]) = ~(1 << v13);
          v17[1] = v14;
          HIDWORD(v17[0]) = -2;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD))(WdfFunctions_01023 + 2376))(
                     WdfDriverGlobals,
                     v7,
                     v17,
                     v9);
          a4 = 0;
        }
        else
        {
          a4 -= v12;
        }
      }
      else
      {
        LODWORD(v16) = v9;
        LODWORD(v15) = a3;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          9u,
          0x3Au,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          v15,
          v16);
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
                   WdfDriverGlobals,
                   v7,
                   v9--);
        --i;
      }
    }
  }
  return result;
}
