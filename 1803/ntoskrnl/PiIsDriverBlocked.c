/*
 * XREFs of PiIsDriverBlocked @ 0x1405FBF00
 * Callers:
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 * Callees:
 *     ExIsProcessorFeaturePresent @ 0x1400CEC40 (ExIsProcessorFeaturePresent.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcsrchr @ 0x14018A7C0 (wcsrchr.c)
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 *     PiIsHVCIEnabled @ 0x1407281EC (PiIsHVCIEnabled.c)
 *     SdbQueryDataEx @ 0x1407D4D7C (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x1407D5208 (SdbReadEntryInformation.c)
 */

__int64 __fastcall PiIsDriverBlocked(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _OWORD *a5)
{
  PVOID v5; // r12
  __int64 v7; // rdi
  int DatabaseMatch; // eax
  __int64 v9; // r8
  unsigned int v10; // r13d
  unsigned int v11; // ebx
  char v13; // di
  char IsHVCIEnabled; // al
  wchar_t *v15; // rax
  const WCHAR *v16; // rax
  __int64 v17; // [rsp+30h] [rbp-41h]
  int v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+44h] [rbp-2Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v21[2]; // [rsp+60h] [rbp-11h] BYREF

  v5 = PpDDBHandle;
  v7 = a3;
  *(_QWORD *)&DestinationString.Length = a3;
  DatabaseMatch = SdbGetDatabaseMatch((int)PpDDBHandle, a4);
  v10 = DatabaseMatch;
  if ( DatabaseMatch )
  {
    v18 = 0;
    v19 = 0x400000004LL;
    if ( (unsigned int)SdbQueryDataEx((int)v5, DatabaseMatch, v9, (int)&v19 + 4, &v18, (__int64)&v19, v17) )
    {
      v11 = -1073740949;
    }
    else
    {
      v13 = v18;
      v11 = 0;
      if ( (v18 & 0x10) != 0 )
      {
        IsHVCIEnabled = PiIsHVCIEnabled();
        v13 = v18;
        if ( IsHVCIEnabled )
          v11 = -1073740949;
      }
      else if ( (v18 & 4) == 0 || ExIsProcessorFeaturePresent(9u) )
      {
        v11 = ((v13 & 1) != 0) - 1073740949;
      }
      if ( (v13 & 8) != 0
        && (PnpSetupInProgress
         || PnpSetupPhaseInProgress
         || PnpSetupTypeInProgress
         || PnpSetupOOBEInProgress
         || PnpSetupUpgradeInProgress
         || PnpSetupRollbackActiveInProgress) )
      {
        v11 = -1073740949;
      }
      v7 = *(_QWORD *)&DestinationString.Length;
    }
    if ( !(unsigned int)SdbReadEntryInformation(v5, v10, v21) && (PiLoggedErrorEventsMask & 0x100) == 0 )
    {
      PiLoggedErrorEventsMask |= 0x100u;
      RtlInitUnicodeString(&DestinationString, L"READ DRIVER ID FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    v11 = 0;
  }
  if ( v11 + 1073740949 <= 1 )
  {
    v15 = wcsrchr(*(const wchar_t **)(a2 + 8), 0x5Cu);
    if ( v15 )
      v16 = v15 + 1;
    else
      v16 = *(const WCHAR **)(a2 + 8);
    RtlInitUnicodeString(&DestinationString, v16);
    PnpLogEvent(&DestinationString, 0LL, v11, v21, 16);
  }
  if ( !v11 || v11 + 1073740949 <= 1 )
  {
    PiUpdateDriverDBCache(a2, v7, v9, v11, v21);
    if ( v11 + 1073740949 <= 1 && a5 )
      *a5 = v21[0];
  }
  return v11;
}
