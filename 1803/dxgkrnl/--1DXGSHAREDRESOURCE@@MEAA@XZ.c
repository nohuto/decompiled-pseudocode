/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00BF794
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0006AB0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C016A680 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C002C078 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00C10C0 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00E318C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  _QWORD *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete[](*((void **)this + 12));
  operator delete[](*((void **)this + 14));
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v2);
  }
  v3 = (_QWORD *)*((_QWORD *)this + 21);
  if ( v3 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v3);
  v4 = (_QWORD **)((char *)this + 128);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v3 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    v6 = v5 - 6;
    *v4 = v3;
    v3[1] = v4;
    if ( v5 != (_QWORD *)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v5 - 6));
      operator delete(v6);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v10 + 24) = 365LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = (char *)*((_QWORD *)this + 20);
  if ( v7 != (char *)this + 152 )
    operator delete[](v7);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v9 + 16), (struct DXGADAPTER *)v9);
  }
}
