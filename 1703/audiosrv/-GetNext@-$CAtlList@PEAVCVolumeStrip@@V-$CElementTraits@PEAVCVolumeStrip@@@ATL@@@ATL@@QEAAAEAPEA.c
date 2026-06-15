/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEAVCVolumeStrip@@AEAPEAU__POSITION@@@Z @ 0x180002A68
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x18001E090 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
