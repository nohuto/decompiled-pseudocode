/*
 * XREFs of NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00F11C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00A0D2C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C00F0B38 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00F0D78 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 */

__int64 __fastcall NtGdiGetCOPPCompatibleOPMInformation(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  COPM *v11; // rcx
  int COPPCompatibleInformation; // edi
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v13; // r8
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v14; // r9

  result = AcquireCriticalSectionAndCheckState(a1, (__int64)a2, (__int64)a3, a4);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    COPPCompatibleInformation = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(
                                  v8,
                                  a2);
    if ( COPPCompatibleInformation >= 0 )
    {
      COPPCompatibleInformation = COPM::GetCOPPCompatibleInformation(v11, a1, v13, v14);
      if ( COPPCompatibleInformation >= 0 )
        COPPCompatibleInformation = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(
                                      a3,
                                      xmmword_1C0197990);
    }
    UserSessionSwitchLeaveCrit((__int64)v11, v10, (__int64)v13, (__int64)v14);
    if ( COPPCompatibleInformation < 0 )
      return (unsigned int)COPPCompatibleInformation;
    return v9;
  }
  return result;
}
