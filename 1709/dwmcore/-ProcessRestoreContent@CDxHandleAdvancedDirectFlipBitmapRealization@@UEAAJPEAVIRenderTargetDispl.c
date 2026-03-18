/*
 * XREFs of ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1801D24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1801D25A0 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D2600 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ProcessRestoreContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetDisplay *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed int v6; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 2);
  if ( v4
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 376LL))(v4)
    && (!a2 || a2 == *((struct IRenderTargetDisplay **)this + 2)) )
  {
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 408));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xDEu);
    else
      CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 408));
  }
  return v3;
}
