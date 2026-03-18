/*
 * XREFs of Isoch_DoesDriverOwnRequests @ 0x1C00258A0
 * Callers:
 *     Isoch_ProcessTransferCompletion @ 0x1C0026E14 (Isoch_ProcessTransferCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall Isoch_DoesDriverOwnRequests(_QWORD *a1)
{
  return (_QWORD *)a1[48] != a1 + 48 || (_QWORD *)a1[50] != a1 + 50 || (_QWORD *)a1[52] != a1 + 52;
}
