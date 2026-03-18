/*
 * XREFs of ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x1801BF18C
 * Callers:
 *     ??_ECWARPCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800D68F0 (--_ECWARPCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x1800ABF98 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 */

CWARPCallbackRenderer *__fastcall CWARPCallbackRenderer::`scalar deleting destructor'(
        CWARPCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  char v3; // bl

  *(_QWORD *)this = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  v3 = (char)a2;
  *((_QWORD *)this + 1) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  CCallbackRendererManager::UnlockDrawlistEntryRange(
    (CCallbackRendererManager *)(*((_QWORD *)this + 3) + 8LL),
    a2,
    *((_DWORD *)this + 10),
    *((_DWORD *)this + 11));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (v3 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
