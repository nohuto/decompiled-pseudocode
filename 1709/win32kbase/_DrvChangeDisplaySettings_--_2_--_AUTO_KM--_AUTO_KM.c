/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C0065F88
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001B1F0 (--0AUTO_TGO@@IEAA@XZ.c)
 */

AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM(AUTO_TGO *a1)
{
  AUTO_TGO::AUTO_TGO(a1);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *(_QWORD *)a1 = off_1C01577B8;
  return a1;
}
