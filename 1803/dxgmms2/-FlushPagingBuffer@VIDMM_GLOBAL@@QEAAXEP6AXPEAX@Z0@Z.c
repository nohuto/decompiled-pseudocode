/*
 * XREFs of ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C009DF14
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005E8F0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A29E4 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00B55E0 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBuffer(VIDMM_GLOBAL *this, unsigned __int8 a2, void (*a3)(void *), void *a4)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((_DWORD *)this + 1748); ++i )
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, i, a2, a3, a4, 0, 0);
}
