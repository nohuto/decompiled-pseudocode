/*
 * XREFs of ?ReleaseResources@CStartSizingFrame@@QEAAXXZ @ 0x1800CFFDC
 * Callers:
 *     ?Close@CStartExperienceManager@@UEAAJXZ @ 0x1800B6730 (-Close@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B6F60 (-OnViewDestroyed@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7BC0 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ClearDCompResources@CStartSizingFrame@@AEAAXXZ @ 0x1800D0DA0 (-ClearDCompResources@CStartSizingFrame@@AEAAXXZ.c)
 */

void __fastcall CStartSizingFrame::ReleaseResources(HWND *this)
{
  if ( *((_BYTE *)this + 206) )
  {
    PostMessageW(this[1], 0x10u, 0LL, 0LL);
    this[1] = 0LL;
    this[2] = 0LL;
    CStartSizingFrame::ClearDCompResources((CStartSizingFrame *)this);
    *((_BYTE *)this + 206) = 0;
  }
}
