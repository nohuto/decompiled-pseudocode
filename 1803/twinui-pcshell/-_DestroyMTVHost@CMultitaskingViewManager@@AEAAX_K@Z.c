/*
 * XREFs of ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180272594
 * Callers:
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180270DF0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180271D80 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180270A40 (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CMultitaskingViewManager::_DestroyMTVHost(CMultitaskingViewManager *this, unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8

  v4 = 16 * a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(16 * a2 + *((_QWORD *)this + 34) + 8LL));
  if ( a2 < *((_QWORD *)this + 35) )
  {
    CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'((CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v4 + *((_QWORD *)this + 34)));
    v5 = *((_QWORD *)this + 35);
    if ( a2 != v5 - 1 )
    {
      memmove(
        (void *)(v4 + *((_QWORD *)this + 34)),
        (const void *)(v4 + *((_QWORD *)this + 34) + 16),
        16 * (v5 - a2) - 16);
      v5 = *((_QWORD *)this + 35);
    }
    *((_QWORD *)this + 35) = v5 - 1;
  }
}
