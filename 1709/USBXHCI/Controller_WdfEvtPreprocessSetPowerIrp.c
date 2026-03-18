/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0006710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_L @ 0x1C0006858 (WPP_RECORDER_SF_L.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C0039B74 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // [rsp+28h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E408);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v5 + 16) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = (v8 >> 8) & 0xF;
    if ( v9 == 1 )
    {
      if ( (v8 & 0xF0000) == 0x50000 )
        *(_DWORD *)(v7 + 348) = 2;
      else
        *(_DWORD *)(v7 + 348) = 1;
    }
    else if ( v9 == 6 )
    {
      if ( (v8 & 0xF000) == 0x5000 )
        *(_DWORD *)(v7 + 348) = 5;
      else
        *(_DWORD *)(v7 + 348) = 6;
    }
    else if ( v9 >= 2 )
    {
      if ( v9 <= 4 )
      {
        *(_DWORD *)(v7 + 348) = ((v8 & 0xF000) == 20480) + 3;
      }
      else if ( v9 == 5 )
      {
        *(_DWORD *)(v7 + 348) = 5;
      }
    }
    WPP_RECORDER_SF_L(
      *(_QWORD *)(v4 + 16),
      4,
      4,
      199,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *(_DWORD *)(v7 + 348));
    v10 = *(_QWORD *)(v7 + 352);
    if ( v10 )
      Crashdump_ProcessSystemPowerAction(v10, *(unsigned int *)(v7 + 348));
  }
  v11 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v11 + 272))(WdfDriverGlobals, a1, a2);
  v13 = result;
  if ( (int)result < 0 )
  {
    LODWORD(v14) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 16),
      2u,
      4u,
      0xC8u,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v14);
    return v13;
  }
  return result;
}
