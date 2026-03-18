/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800AEFD0
 * Callers:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800AF034 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800AF078 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180034E50 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 8);
  v2 = (struct CResource **)*((_QWORD *)this + 10);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((_DWORD *)this + 18));
    WPF::ProcessHeapImpl::Free(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
}
