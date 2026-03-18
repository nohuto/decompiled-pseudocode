/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00F2E94
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0091478 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGPROCESSSHAREDACCESS@@QEAA@XZ @ 0x1C00F2F0C (--1DXGPROCESSSHAREDACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(DXGSHAREDRESOURCEACCESS *this)
{
  char *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi

  v2 = (char *)this + 48;
  while ( *(char **)v2 != v2 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    v5 = v3 - 1;
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 != (__int64 *)8 )
    {
      DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS((DXGPROCESSSHAREDACCESS *)(v3 - 1));
      operator delete(v5);
    }
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8));
}
