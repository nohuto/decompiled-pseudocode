/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C010C1C8
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010BFF0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01014E4 (RIMDoMobileKeyboardInvalidation.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  __int64 v1; // rsi
  int v3; // eax

  v1 = *((_QWORD *)a1 + 43);
  RIMLockExclusive(v1 + 696);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMEndAllActiveContacts(v1, *((_QWORD *)a1 + 59), 0LL);
  v3 = *((_DWORD *)a1 + 46);
  if ( (v3 & 0x2000) != 0 && (v3 & 0x4000) != 0 )
    RIMDoMobileKeyboardInvalidation((_BYTE *)v1, (__int64)a1);
  *(_QWORD *)(v1 + 704) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 696, 0LL);
  KeLeaveCriticalRegion();
}
