/*
 * XREFs of SepSidFromProcessProtection @ 0x140091C20
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14006626C (SepSetTrustLevelForProcessToken.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140091BA0 (SepReconcileTrustSidWithProcessProtection.c)
 * Callees:
 *     <none>
 */

PSID __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  PSID result; // rax

  result = 0LL;
  if ( (unsigned __int8)*a1 >= 0x51u )
  {
    switch ( *a1 )
    {
      case 0x51:
        result = SeProcTrustLiteWinSid;
        break;
      case 0x52:
        result = SeProcTrustWinSid;
        break;
      case 0x61:
        result = SeProcTrustLiteWinTcbSid;
        break;
      case 0x62:
      case 0x72:
        result = SeProcTrustWinTcbSid;
        break;
      case 0x81:
        result = SeProcTrustLiteAppSid;
        break;
      default:
        return result;
    }
  }
  return result;
}
