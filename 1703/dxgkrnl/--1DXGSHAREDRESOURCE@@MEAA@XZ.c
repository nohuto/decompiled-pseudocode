/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00FEC54
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C000DA00 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C017EBFC (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C00257A8 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00FF010 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C0100DA0 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v8; // rcx
  DXGSHAREDRESOURCE_NONPAGED ***v9; // rdi
  DXGSHAREDRESOURCE_NONPAGED **v10; // rax
  DXGSHAREDRESOURCE_NONPAGED **v11; // rsi
  char *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (void *)*((_QWORD *)this + 14);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = (void *)*((_QWORD *)this + 18);
  if ( v7 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v7);
  }
  v8 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 21);
  if ( v8 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v8);
  v9 = (DXGSHAREDRESOURCE_NONPAGED ***)((char *)this + 128);
  while ( *v9 != (DXGSHAREDRESOURCE_NONPAGED **)v9 )
  {
    v10 = *v9;
    v8 = **v9;
    if ( (*v9)[1] != (DXGSHAREDRESOURCE_NONPAGED *)v9 || *((DXGSHAREDRESOURCE_NONPAGED ***)v8 + 1) != v10 )
      __fastfail(3u);
    v11 = v10 - 6;
    *v9 = (DXGSHAREDRESOURCE_NONPAGED **)v8;
    *((_QWORD *)v8 + 1) = v9;
    if ( v10 != (DXGSHAREDRESOURCE_NONPAGED **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v10 - 6));
      operator delete(v11);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 330LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v12 = (char *)*((_QWORD *)this + 20);
  if ( v12 != (char *)this + 152 && v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *((_QWORD *)this + 9);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v14 + 16), (struct DXGADAPTER *)v14);
  }
}
