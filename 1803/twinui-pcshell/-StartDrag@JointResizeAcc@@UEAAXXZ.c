/*
 * XREFs of ?StartDrag@JointResizeAcc@@UEAAXXZ @ 0x1802EB3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::StartDrag(IRawElementProviderSimple *this)
{
  UiaRaiseAutomationEvent(this - 2, 20026);
}
