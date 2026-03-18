/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0091478
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C00033E0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C01824C8 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0023EE8 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C009127C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00F2E94 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v5; // rcx
  char *v6; // rdi
  DXGSHAREDRESOURCE_NONPAGED **v7; // rax
  DXGSHAREDRESOURCE_NONPAGED **v8; // rsi
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v4);
  }
  v5 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 21);
  if ( v5 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v5);
  v6 = (char *)this + 128;
  while ( *(char **)v6 != v6 )
  {
    v7 = *(DXGSHAREDRESOURCE_NONPAGED ***)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v5 = *v7, *((DXGSHAREDRESOURCE_NONPAGED ***)*v7 + 1) != v7) )
      __fastfail(3u);
    v8 = v7 - 6;
    *(_QWORD *)v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    if ( v7 != (DXGSHAREDRESOURCE_NONPAGED **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v7 - 6));
      operator delete(v8);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v12 + 24) = 363LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = (char *)*((_QWORD *)this + 20);
  if ( v9 != (char *)this + 152 && v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
  }
}
