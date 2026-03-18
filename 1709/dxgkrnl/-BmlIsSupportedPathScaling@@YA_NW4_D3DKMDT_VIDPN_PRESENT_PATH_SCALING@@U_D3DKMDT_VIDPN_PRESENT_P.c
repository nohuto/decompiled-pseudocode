/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00D6734
 * Callers:
 *     BmlInternalTryPinningScaling @ 0x1C00D331C (BmlInternalTryPinningScaling.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(__int64 a1, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  __int64 v6; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return *(_BYTE *)&a2 & 1;
    case 2:
      v3 = *(unsigned int *)&a2 >> 1;
      return v3 & 1;
    case 3:
      v3 = *(unsigned int *)&a2 >> 2;
      return v3 & 1;
    case 4:
      v3 = *(unsigned int *)&a2 >> 3;
      return v3 & 1;
    case 5:
      v3 = *(unsigned int *)&a2 >> 4;
      return v3 & 1;
    case 0xFF:
      return 1;
  }
  v6 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v6 + 24) = v2;
  WdLogEvent5_WdAssertion(v6);
  return 0;
}
