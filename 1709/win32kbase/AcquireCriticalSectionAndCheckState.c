/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C00A0840 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00A0910 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiGetOPMInformation @ 0x1C00A0CB0 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00F0F50 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00F11C0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx

  result = UserSessionSwitchEnterCrit(a1, a2, a3, a4);
  v8 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v8 = -1071774240;
    if ( v8 < 0 )
    {
      UserSessionSwitchLeaveCrit(0LL, v5, v6, v7);
      return (unsigned int)v8;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
