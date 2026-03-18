/*
 * XREFs of Controller_QuerySupportedDSMs @ 0x1C0009270
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_QuerySupportedDSMs(__int64 a1)
{
  __int64 result; // rax

  if ( (Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL) & 7) == 7 )
    *(_BYTE *)(a1 + 529) = 1;
  result = Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL) & 3;
  if ( (_BYTE)result == 3 )
    *(_BYTE *)(a1 + 528) = 1;
  return result;
}
