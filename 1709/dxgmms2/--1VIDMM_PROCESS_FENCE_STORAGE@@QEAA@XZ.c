/*
 * XREFs of ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C006FC94
 * Callers:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C00203EC (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0052650 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C000E5E4 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(VIDMM_PROCESS_FENCE_STORAGE *this)
{
  char *v2; // rbx
  char *v3; // rbx
  char *v4; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v5; // rcx
  __int64 v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rcx
  __int64 v8; // rax
  VIDMM_FENCE_STORAGE_PAGE *v9; // rcx
  __int64 v10; // rax

  v2 = (char *)this + 8;
  while ( *(char **)v2 != v2 )
  {
    v7 = *(VIDMM_FENCE_STORAGE_PAGE **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2
      || (v8 = *(_QWORD *)v7, *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v7 + 8LL) != v7) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v7);
  }
  v3 = (char *)this + 24;
  while ( *(char **)v3 != v3 )
  {
    v5 = *(VIDMM_FENCE_STORAGE_PAGE **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3
      || (v6 = *(_QWORD *)v5, *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v5);
  }
  v4 = (char *)this + 40;
  while ( *(char **)v4 != v4 )
  {
    v9 = *(VIDMM_FENCE_STORAGE_PAGE **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v10 = *(_QWORD *)v9, *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v9 + 8LL) != v9) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v10;
    *(_QWORD *)(v10 + 8) = v4;
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v9);
  }
}
