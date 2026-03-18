/*
 * XREFs of ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800512B4
 * Callers:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800B3BE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800B7D30 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CImageSource *>(CResource *a1, _QWORD *a2)
{
  CResource::UnRegisterNotifierInternal(
    a1,
    (struct CResource *)((*a2 + 16LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)));
  *a2 = 0LL;
}
