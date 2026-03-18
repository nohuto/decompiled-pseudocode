/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180169B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 */

__int64 __fastcall CInteraction::ProcessInput(
        CInteraction *this,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput(
           (CInteraction *)((char *)this + 376),
           a2,
           a3,
           a4,
           (struct IManipulationResource *)((*((_QWORD *)this + 37) + 64LL) & -(__int64)(*((_QWORD *)this + 37) != 0LL)),
           a5);
}
