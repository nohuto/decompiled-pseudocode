/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C00A3DBC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0095588 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(VIDMM_SEGMENT *this, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v4 = (_QWORD *)((char *)this + 200);
  while ( 1 )
  {
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    LOBYTE(a3) = 1;
    LOBYTE(v8) = 0;
    (*(void (__fastcall **)(VIDMM_SEGMENT *, _QWORD *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      v6 - 52,
      a3,
      0LL,
      v8,
      0LL);
    v7 = *(v6 - 50);
    if ( v7 >= *a2 )
    {
      *a2 = 0LL;
      return;
    }
    *a2 -= v7;
  }
}
