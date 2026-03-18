/*
 * XREFs of ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C005B8F0
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx

  v4 = a2;
  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p((__int64)this, &EventPagingEndPreparation, a3, *((_QWORD *)this + a2 + 143));
  if ( *((_DWORD *)this + v4 + 414) != *((_DWORD *)this + v4 + 478)
    || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, 0, 0LL, 0LL, 0, 0);
  }
  v5 = *((_QWORD *)this + v4 + 143);
  if ( v5 )
    *(_DWORD *)(v5 + 172) = *(_DWORD *)(v5 + 168);
}
