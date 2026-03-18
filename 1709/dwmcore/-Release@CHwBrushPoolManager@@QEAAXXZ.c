/*
 * XREFs of ?Release@CHwBrushPoolManager@@QEAAXXZ @ 0x180085C40
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18007BC8C (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 * Callees:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x180085BF4 (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBrushPoolManager::Release(CHwBrushPoolManager *this)
{
  _DWORD *i; // rax

  CHwBrushPoolManager::ReleaseUnusedBrushes(this);
  for ( i = (_DWORD *)*((_QWORD *)this + 4); i != (_DWORD *)((char *)this + 32); i = *(_DWORD **)i )
    i[4] = 0;
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 18) == -1 )
    (*(void (__fastcall **)(CHwBrushPoolManager *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
}
