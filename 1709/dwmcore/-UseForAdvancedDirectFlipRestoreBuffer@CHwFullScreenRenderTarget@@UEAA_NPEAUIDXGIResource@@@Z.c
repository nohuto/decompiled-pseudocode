/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z @ 0x1801B8D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwFullScreenRenderTarget::UseForAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 45);
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 24) + 32LL))((char *)this - 192) )
    return (*(__int64 (__fastcall **)(_QWORD, struct IDXGIResource *))(**((_QWORD **)this + 5) + 128LL))(
             *((_QWORD *)this + 5),
             a2);
  else
    return 0;
}
