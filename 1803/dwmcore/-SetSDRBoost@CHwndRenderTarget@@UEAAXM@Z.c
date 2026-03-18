/*
 * XREFs of ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x180158F90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::SetSDRBoost(CHwndRenderTarget *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 110) != CCommonRegistryData::m_flSDRBoostOverride )
  {
    *((float *)this + 110) = CCommonRegistryData::m_flSDRBoostOverride;
    v3 = *((_QWORD *)this + 14);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
    *((_BYTE *)this + 97) = 1;
  }
}
