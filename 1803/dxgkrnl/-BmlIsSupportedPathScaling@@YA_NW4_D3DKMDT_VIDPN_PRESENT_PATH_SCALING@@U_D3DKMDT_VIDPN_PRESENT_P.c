/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00C2EB0
 * Callers:
 *     BmlInternalTryPinningScaling @ 0x1C00C2CD0 (BmlInternalTryPinningScaling.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(__int64 a1, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return *(_BYTE *)&a2 & 1;
    case 2:
      v6 = *(unsigned int *)&a2 >> 1;
      return v6 & 1;
    case 3:
      v6 = *(unsigned int *)&a2 >> 2;
      return v6 & 1;
    case 4:
      v6 = *(unsigned int *)&a2 >> 3;
      return v6 & 1;
    case 5:
      v6 = *(unsigned int *)&a2 >> 4;
      return v6 & 1;
    case 0xFF:
      return 1;
  }
  v5 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdAssertion(v5);
  return 0;
}
