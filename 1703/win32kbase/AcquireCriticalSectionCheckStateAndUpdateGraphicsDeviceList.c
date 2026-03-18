/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00EDF50 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00EE070 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificate @ 0x1C00EE1C0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00EE300 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetCertificateSize @ 0x1C00EE420 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00EE4A0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00EE620 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C00436FC (UpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 __fastcall AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState(a1, a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v5);
    if ( v5 && *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      v4 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v4;
    }
    if ( gProtocolType )
      v4 = -1071774240;
    if ( v4 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
