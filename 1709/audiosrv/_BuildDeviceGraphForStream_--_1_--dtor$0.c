/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x180037B24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(a2 + 128);
}
