/*
 * XREFs of ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x180073C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeDeviceCollection::OnDeviceRemoval(GazeDeviceCollection *this, unsigned int a2)
{
  return HIDDeviceCollection::OnDeviceRemoval(this, a2);
}
