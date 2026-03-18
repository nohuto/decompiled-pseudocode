/*
 * XREFs of ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x180136A50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::SetSDRBoost(CHwndRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 98) != CCommonRegistryData::m_flSDRBoostOverride )
  {
    *((float *)this + 98) = CCommonRegistryData::m_flSDRBoostOverride;
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
    *((_BYTE *)this + 738) = 1;
  }
}
