/*
 * XREFs of Controller_QuerySupportedDSMs @ 0x1C0011EDC
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     Controller_ExecuteDSM @ 0x1C0057028 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_QuerySupportedDSMs(__int64 a1)
{
  __int64 result; // rax

  if ( (Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL) & 7) == 7 )
    *(_BYTE *)(a1 + 528) = 1;
  result = Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL) & 3;
  if ( (_BYTE)result == 3 )
    *(_BYTE *)(a1 + 520) = 1;
  return result;
}
