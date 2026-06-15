/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180096F54
 * Callers:
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$2 @ 0x180069FF5 (_CAudioStream--RecalculateVolume_--_1_--dtor$2.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$3 @ 0x18006A00D (_CAudioStream--RecalculateVolume_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::string::~string(__int64 a1)
{
  return std::string::_Tidy_deallocate(a1);
}
