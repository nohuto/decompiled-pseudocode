/*
 * XREFs of XilCoreCommand_DirectWriteDoorbell @ 0x1C003FFB0
 * Callers:
 *     XilCommand_WriteDoorbell @ 0x1C000F6D0 (XilCommand_WriteDoorbell.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x1C003FE34 (XilCoreCommand_AddCommandTRBToRing.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall XilCoreCommand_DirectWriteDoorbell(_DWORD **a1)
{
  return XilRegister_WriteUlong(*(_QWORD *)(*((_QWORD *)*a1 + 1) + 88LL), a1[7], 0);
}
