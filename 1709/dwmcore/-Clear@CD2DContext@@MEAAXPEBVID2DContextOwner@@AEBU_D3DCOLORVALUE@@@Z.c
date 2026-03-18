/*
 * XREFs of ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800450C0
 * Callers:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0ffff @ 0x18017511C (McTemplateU0ffff.c)
 */

void __fastcall CD2DContext::Clear(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v5; // eax
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 86);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v5 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0ffff(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_CLEAREVENT_Start,
      v7,
      v8,
      *(_DWORD *)(v6 + 68),
      *(_DWORD *)(v6 + 72));
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 176LL) + 376LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 176LL),
    a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_CLEAREVENT_Stop);
}
