/*
 * XREFs of SeSetAccessStateGenericMapping @ 0x14078CDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeSetAccessStateGenericMapping(PACCESS_STATE AccessState, PGENERIC_MAPPING GenericMapping)
{
  *(GENERIC_MAPPING *)((char *)AccessState->AuxData + 8) = *GenericMapping;
}
