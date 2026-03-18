/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01B07C8
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019486C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000BA4C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000D550 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v6; // rcx
  char *v7; // rcx
  struct _KEVENT *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v6 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v6 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v6);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  v7 = (char *)*((_QWORD *)this + 5);
  if ( v7 != (char *)this + 48 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    *((_QWORD *)this + 5) = 0LL;
  }
  v8 = (struct _KEVENT *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_BYTE *)this + 240) || *((DXGSESSIONMGR **)this + 28) != (DXGSESSIONMGR *)((char *)this + 224) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 127LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 184), a2, a3, a4);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 80), v10, v11, v12);
  DXGFASTMUTEX::~DXGFASTMUTEX(this, v13, v14, v15);
}
