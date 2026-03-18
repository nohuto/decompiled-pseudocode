/*
 * XREFs of Bulk_DoesDriverOwnRequests @ 0x1C002DD64
 * Callers:
 *     Bulk_Cleanup @ 0x1C002D830 (Bulk_Cleanup.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C002F10C (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Bulk_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[46] != a1 + 46 || (_QWORD *)a1[48] != a1 + 48 || (_QWORD *)a1[50] != a1 + 50;
}
