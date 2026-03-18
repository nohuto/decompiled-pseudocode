/*
 * XREFs of ?RemoveContact@CInteractionRoot@@UEAAXW4InputType@@@Z @ 0x1801DB550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::RemoveContact(__int64 a1, int a2)
{
  CInteractionProcessor::RemoveContact((_BYTE *)(a1 + 32), a2);
}
