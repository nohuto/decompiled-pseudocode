/*
 * XREFs of ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x18021B2BC
 * Callers:
 *     ??_ECWARPCallbackRenderer@@G7EAAPEAXI@Z @ 0x1800DE980 (--_ECWARPCallbackRenderer@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x18013F854 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 */

CWARPCallbackRenderer *__fastcall CWARPCallbackRenderer::`scalar deleting destructor'(
        CWARPCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  unsigned int v2; // r8d
  char v3; // di

  v2 = *((_DWORD *)this + 10);
  *(_QWORD *)this = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  v3 = (char)a2;
  if ( v2 != -1 )
    CCallbackRendererManager::UnlockDrawlistEntryRange(
      (CCallbackRendererManager *)(*((_QWORD *)this + 3) + 8LL),
      a2,
      v2,
      *((_DWORD *)this + 11));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
