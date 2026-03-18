/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800B3BE0
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800B337C (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800B3C50 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800512B4 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180051A84 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifier<CImageSource *>(this, (_QWORD *)this + 7);
  v2 = (struct CResource **)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((_DWORD *)this + 16));
    operator delete(*((void **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 16) = 0;
  }
}
