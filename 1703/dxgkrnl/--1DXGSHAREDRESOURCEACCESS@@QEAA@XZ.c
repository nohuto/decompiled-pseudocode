/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C0100DA0
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00FEC54 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGPROCESSSHAREDACCESS@@QEAA@XZ @ 0x1C0100E14 (--1DXGPROCESSSHAREDACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(
        DXGSHAREDRESOURCEACCESS *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rsi

  v5 = (__int64 **)((char *)this + 48);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    v8 = v6 - 1;
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    if ( v6 != (__int64 *)8 )
    {
      DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS((DXGPROCESSSHAREDACCESS *)(v6 - 1));
      operator delete(v8);
    }
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8), a2, a3, a4);
}
