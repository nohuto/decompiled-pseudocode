/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00A0570 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00A05D0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00A0660 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00A0720 (NtGdiGetCertificateByHandle.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00F10A0 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00F1240 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00F1380 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UpdateGraphicsDeviceList @ 0x1C0058504 (UpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v1 = result;
  if ( (int)result >= 0 )
  {
    UpdateGraphicsDeviceList(&v6);
    if ( v6 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    {
      v1 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
      return (unsigned int)v1;
    }
    if ( gProtocolType )
      v1 = -1071774240;
    if ( v1 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
