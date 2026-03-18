/*
 * XREFs of ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AE550
 * Callers:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 90);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_ffff(
      v7,
      (unsigned int)&EVTDESC_ETWGUID_CLEAREVENT_Start,
      v8,
      v9,
      *(_DWORD *)(v6 + 68),
      *(_DWORD *)(v6 + 72));
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 176LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 176LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &EVTDESC_ETWGUID_CLEAREVENT_Stop);
}
