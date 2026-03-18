/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00E8930
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00EDE00 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00EE140 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetOPMInformation @ 0x1C00EE520 (NtGdiGetOPMInformation.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C00EE5A0 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00EE680 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx

  result = UserSessionSwitchEnterCrit(a1, a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v4 = -1071774240;
    if ( v4 >= 0 )
    {
      return 0LL;
    }
    else
    {
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v4;
    }
  }
  return result;
}
