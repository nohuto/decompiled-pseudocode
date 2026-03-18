/*
 * XREFs of ??2CDxHandleBitmapRealization@@KAPEAX_K@Z @ 0x180082DC4
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180082D0C (-Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C5E5C (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CDxHandleBitmapRealization::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = HeapAlloc(WPF::g_processHeap, 0, 0x198uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
