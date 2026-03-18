/*
 * XREFs of IoCompleteRequest @ 0x140236660
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 */

void __fastcall IoCompleteRequest(IRP *a1, CCHAR a2)
{
  IofCompleteRequest(a1, a2);
}
