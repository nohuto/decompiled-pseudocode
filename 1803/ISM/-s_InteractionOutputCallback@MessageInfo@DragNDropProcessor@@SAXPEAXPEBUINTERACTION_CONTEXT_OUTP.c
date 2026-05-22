/*
 * XREFs of ?s_InteractionOutputCallback@MessageInfo@DragNDropProcessor@@SAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180063A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragNDropProcessor::MessageInfo::s_InteractionOutputCallback(
        _DWORD *a1,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  a1[2] = ((*(_DWORD *)a2 - 1) & 0xFFFFFFFB) != 0 ? 1 : 3;
}
