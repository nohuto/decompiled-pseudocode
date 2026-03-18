/*
 * XREFs of PiIsDriverBlocked @ 0x1404B6244
 * Callers:
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExIsProcessorFeaturePresent @ 0x14014B850 (ExIsProcessorFeaturePresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     SdbGetDatabaseMatch @ 0x1404B41A0 (SdbGetDatabaseMatch.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PnpLogEvent @ 0x140695B4C (PnpLogEvent.c)
 *     SdbQueryDataEx @ 0x14072AF10 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x14072B390 (SdbReadEntryInformation.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  PVOID v5; // r15
  __int64 v8; // r8
  unsigned int DatabaseMatch; // r12d
  unsigned int v10; // ebx
  wchar_t *v12; // rax
  const WCHAR *v13; // rax
  __int64 v14; // [rsp+30h] [rbp-41h]
  int v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+44h] [rbp-2Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v18[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = PpDDBHandle;
  DatabaseMatch = SdbGetDatabaseMatch((__int64)PpDDBHandle, *(_QWORD *)(a2 + 8), a3, a3, a4);
  if ( !DatabaseMatch )
  {
    v10 = 0;
    goto LABEL_3;
  }
  v15 = 0;
  v16 = 0x400000004LL;
  if ( (unsigned int)SdbQueryDataEx((int)v5, DatabaseMatch, v8, (int)&v16 + 4, &v15, (__int64)&v16, v14) )
    goto LABEL_20;
  if ( (v15 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
    v10 = ((v15 & 1) != 0) - 1073740949;
  else
    v10 = 0;
  if ( (v15 & 8) != 0 )
  {
    if ( !PnpSetupInProgress
      && !PnpSetupPhaseInProgress
      && !PnpSetupTypeInProgress
      && !PnpSetupOOBEInProgress
      && !PnpSetupUpgradeInProgress
      && !PnpSetupRollbackActiveInProgress )
    {
      v10 = 0;
      goto LABEL_21;
    }
LABEL_20:
    v10 = -1073740949;
  }
LABEL_21:
  if ( !(unsigned int)SdbReadEntryInformation(v5, DatabaseMatch, v18) && (PiLoggedErrorEventsMask & 0x100) == 0 )
  {
    PiLoggedErrorEventsMask |= 0x100u;
    RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
    PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
LABEL_3:
  if ( v10 + 1073740949 <= 1 )
  {
    v12 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v12 )
      v13 = v12 + 1;
    else
      v13 = *(const WCHAR **)(a2 + 8);
    RtlInitUnicodeString(&DestinationString, v13);
    PnpLogEvent(&DestinationString, 0LL, v10, v18, 16);
  }
  if ( !v10 || v10 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, a3, v8, v10, v18);
    if ( v10 + 1073740949 <= 1 && a5 )
      *a5 = v18[0];
  }
  return v10;
}
