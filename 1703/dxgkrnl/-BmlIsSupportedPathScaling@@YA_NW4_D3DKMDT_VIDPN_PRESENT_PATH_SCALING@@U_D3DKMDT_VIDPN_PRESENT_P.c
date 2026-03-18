/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00F65C4
 * Callers:
 *     BmlInternalTryPinningScaling @ 0x1C00F2BC4 (BmlInternalTryPinningScaling.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // rax

  v4 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      LOBYTE(v5) = a2;
      return v5 & 1;
    case 2:
      v5 = (unsigned __int8)a2 >> 1;
      return v5 & 1;
    case 3:
      v5 = (unsigned __int8)a2 >> 2;
      return v5 & 1;
    case 4:
      v5 = (unsigned __int8)a2 >> 3;
      return v5 & 1;
    case 5:
      v5 = (unsigned __int8)a2 >> 4;
      return v5 & 1;
    case 0xFF:
      return 1;
  }
  v7 = WdLogNewEntry5_WdAssertion(a1, a2, (unsigned int)(a1 - 5), a4);
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdAssertion(v7);
  return 0;
}
