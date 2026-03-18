/*
 * XREFs of ?ProcessSetCutout@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETCUTOUT@@@Z @ 0x1801A0824
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetCutout(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWCASTER_SETCUTOUT *a3)
{
  *((_BYTE *)this + 97) = *((_DWORD *)a3 + 2) != 0;
  (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
