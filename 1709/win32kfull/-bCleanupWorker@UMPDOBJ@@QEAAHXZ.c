/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00B9FFC
 * Callers:
 *     UMPDOBJ_bCleanupWrap @ 0x1C00B8F50 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C01A0D28 (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00B9F08 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     EngDeletePath @ 0x1C0266490 (EngDeletePath.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // r8
  PATHOBJ *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rdx
  void *v8; // rdx
  void *v9; // rdx

  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, 17, 0LL);
  if ( result )
  {
    v4 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v4 )
      EngDeletePath(v4);
    if ( *((_DWORD *)this + 109) )
    {
      v7 = (void *)*((_QWORD *)this + 8);
      if ( v7 )
        UMPDOBJ::vClient((UMPDOBJ *)v4, v7);
      v8 = (void *)*((_QWORD *)this + 10);
      if ( v8 )
        UMPDOBJ::vClient((UMPDOBJ *)v4, v8);
      v9 = (void *)*((_QWORD *)this + 12);
      if ( v9 )
        UMPDOBJ::vClient((UMPDOBJ *)v4, v9);
    }
    v5 = *((_QWORD *)this + 45);
    if ( v5 )
      MmUnmapViewOfSection(*((_QWORD *)this + 48), v5);
    v6 = *((_QWORD *)this + 53);
    if ( v6 )
      Win32FreePool(v6, v5, v3);
    return 1LL;
  }
  return result;
}
