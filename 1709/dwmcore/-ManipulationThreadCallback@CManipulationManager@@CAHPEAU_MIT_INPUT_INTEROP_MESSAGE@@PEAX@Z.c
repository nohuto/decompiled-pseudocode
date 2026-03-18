/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1800BF140
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1800BF168 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CManipulationManager *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)a1 )
    return CManipulationManager::ProcessManipulationThreadCallbackInput(
             (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
             a2);
  if ( *(_DWORD *)a1 == 1 )
    return CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
  return result;
}
