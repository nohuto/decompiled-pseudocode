/*
 * XREFs of WPP_SF_dP @ 0x180089F30
 * Callers:
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800839BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dP(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, a2, &v5);
}
