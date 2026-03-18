/*
 * XREFs of ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18012FF84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801A5D10 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  CHolographicManager *HolographicManager; // rax

  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 112) = 1;
  CMILMatrix::operator=((__int64)this + 140);
  HolographicManager = CComposition::GetHolographicManager(*((CComposition **)this + 2));
  *((_QWORD *)this + 9) = HolographicManager;
  if ( HolographicManager )
  {
    CHolographicManager::AddInteropTexture(HolographicManager, this);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
  }
  return 0LL;
}
