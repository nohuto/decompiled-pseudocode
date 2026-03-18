/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017F70
 * Callers:
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00033CC (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0019DBC (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C008C7A8 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 v1; // rax
  int v3; // eax

  v1 = *(_QWORD *)this;
  *((_DWORD *)this + 24) = 1065353216;
  v3 = (*(__int64 (**)(void))(v1 + 288))();
  *((_BYTE *)this + 232) |= 0x40u;
  *((_DWORD *)this + 48) = v3;
  *((_DWORD *)this + 49) = -1;
  *((_DWORD *)this + 50) = -1;
  *((_DWORD *)this + 51) = -1;
  *((_DWORD *)this + 52) = -1;
  *((_DWORD *)this + 53) = -1;
  return 0LL;
}
