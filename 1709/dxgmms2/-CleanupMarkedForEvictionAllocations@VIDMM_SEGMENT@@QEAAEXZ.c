/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x1C004F9C4
 * Callers:
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C005E84C (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00592CC (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

bool __fastcall VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL **this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  bool v4; // zf
  __int64 v5; // r8
  VIDMM_GLOBAL *v6; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v2 = this + 22;
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    v4 = *v2 == (_QWORD)v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( !VIDMM_GLOBAL::UnderCleanupLimit(this[1]) )
    {
      v4 = v3 == v2;
      return !v4;
    }
    LOBYTE(v5) = 1;
    LOBYTE(v8) = 0;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, _QWORD *, __int64, _QWORD, int, _QWORD))*this + 6))(
      this,
      v3 - 48,
      v5,
      0LL,
      v8,
      0LL);
    v6 = this[1];
    *((_QWORD *)v6 + 888) += *(v3 - 47);
    ++*((_DWORD *)v6 + 1778);
  }
  return !v4;
}
