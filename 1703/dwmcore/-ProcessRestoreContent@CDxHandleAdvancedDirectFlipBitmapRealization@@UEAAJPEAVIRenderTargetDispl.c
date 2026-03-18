/*
 * XREFs of ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1801B5650
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1801B5790 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B57F0 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ProcessRestoreContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetDisplay *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 2);
  if ( v4
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 368LL))(v4)
    && (!a2 || a2 == *((struct IRenderTargetDisplay **)this + 2)) )
  {
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 424));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD4u);
    else
      CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 424));
  }
  return v3;
}
