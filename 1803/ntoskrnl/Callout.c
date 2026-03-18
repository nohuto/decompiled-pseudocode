/*
 * XREFs of Callout @ 0x140576F10
 * Callers:
 *     <none>
 * Callees:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = SPCall2ServerInternal(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}
