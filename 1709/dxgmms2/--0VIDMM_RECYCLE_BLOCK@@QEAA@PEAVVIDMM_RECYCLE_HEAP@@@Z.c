/*
 * XREFs of ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C006D49C
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C006953C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_HEAP *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 **v4; // r8

  *((_QWORD *)this + 4) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  ++*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v2 = (__int64 *)((char *)this + 16);
  v3 = *((_QWORD *)this + 4) + 32LL;
  v4 = *(__int64 ***)(*((_QWORD *)this + 4) + 40LL);
  if ( *v4 != (__int64 *)v3 )
    __fastfail(3u);
  *v2 = v3;
  *((_QWORD *)this + 3) = v4;
  *v4 = v2;
  *(_QWORD *)(v3 + 8) = v2;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  return this;
}
