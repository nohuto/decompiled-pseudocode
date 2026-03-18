/*
 * XREFs of ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00471D0
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C00309C0 (DxgkDeviceIoctl.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C004DFE0 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkCompositionObject::CreateHandle(
        DxgkCompositionObject *this,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 0x40u, 0LL, a2, g_pDxgkCompositionObjectType, AccessMode, Handle);
}
